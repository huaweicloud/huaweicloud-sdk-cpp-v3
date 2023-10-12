

#include "huaweicloud/cbr/v1/model/ShowVaultResourceInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowVaultResourceInstancesRequest::ShowVaultResourceInstancesRequest()
{
    bodyIsSet_ = false;
}

ShowVaultResourceInstancesRequest::~ShowVaultResourceInstancesRequest() = default;

void ShowVaultResourceInstancesRequest::validate()
{
}

web::json::value ShowVaultResourceInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowVaultResourceInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VaultResourceInstancesReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


VaultResourceInstancesReq ShowVaultResourceInstancesRequest::getBody() const
{
    return body_;
}

void ShowVaultResourceInstancesRequest::setBody(const VaultResourceInstancesReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowVaultResourceInstancesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowVaultResourceInstancesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


