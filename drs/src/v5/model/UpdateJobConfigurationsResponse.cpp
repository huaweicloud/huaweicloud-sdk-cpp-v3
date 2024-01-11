

#include "huaweicloud/drs/v5/model/UpdateJobConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateJobConfigurationsResponse::UpdateJobConfigurationsResponse()
{
    bodyIsSet_ = false;
}

UpdateJobConfigurationsResponse::~UpdateJobConfigurationsResponse() = default;

void UpdateJobConfigurationsResponse::validate()
{
}

web::json::value UpdateJobConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateJobConfigurationsResponse::fromJson(const web::json::value& val)
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


Object UpdateJobConfigurationsResponse::getBody() const
{
    return body_;
}

void UpdateJobConfigurationsResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateJobConfigurationsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateJobConfigurationsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


