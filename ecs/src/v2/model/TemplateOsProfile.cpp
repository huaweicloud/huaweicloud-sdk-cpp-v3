

#include "huaweicloud/ecs/v2/model/TemplateOsProfile.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateOsProfile::TemplateOsProfile()
{
    keyName_ = "";
    keyNameIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    iamAgencyName_ = "";
    iamAgencyNameIsSet_ = false;
    enableMonitoringService_ = false;
    enableMonitoringServiceIsSet_ = false;
}

TemplateOsProfile::~TemplateOsProfile() = default;

void TemplateOsProfile::validate()
{
}

web::json::value TemplateOsProfile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(iamAgencyNameIsSet_) {
        val[utility::conversions::to_string_t("iam_agency_name")] = ModelBase::toJson(iamAgencyName_);
    }
    if(enableMonitoringServiceIsSet_) {
        val[utility::conversions::to_string_t("enable_monitoring_service")] = ModelBase::toJson(enableMonitoringService_);
    }

    return val;
}
bool TemplateOsProfile::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iam_agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iam_agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIamAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_monitoring_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_monitoring_service"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableMonitoringService(refVal);
        }
    }
    return ok;
}


std::string TemplateOsProfile::getKeyName() const
{
    return keyName_;
}

void TemplateOsProfile::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool TemplateOsProfile::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void TemplateOsProfile::unsetkeyName()
{
    keyNameIsSet_ = false;
}

std::string TemplateOsProfile::getUserData() const
{
    return userData_;
}

void TemplateOsProfile::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool TemplateOsProfile::userDataIsSet() const
{
    return userDataIsSet_;
}

void TemplateOsProfile::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string TemplateOsProfile::getIamAgencyName() const
{
    return iamAgencyName_;
}

void TemplateOsProfile::setIamAgencyName(const std::string& value)
{
    iamAgencyName_ = value;
    iamAgencyNameIsSet_ = true;
}

bool TemplateOsProfile::iamAgencyNameIsSet() const
{
    return iamAgencyNameIsSet_;
}

void TemplateOsProfile::unsetiamAgencyName()
{
    iamAgencyNameIsSet_ = false;
}

bool TemplateOsProfile::isEnableMonitoringService() const
{
    return enableMonitoringService_;
}

void TemplateOsProfile::setEnableMonitoringService(bool value)
{
    enableMonitoringService_ = value;
    enableMonitoringServiceIsSet_ = true;
}

bool TemplateOsProfile::enableMonitoringServiceIsSet() const
{
    return enableMonitoringServiceIsSet_;
}

void TemplateOsProfile::unsetenableMonitoringService()
{
    enableMonitoringServiceIsSet_ = false;
}

}
}
}
}
}


