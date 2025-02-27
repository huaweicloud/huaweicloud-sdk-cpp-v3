

#include "huaweicloud/live/v1/model/DeleteScheduleRecordTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteScheduleRecordTasksResponse::DeleteScheduleRecordTasksResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteScheduleRecordTasksResponse::~DeleteScheduleRecordTasksResponse() = default;

void DeleteScheduleRecordTasksResponse::validate()
{
}

web::json::value DeleteScheduleRecordTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteScheduleRecordTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string DeleteScheduleRecordTasksResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteScheduleRecordTasksResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteScheduleRecordTasksResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteScheduleRecordTasksResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


