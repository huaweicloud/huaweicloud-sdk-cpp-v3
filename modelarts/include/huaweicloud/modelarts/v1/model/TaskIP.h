
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskIP_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskIP_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TaskIP
    : public ModelBase
{
public:
    TaskIP();
    virtual ~TaskIP();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskIP members

    /// <summary>
    /// Task 名称，如 worker-0。
    /// </summary>

    std::string getTask() const;
    bool taskIsSet() const;
    void unsettask();
    void setTask(const std::string& value);

    /// <summary>
    /// Task IP 地址。
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 宿主机 IP。 **约束限制**：仅专属资源池作业返回；公共资源池作业该字段为空。
    /// </summary>

    std::string getHostIp() const;
    bool hostIpIsSet() const;
    void unsethostIp();
    void setHostIp(const std::string& value);

    /// <summary>
    /// 当前 Task 的第几次调度，默认 1。 重调度、抢占等场景下递增。
    /// </summary>

    int32_t getScheduleCount() const;
    bool scheduleCountIsSet() const;
    void unsetscheduleCount();
    void setScheduleCount(int32_t value);


protected:
    std::string task_;
    bool taskIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string hostIp_;
    bool hostIpIsSet_;
    int32_t scheduleCount_;
    bool scheduleCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskIP_H_
