

#include "huaweicloud/cbr/v1/model/CreateVaultRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreateVaultRequest::CreateVaultRequest()
{
    bodyIsSet_ = false;
}

CreateVaultRequest::~CreateVaultRequest() = default;

void CreateVaultRequest::validate()
{
}

web::json::value CreateVaultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateVaultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VaultCreateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

VaultCreateReq CreateVaultRequest::getBody() const
{
    return body_;
}

void CreateVaultRequest::setBody(const VaultCreateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVaultRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVaultRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


