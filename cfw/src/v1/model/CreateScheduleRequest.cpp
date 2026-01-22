

#include "huaweicloud/cfw/v1/model/CreateScheduleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateScheduleRequest::CreateScheduleRequest()
{
    bodyIsSet_ = false;
}

CreateScheduleRequest::~CreateScheduleRequest() = default;

void CreateScheduleRequest::validate()
{
}

web::json::value CreateScheduleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateScheduleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ScheduleInfoDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ScheduleInfoDTO CreateScheduleRequest::getBody() const
{
    return body_;
}

void CreateScheduleRequest::setBody(const ScheduleInfoDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateScheduleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateScheduleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


