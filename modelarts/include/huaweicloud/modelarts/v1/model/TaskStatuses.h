
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskStatuses_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskStatuses_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练在子任务状态信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TaskStatuses
    : public ModelBase
{
public:
    TaskStatuses();
    virtual ~TaskStatuses();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskStatuses members

    /// <summary>
    /// 训练作业子任务名称。
    /// </summary>

    std::string getTask() const;
    bool taskIsSet() const;
    void unsettask();
    void setTask(const std::string& value);

    /// <summary>
    /// 训练作业子任务退出码。
    /// </summary>

    int32_t getExitCode() const;
    bool exitCodeIsSet() const;
    void unsetexitCode();
    void setExitCode(int32_t value);

    /// <summary>
    /// 训练作业子任务错误消息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string task_;
    bool taskIsSet_;
    int32_t exitCode_;
    bool exitCodeIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskStatuses_H_
