

#include "huaweicloud/tms/v1/model/ListAssociatedResourceSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListAssociatedResourceSettingsRequest::ListAssociatedResourceSettingsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
}

ListAssociatedResourceSettingsRequest::~ListAssociatedResourceSettingsRequest() = default;

void ListAssociatedResourceSettingsRequest::validate()
{
}

web::json::value ListAssociatedResourceSettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool ListAssociatedResourceSettingsRequest::fromJson(const web::json::value& val)
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


int32_t ListAssociatedResourceSettingsRequest::getLimit() const
{
    return limit_;
}

void ListAssociatedResourceSettingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAssociatedResourceSettingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAssociatedResourceSettingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAssociatedResourceSettingsRequest::getMarker() const
{
    return marker_;
}

void ListAssociatedResourceSettingsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAssociatedResourceSettingsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAssociatedResourceSettingsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListAssociatedResourceSettingsRequest::getRegionId() const
{
    return regionId_;
}

void ListAssociatedResourceSettingsRequest::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ListAssociatedResourceSettingsRequest::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ListAssociatedResourceSettingsRequest::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


