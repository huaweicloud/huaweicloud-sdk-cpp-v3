

#include "huaweicloud/vod/v1/model/AddSubtitle.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AddSubtitle::AddSubtitle()
{
    type_ = "";
    typeIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    obsInfoIsSet_ = false;
}

AddSubtitle::~AddSubtitle() = default;

void AddSubtitle::validate()
{
}

web::json::value AddSubtitle::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(obsInfoIsSet_) {
        val[utility::conversions::to_string_t("obs_info")] = ModelBase::toJson(obsInfo_);
    }

    return val;
}
bool AddSubtitle::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_info"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsInfo(refVal);
        }
    }
    return ok;
}


std::string AddSubtitle::getType() const
{
    return type_;
}

void AddSubtitle::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AddSubtitle::typeIsSet() const
{
    return typeIsSet_;
}

void AddSubtitle::unsettype()
{
    typeIsSet_ = false;
}

std::string AddSubtitle::getLanguage() const
{
    return language_;
}

void AddSubtitle::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool AddSubtitle::languageIsSet() const
{
    return languageIsSet_;
}

void AddSubtitle::unsetlanguage()
{
    languageIsSet_ = false;
}

ObsInfo AddSubtitle::getObsInfo() const
{
    return obsInfo_;
}

void AddSubtitle::setObsInfo(const ObsInfo& value)
{
    obsInfo_ = value;
    obsInfoIsSet_ = true;
}

bool AddSubtitle::obsInfoIsSet() const
{
    return obsInfoIsSet_;
}

void AddSubtitle::unsetobsInfo()
{
    obsInfoIsSet_ = false;
}

}
}
}
}
}


