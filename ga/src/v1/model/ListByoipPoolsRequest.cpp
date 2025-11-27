

#include "huaweicloud/ga/v1/model/ListByoipPoolsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListByoipPoolsRequest::ListByoipPoolsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListByoipPoolsRequest::~ListByoipPoolsRequest() = default;

void ListByoipPoolsRequest::validate()
{
}

web::json::value ListByoipPoolsRequest::toJson() const
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
bool ListByoipPoolsRequest::fromJson(const web::json::value& val)
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


int32_t ListByoipPoolsRequest::getLimit() const
{
    return limit_;
}

void ListByoipPoolsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListByoipPoolsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListByoipPoolsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListByoipPoolsRequest::getMarker() const
{
    return marker_;
}

void ListByoipPoolsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListByoipPoolsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListByoipPoolsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


