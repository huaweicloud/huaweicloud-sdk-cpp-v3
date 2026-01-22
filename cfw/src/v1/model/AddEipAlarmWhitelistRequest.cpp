

#include "huaweicloud/cfw/v1/model/AddEipAlarmWhitelistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddEipAlarmWhitelistRequest::AddEipAlarmWhitelistRequest()
{
    bodyIsSet_ = false;
}

AddEipAlarmWhitelistRequest::~AddEipAlarmWhitelistRequest() = default;

void AddEipAlarmWhitelistRequest::validate()
{
}

web::json::value AddEipAlarmWhitelistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddEipAlarmWhitelistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddEipAlarmWhitelistRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AddEipAlarmWhitelistRequestBody AddEipAlarmWhitelistRequest::getBody() const
{
    return body_;
}

void AddEipAlarmWhitelistRequest::setBody(const AddEipAlarmWhitelistRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddEipAlarmWhitelistRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddEipAlarmWhitelistRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


