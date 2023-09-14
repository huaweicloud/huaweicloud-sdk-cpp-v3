
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionRequest_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/AddSubscriptionRequestBody.h>

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
class HUAWEICLOUD_SMN_V2_EXPORT  AddSubscriptionRequest
    : public ModelBase
{
public:
    AddSubscriptionRequest();
    virtual ~AddSubscriptionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddSubscriptionRequest members

    /// <summary>
    /// Topic的唯一的资源标识，可通过[查询主题列表](smn_api_51004.xml)获取该标识。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddSubscriptionRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddSubscriptionRequestBody& value);


protected:
    std::string topicUrn_;
    bool topicUrnIsSet_;
    AddSubscriptionRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddSubscriptionRequest& dereference_from_shared_ptr(std::shared_ptr<AddSubscriptionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionRequest_H_
