#include <task.h>
#include <conts.h>

class Tasks
{
    public:
        void add(const Task& task);

    private:
        Task m_tasks[TASKS_COUNT];
}