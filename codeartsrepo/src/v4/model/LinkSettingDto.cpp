

#include "huaweicloud/codeartsrepo/v4/model/LinkSettingDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




LinkSettingDto::LinkSettingDto()
{
    active_ = false;
    activeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    appAuthType_ = "";
    appAuthTypeIsSet_ = false;
    appAk_ = "";
    appAkIsSet_ = false;
    appSk_ = "";
    appSkIsSet_ = false;
    categories_ = "";
    categoriesIsSet_ = false;
    excludeStatuses_ = "";
    excludeStatusesIsSet_ = false;
}

LinkSettingDto::~LinkSettingDto() = default;

void LinkSettingDto::validate()
{
}

web::json::value LinkSettingDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeIsSet_) {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(active_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(appAuthTypeIsSet_) {
        val[utility::conversions::to_string_t("app_auth_type")] = ModelBase::toJson(appAuthType_);
    }
    if(appAkIsSet_) {
        val[utility::conversions::to_string_t("app_ak")] = ModelBase::toJson(appAk_);
    }
    if(appSkIsSet_) {
        val[utility::conversions::to_string_t("app_sk")] = ModelBase::toJson(appSk_);
    }
    if(categoriesIsSet_) {
        val[utility::conversions::to_string_t("categories")] = ModelBase::toJson(categories_);
    }
    if(excludeStatusesIsSet_) {
        val[utility::conversions::to_string_t("exclude_statuses")] = ModelBase::toJson(excludeStatuses_);
    }

    return val;
}
bool LinkSettingDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_auth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_auth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppAuthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_ak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_ak"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppAk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_sk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_sk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppSk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_statuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_statuses"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeStatuses(refVal);
        }
    }
    return ok;
}


bool LinkSettingDto::isActive() const
{
    return active_;
}

void LinkSettingDto::setActive(bool value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool LinkSettingDto::activeIsSet() const
{
    return activeIsSet_;
}

void LinkSettingDto::unsetactive()
{
    activeIsSet_ = false;
}

std::string LinkSettingDto::getUrl() const
{
    return url_;
}

void LinkSettingDto::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool LinkSettingDto::urlIsSet() const
{
    return urlIsSet_;
}

void LinkSettingDto::unseturl()
{
    urlIsSet_ = false;
}

std::string LinkSettingDto::getAppAuthType() const
{
    return appAuthType_;
}

void LinkSettingDto::setAppAuthType(const std::string& value)
{
    appAuthType_ = value;
    appAuthTypeIsSet_ = true;
}

bool LinkSettingDto::appAuthTypeIsSet() const
{
    return appAuthTypeIsSet_;
}

void LinkSettingDto::unsetappAuthType()
{
    appAuthTypeIsSet_ = false;
}

std::string LinkSettingDto::getAppAk() const
{
    return appAk_;
}

void LinkSettingDto::setAppAk(const std::string& value)
{
    appAk_ = value;
    appAkIsSet_ = true;
}

bool LinkSettingDto::appAkIsSet() const
{
    return appAkIsSet_;
}

void LinkSettingDto::unsetappAk()
{
    appAkIsSet_ = false;
}

std::string LinkSettingDto::getAppSk() const
{
    return appSk_;
}

void LinkSettingDto::setAppSk(const std::string& value)
{
    appSk_ = value;
    appSkIsSet_ = true;
}

bool LinkSettingDto::appSkIsSet() const
{
    return appSkIsSet_;
}

void LinkSettingDto::unsetappSk()
{
    appSkIsSet_ = false;
}

std::string LinkSettingDto::getCategories() const
{
    return categories_;
}

void LinkSettingDto::setCategories(const std::string& value)
{
    categories_ = value;
    categoriesIsSet_ = true;
}

bool LinkSettingDto::categoriesIsSet() const
{
    return categoriesIsSet_;
}

void LinkSettingDto::unsetcategories()
{
    categoriesIsSet_ = false;
}

std::string LinkSettingDto::getExcludeStatuses() const
{
    return excludeStatuses_;
}

void LinkSettingDto::setExcludeStatuses(const std::string& value)
{
    excludeStatuses_ = value;
    excludeStatusesIsSet_ = true;
}

bool LinkSettingDto::excludeStatusesIsSet() const
{
    return excludeStatusesIsSet_;
}

void LinkSettingDto::unsetexcludeStatuses()
{
    excludeStatusesIsSet_ = false;
}

}
}
}
}
}


