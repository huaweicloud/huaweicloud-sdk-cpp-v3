
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskListVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskListVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TaskVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskListVo
    : public ModelBase
{
public:
    TaskListVo();
    virtual ~TaskListVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskListVo members

    /// <summary>
    /// 测试任务集合
    /// </summary>

    std::vector<TaskVo>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<TaskVo>& value);

    /// <summary>
    /// 正在执行任务数
    /// </summary>

    int32_t getRunningCount() const;
    bool runningCountIsSet() const;
    void unsetrunningCount();
    void setRunningCount(int32_t value);


protected:
    std::vector<TaskVo> tasks_;
    bool tasksIsSet_;
    int32_t runningCount_;
    bool runningCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskListVo_H_
