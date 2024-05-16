

#include "huaweicloud/gaussdb/v3/model/ListHtapFlavorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListHtapFlavorRequest::ListHtapFlavorRequest()
{
    engineName_ = "";
    engineNameIsSet_ = false;
    availabilityZoneMode_ = "";
    availabilityZoneModeIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    versionName_ = "";
    versionNameIsSet_ = false;
}

ListHtapFlavorRequest::~ListHtapFlavorRequest() = default;

void ListHtapFlavorRequest::validate()
{
}

web::json::value ListHtapFlavorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(availabilityZoneModeIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_mode")] = ModelBase::toJson(availabilityZoneMode_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }

    return val;
}
bool ListHtapFlavorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    return ok;
}


std::string ListHtapFlavorRequest::getEngineName() const
{
    return engineName_;
}

void ListHtapFlavorRequest::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ListHtapFlavorRequest::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ListHtapFlavorRequest::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ListHtapFlavorRequest::getAvailabilityZoneMode() const
{
    return availabilityZoneMode_;
}

void ListHtapFlavorRequest::setAvailabilityZoneMode(const std::string& value)
{
    availabilityZoneMode_ = value;
    availabilityZoneModeIsSet_ = true;
}

bool ListHtapFlavorRequest::availabilityZoneModeIsSet() const
{
    return availabilityZoneModeIsSet_;
}

void ListHtapFlavorRequest::unsetavailabilityZoneMode()
{
    availabilityZoneModeIsSet_ = false;
}

std::string ListHtapFlavorRequest::getSpecCode() const
{
    return specCode_;
}

void ListHtapFlavorRequest::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ListHtapFlavorRequest::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ListHtapFlavorRequest::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string ListHtapFlavorRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHtapFlavorRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHtapFlavorRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHtapFlavorRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListHtapFlavorRequest::getVersionName() const
{
    return versionName_;
}

void ListHtapFlavorRequest::setVersionName(const std::string& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool ListHtapFlavorRequest::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void ListHtapFlavorRequest::unsetversionName()
{
    versionNameIsSet_ = false;
}

}
}
}
}
}


