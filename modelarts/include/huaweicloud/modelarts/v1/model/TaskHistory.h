
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskHistory_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskHistory_H_


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
/// **参数解释**：训练作业的某次调度的某个实例信息，包含实例IP、实例所在的节点IP、该实例归属于第几次调度等。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TaskHistory
    : public ModelBase
{
public:
    TaskHistory();
    virtual ~TaskHistory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskHistory members

    /// <summary>
    /// **参数解释**：实例名。 **取值范围**：不涉及。
    /// </summary>

    std::string getTask() const;
    bool taskIsSet() const;
    void unsettask();
    void setTask(const std::string& value);

    /// <summary>
    /// **参数解释**：实例IP。 **取值范围**：不涉及。
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// **参数解释**：实例所在的节点IP。 **取值范围**：不涉及。
    /// </summary>

    std::string getHostIp() const;
    bool hostIpIsSet() const;
    void unsethostIp();
    void setHostIp(const std::string& value);

    /// <summary>
    /// **参数解释**：该实例归属于第几次调度。 **取值范围**：不涉及。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskHistory_H_
