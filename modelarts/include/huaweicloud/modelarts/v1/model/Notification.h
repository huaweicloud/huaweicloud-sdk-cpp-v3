
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Notification_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Notification_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Notification
    : public ModelBase
{
public:
    Notification();
    virtual ~Notification();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Notification members

    /// <summary>
    /// **参数解释**：消息通知服务中所选主题的URN唯一资源标识。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// **参数解释**：触发消息通知的训练事件。 **约束限制**：枚举值： - JobStarted：作业开始 - JobCompleted：作业结束 - JobFailed：作业失败 - JobTerminated：作业终止 - JobRestarted：作业重启 - JobHanged：作业卡死 - JobPreempted：作业抢占
    /// </summary>

    std::vector<std::string>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<std::string>& value);


protected:
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::vector<std::string> events_;
    bool eventsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Notification_H_
