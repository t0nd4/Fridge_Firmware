#include <task.h>
#include <conts.h>

class Tasks
{
    public:
        Tasks();
        void add(const Task& task);
        const Task get_task();

    private:
        Task m_tasks[TASKS_COUNT];
        int m_current_index;
};