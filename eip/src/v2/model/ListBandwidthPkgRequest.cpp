

#include "huaweicloud/eip/v2/model/ListBandwidthPkgRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListBandwidthPkgRequest::ListBandwidthPkgRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListBandwidthPkgRequest::~ListBandwidthPkgRequest() = default;

void ListBandwidthPkgRequest::validate()
{
}

web::json::value ListBandwidthPkgRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}

bool ListBandwidthPkgRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}

int32_t ListBandwidthPkgRequest::getLimit() const
{
    return limit_;
}

void ListBandwidthPkgRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBandwidthPkgRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBandwidthPkgRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListBandwidthPkgRequest::getMarker() const
{
    return marker_;
}

void ListBandwidthPkgRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListBandwidthPkgRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListBandwidthPkgRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListBandwidthPkgRequest::getOffset() const
{
    return offset_;
}

void ListBandwidthPkgRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBandwidthPkgRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBandwidthPkgRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


