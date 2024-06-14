#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task 
{
    string description;
    bool completed;
    Task(const string& desc):description(desc),completed(false){}
};

void displayMenu() 
{
    cout<< "\n\n******* To-Do List *******\n";
    cout<< "1. Add Task\n";
    cout<< "2. View Tasks\n";
    cout<< "3. Mark Task as Completed\n";
    cout<< "4. Delete Task\n";
    cout<< "5. Exit\n";
}

void addTask(vector<Task>& tasks) 
{
    cout<< "Enter a new task: ";
    string description;
    cin.ignore();
    getline(cin, description);
 	tasks.push_back(Task(description));
    cout<< "Task added.\n";
}

void Taskview(const vector<Task>& tasks) 
{
    if (tasks.empty()) 
	{
    cout<<"To Do list is empty.";
    } 
	else 
	{

        cout<<"\nTASKS: \n";
        cout<<"-------------------------\n";
        for (size_t i = 0; i < tasks.size(); ++i) 
		{
            cout<<i+1<<". "<< tasks[i].description<<" ["<<(tasks[i].completed ?"Completed":"Pending")<<"]\n";
        }
        cout<<"-------------------------\n";
    }
}

void TaskCompleted(vector<Task>& tasks) 
{
    Taskview(tasks);
    if (tasks.empty()) return;

    cout<< "Enter the task number to mark as completed: ";
    size_t taskNum;
    cin>>taskNum;

    if (taskNum>0 && taskNum<=tasks.size()) 
	{
        tasks[taskNum-1].completed=true;
        cout<<"Task marked as completed.\n";
    } 
	else 
	{
        cout<<"Invalid task number.\n";
    }
}

void deleteTask(vector<Task>& tasks) 
{
    Taskview(tasks);
    if (tasks.empty()) return;

    cout<<"Enter the task number to delete: ";
    size_t taskNum;
    cin>>taskNum;

    if (taskNum>0 && taskNum<=tasks.size()) 
	{
        tasks.erase(tasks.begin()+taskNum - 1);
        cout<<"Task deleted.\n";
    } 
	else 
	{
        cout<<"Invalid task number.\n";
    }
}

int main() 
{
	vector<Task> tasks;
    int choice;

    do 
	{
        displayMenu();
        cout<<"Choose the given Task: ";
        cin>>choice;

        switch (choice) 
		{
            case 1:
                addTask(tasks);
                break;
            case 2:
                Taskview(tasks);
                break;           
			case 3:
                TaskCompleted(tasks);
                break;
            case 4:
                deleteTask(tasks);
                break;
            case 5:
                cout<<"Exited to-do-list.\n";
                break;
            default:
                cout<<"Invalid choice. Please choose the given task.\n";
        }
    } 
	while (choice!=5);

    return 0;
}

