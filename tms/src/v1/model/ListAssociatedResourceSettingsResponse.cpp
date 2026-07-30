

#include "huaweicloud/tms/v1/model/ListAssociatedResourceSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListAssociatedResourceSettingsResponse::ListAssociatedResourceSettingsResponse()
{
    settingsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListAssociatedResourceSettingsResponse::~ListAssociatedResourceSettingsResponse() = default;

void ListAssociatedResourceSettingsResponse::validate()
{
}

web::json::value ListAssociatedResourceSettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(settingsIsSet_) {
        val[utility::conversions::to_string_t("settings")] = ModelBase::toJson(settings_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListAssociatedResourceSettingsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("settings"));
        if(!fieldValue.is_null())
        {
            std::vector<AssociatedResourceSetting> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<AssociatedResourceSetting>& ListAssociatedResourceSettingsResponse::getSettings()
{
    return settings_;
}

void ListAssociatedResourceSettingsResponse::setSettings(const std::vector<AssociatedResourceSetting>& value)
{
    settings_ = value;
    settingsIsSet_ = true;
}

bool ListAssociatedResourceSettingsResponse::settingsIsSet() const
{
    return settingsIsSet_;
}

void ListAssociatedResourceSettingsResponse::unsetsettings()
{
    settingsIsSet_ = false;
}

int32_t ListAssociatedResourceSettingsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAssociatedResourceSettingsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAssociatedResourceSettingsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAssociatedResourceSettingsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

PageInfo ListAssociatedResourceSettingsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAssociatedResourceSettingsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAssociatedResourceSettingsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAssociatedResourceSettingsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


