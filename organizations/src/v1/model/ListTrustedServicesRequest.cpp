

#include "huaweicloud/organizations/v1/model/ListTrustedServicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListTrustedServicesRequest::ListTrustedServicesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListTrustedServicesRequest::~ListTrustedServicesRequest() = default;

void ListTrustedServicesRequest::validate()
{
}

web::json::value ListTrustedServicesRequest::toJson() const
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
bool ListTrustedServicesRequest::fromJson(const web::json::value& val)
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


int32_t ListTrustedServicesRequest::getLimit() const
{
    return limit_;
}

void ListTrustedServicesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTrustedServicesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTrustedServicesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTrustedServicesRequest::getMarker() const
{
    return marker_;
}

void ListTrustedServicesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListTrustedServicesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListTrustedServicesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


