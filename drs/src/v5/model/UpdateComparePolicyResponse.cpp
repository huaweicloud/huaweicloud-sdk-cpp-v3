

#include "huaweicloud/drs/v5/model/UpdateComparePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateComparePolicyResponse::UpdateComparePolicyResponse()
{
    bodyIsSet_ = false;
}

UpdateComparePolicyResponse::~UpdateComparePolicyResponse() = default;

void UpdateComparePolicyResponse::validate()
{
}

web::json::value UpdateComparePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateComparePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object UpdateComparePolicyResponse::getBody() const
{
    return body_;
}

void UpdateComparePolicyResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateComparePolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateComparePolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


