

#include "huaweicloud/codeartsbuild/v3/model/CountdownRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CountdownRequestBody::CountdownRequestBody()
{
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    reminderDay_ = "";
    reminderDayIsSet_ = false;
}

CountdownRequestBody::~CountdownRequestBody() = default;

void CountdownRequestBody::validate()
{
}

web::json::value CountdownRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(reminderDayIsSet_) {
        val[utility::conversions::to_string_t("reminder_day")] = ModelBase::toJson(reminderDay_);
    }

    return val;
}
bool CountdownRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reminder_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reminder_day"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReminderDay(refVal);
        }
    }
    return ok;
}


std::string CountdownRequestBody::getServiceType() const
{
    return serviceType_;
}

void CountdownRequestBody::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool CountdownRequestBody::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void CountdownRequestBody::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string CountdownRequestBody::getResourceId() const
{
    return resourceId_;
}

void CountdownRequestBody::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CountdownRequestBody::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CountdownRequestBody::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string CountdownRequestBody::getReminderDay() const
{
    return reminderDay_;
}

void CountdownRequestBody::setReminderDay(const std::string& value)
{
    reminderDay_ = value;
    reminderDayIsSet_ = true;
}

bool CountdownRequestBody::reminderDayIsSet() const
{
    return reminderDayIsSet_;
}

void CountdownRequestBody::unsetreminderDay()
{
    reminderDayIsSet_ = false;
}

}
}
}
}
}


