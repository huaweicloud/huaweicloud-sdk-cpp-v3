

#include "huaweicloud/tms/v1/model/ListAssociatedResourceRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListAssociatedResourceRulesRequest::ListAssociatedResourceRulesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    settingName_ = "";
    settingNameIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
}

ListAssociatedResourceRulesRequest::~ListAssociatedResourceRulesRequest() = default;

void ListAssociatedResourceRulesRequest::validate()
{
}

web::json::value ListAssociatedResourceRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(settingNameIsSet_) {
        val[utility::conversions::to_string_t("setting_name")] = ModelBase::toJson(settingName_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool ListAssociatedResourceRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("setting_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    return ok;
}


int32_t ListAssociatedResourceRulesRequest::getLimit() const
{
    return limit_;
}

void ListAssociatedResourceRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAssociatedResourceRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAssociatedResourceRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAssociatedResourceRulesRequest::getMarker() const
{
    return marker_;
}

void ListAssociatedResourceRulesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAssociatedResourceRulesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAssociatedResourceRulesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListAssociatedResourceRulesRequest::getSettingName() const
{
    return settingName_;
}

void ListAssociatedResourceRulesRequest::setSettingName(const std::string& value)
{
    settingName_ = value;
    settingNameIsSet_ = true;
}

bool ListAssociatedResourceRulesRequest::settingNameIsSet() const
{
    return settingNameIsSet_;
}

void ListAssociatedResourceRulesRequest::unsetsettingName()
{
    settingNameIsSet_ = false;
}

std::string ListAssociatedResourceRulesRequest::getRegionId() const
{
    return regionId_;
}

void ListAssociatedResourceRulesRequest::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ListAssociatedResourceRulesRequest::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ListAssociatedResourceRulesRequest::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


