

#include "huaweicloud/meeting/v1/model/AddAppIdRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddAppIdRequestBody::AddAppIdRequestBody()
{
    appName_ = "";
    appNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

AddAppIdRequestBody::~AddAppIdRequestBody() = default;

void AddAppIdRequestBody::validate()
{
}

web::json::value AddAppIdRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool AddAppIdRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AddAppIdRequestBody::getAppName() const
{
    return appName_;
}

void AddAppIdRequestBody::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool AddAppIdRequestBody::appNameIsSet() const
{
    return appNameIsSet_;
}

void AddAppIdRequestBody::unsetappName()
{
    appNameIsSet_ = false;
}

std::string AddAppIdRequestBody::getDescription() const
{
    return description_;
}

void AddAppIdRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddAppIdRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddAppIdRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


