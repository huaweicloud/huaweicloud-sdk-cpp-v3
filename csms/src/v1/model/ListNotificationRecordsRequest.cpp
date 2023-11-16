

#include "huaweicloud/csms/v1/model/ListNotificationRecordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListNotificationRecordsRequest::ListNotificationRecordsRequest()
{
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListNotificationRecordsRequest::~ListNotificationRecordsRequest() = default;

void ListNotificationRecordsRequest::validate()
{
}

web::json::value ListNotificationRecordsRequest::toJson() const
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
bool ListNotificationRecordsRequest::fromJson(const web::json::value& val)
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


std::string ListNotificationRecordsRequest::getLimit() const
{
    return limit_;
}

void ListNotificationRecordsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNotificationRecordsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListNotificationRecordsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListNotificationRecordsRequest::getMarker() const
{
    return marker_;
}

void ListNotificationRecordsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListNotificationRecordsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListNotificationRecordsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


