

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlFlavorsRequest::ShowGaussMySqlFlavorsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    versionName_ = "";
    versionNameIsSet_ = false;
    availabilityZoneMode_ = "";
    availabilityZoneModeIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
}

ShowGaussMySqlFlavorsRequest::~ShowGaussMySqlFlavorsRequest() = default;

void ShowGaussMySqlFlavorsRequest::validate()
{
}

web::json::value ShowGaussMySqlFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }
    if(availabilityZoneModeIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_mode")] = ModelBase::toJson(availabilityZoneMode_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }

    return val;
}
bool ShowGaussMySqlFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    return ok;
}


std::string ShowGaussMySqlFlavorsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlFlavorsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlFlavorsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlFlavorsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlFlavorsRequest::getDatabaseName() const
{
    return databaseName_;
}

void ShowGaussMySqlFlavorsRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ShowGaussMySqlFlavorsRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ShowGaussMySqlFlavorsRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ShowGaussMySqlFlavorsRequest::getVersionName() const
{
    return versionName_;
}

void ShowGaussMySqlFlavorsRequest::setVersionName(const std::string& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool ShowGaussMySqlFlavorsRequest::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void ShowGaussMySqlFlavorsRequest::unsetversionName()
{
    versionNameIsSet_ = false;
}

std::string ShowGaussMySqlFlavorsRequest::getAvailabilityZoneMode() const
{
    return availabilityZoneMode_;
}

void ShowGaussMySqlFlavorsRequest::setAvailabilityZoneMode(const std::string& value)
{
    availabilityZoneMode_ = value;
    availabilityZoneModeIsSet_ = true;
}

bool ShowGaussMySqlFlavorsRequest::availabilityZoneModeIsSet() const
{
    return availabilityZoneModeIsSet_;
}

void ShowGaussMySqlFlavorsRequest::unsetavailabilityZoneMode()
{
    availabilityZoneModeIsSet_ = false;
}

std::string ShowGaussMySqlFlavorsRequest::getSpecCode() const
{
    return specCode_;
}

void ShowGaussMySqlFlavorsRequest::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ShowGaussMySqlFlavorsRequest::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ShowGaussMySqlFlavorsRequest::unsetspecCode()
{
    specCodeIsSet_ = false;
}

}
}
}
}
}


