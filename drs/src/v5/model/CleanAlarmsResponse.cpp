

#include "huaweicloud/drs/v5/model/CleanAlarmsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CleanAlarmsResponse::CleanAlarmsResponse()
{
    bodyIsSet_ = false;
}

CleanAlarmsResponse::~CleanAlarmsResponse() = default;

void CleanAlarmsResponse::validate()
{
}

web::json::value CleanAlarmsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CleanAlarmsResponse::fromJson(const web::json::value& val)
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


Object CleanAlarmsResponse::getBody() const
{
    return body_;
}

void CleanAlarmsResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CleanAlarmsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CleanAlarmsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


