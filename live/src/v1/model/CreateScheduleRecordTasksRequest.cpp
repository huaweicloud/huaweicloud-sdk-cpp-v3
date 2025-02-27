

#include "huaweicloud/live/v1/model/CreateScheduleRecordTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateScheduleRecordTasksRequest::CreateScheduleRecordTasksRequest()
{
    bodyIsSet_ = false;
}

CreateScheduleRecordTasksRequest::~CreateScheduleRecordTasksRequest() = default;

void CreateScheduleRecordTasksRequest::validate()
{
}

web::json::value CreateScheduleRecordTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateScheduleRecordTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ScheduleRecordTasksReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ScheduleRecordTasksReq CreateScheduleRecordTasksRequest::getBody() const
{
    return body_;
}

void CreateScheduleRecordTasksRequest::setBody(const ScheduleRecordTasksReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateScheduleRecordTasksRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateScheduleRecordTasksRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


