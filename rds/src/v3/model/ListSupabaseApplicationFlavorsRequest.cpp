

#include "huaweicloud/rds/v3/model/ListSupabaseApplicationFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSupabaseApplicationFlavorsRequest::ListSupabaseApplicationFlavorsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    isFree_ = false;
    isFreeIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

ListSupabaseApplicationFlavorsRequest::~ListSupabaseApplicationFlavorsRequest() = default;

void ListSupabaseApplicationFlavorsRequest::validate()
{
}

web::json::value ListSupabaseApplicationFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(isFreeIsSet_) {
        val[utility::conversions::to_string_t("is_free")] = ModelBase::toJson(isFree_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool ListSupabaseApplicationFlavorsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_free"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_free"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFree(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string ListSupabaseApplicationFlavorsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSupabaseApplicationFlavorsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSupabaseApplicationFlavorsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSupabaseApplicationFlavorsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSupabaseApplicationFlavorsRequest::getVersion() const
{
    return version_;
}

void ListSupabaseApplicationFlavorsRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListSupabaseApplicationFlavorsRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListSupabaseApplicationFlavorsRequest::unsetversion()
{
    versionIsSet_ = false;
}

std::string ListSupabaseApplicationFlavorsRequest::getSpecCode() const
{
    return specCode_;
}

void ListSupabaseApplicationFlavorsRequest::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ListSupabaseApplicationFlavorsRequest::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ListSupabaseApplicationFlavorsRequest::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string ListSupabaseApplicationFlavorsRequest::getAzCode() const
{
    return azCode_;
}

void ListSupabaseApplicationFlavorsRequest::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool ListSupabaseApplicationFlavorsRequest::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void ListSupabaseApplicationFlavorsRequest::unsetazCode()
{
    azCodeIsSet_ = false;
}

bool ListSupabaseApplicationFlavorsRequest::isIsFree() const
{
    return isFree_;
}

void ListSupabaseApplicationFlavorsRequest::setIsFree(bool value)
{
    isFree_ = value;
    isFreeIsSet_ = true;
}

bool ListSupabaseApplicationFlavorsRequest::isFreeIsSet() const
{
    return isFreeIsSet_;
}

void ListSupabaseApplicationFlavorsRequest::unsetisFree()
{
    isFreeIsSet_ = false;
}

std::string ListSupabaseApplicationFlavorsRequest::getMode() const
{
    return mode_;
}

void ListSupabaseApplicationFlavorsRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListSupabaseApplicationFlavorsRequest::modeIsSet() const
{
    return modeIsSet_;
}

void ListSupabaseApplicationFlavorsRequest::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


