

#include "huaweicloud/organizations/v1/model/ListHandshakesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListHandshakesRequest::ListHandshakesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListHandshakesRequest::~ListHandshakesRequest() = default;

void ListHandshakesRequest::validate()
{
}

web::json::value ListHandshakesRequest::toJson() const
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
bool ListHandshakesRequest::fromJson(const web::json::value& val)
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


int32_t ListHandshakesRequest::getLimit() const
{
    return limit_;
}

void ListHandshakesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHandshakesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHandshakesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListHandshakesRequest::getMarker() const
{
    return marker_;
}

void ListHandshakesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListHandshakesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListHandshakesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


