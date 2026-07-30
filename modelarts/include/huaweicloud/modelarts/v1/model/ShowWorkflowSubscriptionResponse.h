
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowSubscriptionResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowSubscriptionResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowWorkflowSubscriptionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkflowSubscriptionResponse();
    virtual ~ShowWorkflowSubscriptionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkflowSubscriptionResponse members

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 订阅ID，唯一性标识。创建订阅时，后台自动生成。
    /// </summary>

    std::string getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetsubscriptionId();
    void setSubscriptionId(const std::string& value);

    /// <summary>
    /// 订阅的主题。
    /// </summary>

    std::vector<std::string>& getTopicUrns();
    bool topicUrnsIsSet() const;
    void unsettopicUrns();
    void setTopicUrns(const std::vector<std::string>& value);

    /// <summary>
    /// 订阅的主体。
    /// </summary>

    std::string getEntity() const;
    bool entityIsSet() const;
    void unsetentity();
    void setEntity(const std::string& value);

    /// <summary>
    /// 订阅的事件。
    /// </summary>

    std::vector<std::string>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<std::string>& value);


protected:
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string subscriptionId_;
    bool subscriptionIdIsSet_;
    std::vector<std::string> topicUrns_;
    bool topicUrnsIsSet_;
    std::string entity_;
    bool entityIsSet_;
    std::vector<std::string> events_;
    bool eventsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowSubscriptionResponse_H_
