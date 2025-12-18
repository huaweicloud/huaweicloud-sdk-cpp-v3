

#include "huaweicloud/meeting/v1/model/UpdateAppIdRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateAppIdRequestBody::UpdateAppIdRequestBody()
{
    appName_ = "";
    appNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

UpdateAppIdRequestBody::~UpdateAppIdRequestBody() = default;

void UpdateAppIdRequestBody::validate()
{
}

web::json::value UpdateAppIdRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateAppIdRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateAppIdRequestBody::getAppName() const
{
    return appName_;
}

void UpdateAppIdRequestBody::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool UpdateAppIdRequestBody::appNameIsSet() const
{
    return appNameIsSet_;
}

void UpdateAppIdRequestBody::unsetappName()
{
    appNameIsSet_ = false;
}

std::string UpdateAppIdRequestBody::getDescription() const
{
    return description_;
}

void UpdateAppIdRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateAppIdRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateAppIdRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t UpdateAppIdRequestBody::getStatus() const
{
    return status_;
}

void UpdateAppIdRequestBody::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAppIdRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAppIdRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


