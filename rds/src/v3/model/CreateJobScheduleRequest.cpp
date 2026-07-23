

#include "huaweicloud/rds/v3/model/CreateJobScheduleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateJobScheduleRequest::CreateJobScheduleRequest()
{
    bodyIsSet_ = false;
}

CreateJobScheduleRequest::~CreateJobScheduleRequest() = default;

void CreateJobScheduleRequest::validate()
{
}

web::json::value CreateJobScheduleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateJobScheduleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateJobScheduleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateJobScheduleRequestBody CreateJobScheduleRequest::getBody() const
{
    return body_;
}

void CreateJobScheduleRequest::setBody(const CreateJobScheduleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateJobScheduleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateJobScheduleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


