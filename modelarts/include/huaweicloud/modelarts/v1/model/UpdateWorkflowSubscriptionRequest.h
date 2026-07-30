
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkflowSubscriptionRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkflowSubscriptionRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Subscription.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateWorkflowSubscriptionRequest
    : public ModelBase
{
public:
    UpdateWorkflowSubscriptionRequest();
    virtual ~UpdateWorkflowSubscriptionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWorkflowSubscriptionRequest members

    /// <summary>
    /// 消息订阅ID。
    /// </summary>

    std::string getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetsubscriptionId();
    void setSubscriptionId(const std::string& value);

    /// <summary>
    /// 工作流的ID。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Subscription getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const Subscription& value);


protected:
    std::string subscriptionId_;
    bool subscriptionIdIsSet_;
    std::string workflowId_;
    bool workflowIdIsSet_;
    Subscription body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateWorkflowSubscriptionRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateWorkflowSubscriptionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkflowSubscriptionRequest_H_
