

#include "huaweicloud/cbr/v1/model/BatchUpdateVaultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BatchUpdateVaultRequest::BatchUpdateVaultRequest()
{
    bodyIsSet_ = false;
}

BatchUpdateVaultRequest::~BatchUpdateVaultRequest() = default;

void BatchUpdateVaultRequest::validate()
{
}

web::json::value BatchUpdateVaultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateVaultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchUpdateVaultRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchUpdateVaultRequestBody BatchUpdateVaultRequest::getBody() const
{
    return body_;
}

void BatchUpdateVaultRequest::setBody(const BatchUpdateVaultRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateVaultRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateVaultRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


