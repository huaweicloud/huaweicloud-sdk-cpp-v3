

#include "huaweicloud/organizations/v1/model/ListRootsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListRootsRequest::ListRootsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListRootsRequest::~ListRootsRequest() = default;

void ListRootsRequest::validate()
{
}

web::json::value ListRootsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListRootsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ListRootsRequest::getLimit() const
{
    return limit_;
}

void ListRootsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRootsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRootsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRootsRequest::getMarker() const
{
    return marker_;
}

void ListRootsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRootsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListRootsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


