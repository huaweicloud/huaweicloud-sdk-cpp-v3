

#include "huaweicloud/csms/v1/model/ListSecretEventsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListSecretEventsRequest::ListSecretEventsRequest()
{
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListSecretEventsRequest::~ListSecretEventsRequest() = default;

void ListSecretEventsRequest::validate()
{
}

web::json::value ListSecretEventsRequest::toJson() const
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

bool ListSecretEventsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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

std::string ListSecretEventsRequest::getLimit() const
{
    return limit_;
}

void ListSecretEventsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSecretEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSecretEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSecretEventsRequest::getMarker() const
{
    return marker_;
}

void ListSecretEventsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSecretEventsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSecretEventsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


