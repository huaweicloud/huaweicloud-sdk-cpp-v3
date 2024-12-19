
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_DeleteWafWhiteIpRuleRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_DeleteWafWhiteIpRuleRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/DeleteWafWhiteIpRuleV2RequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  DeleteWafWhiteIpRuleRequest
    : public ModelBase
{
public:
    DeleteWafWhiteIpRuleRequest();
    virtual ~DeleteWafWhiteIpRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteWafWhiteIpRuleRequest members

    /// <summary>
    /// 
    /// </summary>

    DeleteWafWhiteIpRuleV2RequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteWafWhiteIpRuleV2RequestBody& value);


protected:
    DeleteWafWhiteIpRuleV2RequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteWafWhiteIpRuleRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteWafWhiteIpRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_DeleteWafWhiteIpRuleRequest_H_
