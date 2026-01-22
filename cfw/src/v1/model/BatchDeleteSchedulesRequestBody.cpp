

#include "huaweicloud/cfw/v1/model/BatchDeleteSchedulesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteSchedulesRequestBody::BatchDeleteSchedulesRequestBody()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    scheduleIdsIsSet_ = false;
}

BatchDeleteSchedulesRequestBody::~BatchDeleteSchedulesRequestBody() = default;

void BatchDeleteSchedulesRequestBody::validate()
{
}

web::json::value BatchDeleteSchedulesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(scheduleIdsIsSet_) {
        val[utility::conversions::to_string_t("schedule_ids")] = ModelBase::toJson(scheduleIds_);
    }

    return val;
}
bool BatchDeleteSchedulesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleIds(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteSchedulesRequestBody::getObjectId() const
{
    return objectId_;
}

void BatchDeleteSchedulesRequestBody::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool BatchDeleteSchedulesRequestBody::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void BatchDeleteSchedulesRequestBody::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<std::string>& BatchDeleteSchedulesRequestBody::getScheduleIds()
{
    return scheduleIds_;
}

void BatchDeleteSchedulesRequestBody::setScheduleIds(const std::vector<std::string>& value)
{
    scheduleIds_ = value;
    scheduleIdsIsSet_ = true;
}

bool BatchDeleteSchedulesRequestBody::scheduleIdsIsSet() const
{
    return scheduleIdsIsSet_;
}

void BatchDeleteSchedulesRequestBody::unsetscheduleIds()
{
    scheduleIdsIsSet_ = false;
}

}
}
}
}
}


