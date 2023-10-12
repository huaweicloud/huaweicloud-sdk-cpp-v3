

#include "huaweicloud/tms/v1/model/ListTagValuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListTagValuesRequest::ListTagValuesRequest()
{
    regionId_ = "";
    regionIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

ListTagValuesRequest::~ListTagValuesRequest() = default;

void ListTagValuesRequest::validate()
{
}

web::json::value ListTagValuesRequest::toJson() const
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
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool ListTagValuesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


std::string ListTagValuesRequest::getRegionId() const
{
    return regionId_;
}

void ListTagValuesRequest::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ListTagValuesRequest::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ListTagValuesRequest::unsetregionId()
{
    regionIdIsSet_ = false;
}

int32_t ListTagValuesRequest::getLimit() const
{
    return limit_;
}

void ListTagValuesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTagValuesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTagValuesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTagValuesRequest::getMarker() const
{
    return marker_;
}

void ListTagValuesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListTagValuesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListTagValuesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListTagValuesRequest::getKey() const
{
    return key_;
}

void ListTagValuesRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ListTagValuesRequest::keyIsSet() const
{
    return keyIsSet_;
}

void ListTagValuesRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


