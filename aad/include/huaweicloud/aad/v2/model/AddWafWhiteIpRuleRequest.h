
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_AddWafWhiteIpRuleRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_AddWafWhiteIpRuleRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/AddWafWhiteIpRuleV2RequestBody.h>

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
class HUAWEICLOUD_AAD_V2_EXPORT  AddWafWhiteIpRuleRequest
    : public ModelBase
{
public:
    AddWafWhiteIpRuleRequest();
    virtual ~AddWafWhiteIpRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddWafWhiteIpRuleRequest members

    /// <summary>
    /// 
    /// </summary>

    AddWafWhiteIpRuleV2RequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddWafWhiteIpRuleV2RequestBody& value);


protected:
    AddWafWhiteIpRuleV2RequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddWafWhiteIpRuleRequest& dereference_from_shared_ptr(std::shared_ptr<AddWafWhiteIpRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_AddWafWhiteIpRuleRequest_H_
