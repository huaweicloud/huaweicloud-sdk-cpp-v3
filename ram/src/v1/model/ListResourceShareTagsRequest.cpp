

#include "huaweicloud/ram/v1/model/ListResourceShareTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListResourceShareTagsRequest::ListResourceShareTagsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListResourceShareTagsRequest::~ListResourceShareTagsRequest() = default;

void ListResourceShareTagsRequest::validate()
{
}

web::json::value ListResourceShareTagsRequest::toJson() const
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
bool ListResourceShareTagsRequest::fromJson(const web::json::value& val)
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


int32_t ListResourceShareTagsRequest::getLimit() const
{
    return limit_;
}

void ListResourceShareTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListResourceShareTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListResourceShareTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListResourceShareTagsRequest::getMarker() const
{
    return marker_;
}

void ListResourceShareTagsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListResourceShareTagsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListResourceShareTagsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


