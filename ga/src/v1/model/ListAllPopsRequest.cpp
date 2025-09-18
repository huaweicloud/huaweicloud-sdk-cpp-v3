

#include "huaweicloud/ga/v1/model/ListAllPopsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListAllPopsRequest::ListAllPopsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListAllPopsRequest::~ListAllPopsRequest() = default;

void ListAllPopsRequest::validate()
{
}

web::json::value ListAllPopsRequest::toJson() const
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
bool ListAllPopsRequest::fromJson(const web::json::value& val)
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


int32_t ListAllPopsRequest::getLimit() const
{
    return limit_;
}

void ListAllPopsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAllPopsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAllPopsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAllPopsRequest::getMarker() const
{
    return marker_;
}

void ListAllPopsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAllPopsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAllPopsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


