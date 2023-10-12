
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateSubscriptionRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateSubscriptionRequest_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/UpdateSubscriptionRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateSubscriptionRequest
    : public ModelBase
{
public:
    UpdateSubscriptionRequest();
    virtual ~UpdateSubscriptionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSubscriptionRequest members

    /// <summary>
    /// Topic的唯一的资源标识。可以通过[查看主题列表](smn_api_51004.xml)获取该标识。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 订阅者的唯一的资源标识，可通过[查询订阅者列表](ListSubscriptions.xml)获取该标识。
    /// </summary>

    std::string getSubscriptionUrn() const;
    bool subscriptionUrnIsSet() const;
    void unsetsubscriptionUrn();
    void setSubscriptionUrn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateSubscriptionRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateSubscriptionRequestBody& value);


protected:
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::string subscriptionUrn_;
    bool subscriptionUrnIsSet_;
    UpdateSubscriptionRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateSubscriptionRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateSubscriptionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateSubscriptionRequest_H_
