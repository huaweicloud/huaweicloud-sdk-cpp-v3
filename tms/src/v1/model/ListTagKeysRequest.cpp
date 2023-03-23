

#include "huaweicloud/tms/v1/model/ListTagKeysRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListTagKeysRequest::ListTagKeysRequest()
{
    regionId_ = "";
    regionIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListTagKeysRequest::~ListTagKeysRequest() = default;

void ListTagKeysRequest::validate()
{
}

web::json::value ListTagKeysRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}

bool ListTagKeysRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
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
    return ok;
}


std::string ListTagKeysRequest::getRegionId() const
{
    return regionId_;
}

void ListTagKeysRequest::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ListTagKeysRequest::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ListTagKeysRequest::unsetregionId()
{
    regionIdIsSet_ = false;
}

int32_t ListTagKeysRequest::getLimit() const
{
    return limit_;
}

void ListTagKeysRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTagKeysRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTagKeysRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTagKeysRequest::getMarker() const
{
    return marker_;
}

void ListTagKeysRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListTagKeysRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListTagKeysRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


