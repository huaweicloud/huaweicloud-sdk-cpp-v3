

#include "huaweicloud/rgc/v1/model/ListEnabledControlsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListEnabledControlsRequest::ListEnabledControlsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListEnabledControlsRequest::~ListEnabledControlsRequest() = default;

void ListEnabledControlsRequest::validate()
{
}

web::json::value ListEnabledControlsRequest::toJson() const
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
bool ListEnabledControlsRequest::fromJson(const web::json::value& val)
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


int32_t ListEnabledControlsRequest::getLimit() const
{
    return limit_;
}

void ListEnabledControlsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEnabledControlsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEnabledControlsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEnabledControlsRequest::getMarker() const
{
    return marker_;
}

void ListEnabledControlsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListEnabledControlsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListEnabledControlsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


