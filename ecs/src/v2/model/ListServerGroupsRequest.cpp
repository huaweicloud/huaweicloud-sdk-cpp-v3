

#include "huaweicloud/ecs/v2/model/ListServerGroupsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerGroupsRequest::ListServerGroupsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListServerGroupsRequest::~ListServerGroupsRequest() = default;

void ListServerGroupsRequest::validate()
{
}

web::json::value ListServerGroupsRequest::toJson() const
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

bool ListServerGroupsRequest::fromJson(const web::json::value& val)
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


int32_t ListServerGroupsRequest::getLimit() const
{
    return limit_;
}

void ListServerGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListServerGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListServerGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListServerGroupsRequest::getMarker() const
{
    return marker_;
}

void ListServerGroupsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListServerGroupsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListServerGroupsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


