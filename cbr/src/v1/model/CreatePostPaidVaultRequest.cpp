

#include "huaweicloud/cbr/v1/model/CreatePostPaidVaultRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreatePostPaidVaultRequest::CreatePostPaidVaultRequest()
{
    bodyIsSet_ = false;
}

CreatePostPaidVaultRequest::~CreatePostPaidVaultRequest() = default;

void CreatePostPaidVaultRequest::validate()
{
}

web::json::value CreatePostPaidVaultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreatePostPaidVaultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VaultOrderCreateReqs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

VaultOrderCreateReqs CreatePostPaidVaultRequest::getBody() const
{
    return body_;
}

void CreatePostPaidVaultRequest::setBody(const VaultOrderCreateReqs& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePostPaidVaultRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePostPaidVaultRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


