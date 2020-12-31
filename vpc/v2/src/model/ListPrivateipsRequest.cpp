

#include "huaweicloud/vpc/model/ListPrivateipsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListPrivateipsRequest::ListPrivateipsRequest()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListPrivateipsRequest::~ListPrivateipsRequest() = default;

void ListPrivateipsRequest::validate()
{
}

web::json::value ListPrivateipsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}

bool ListPrivateipsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
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


std::string ListPrivateipsRequest::getSubnetId() const
{
    return subnetId_;
}

void ListPrivateipsRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListPrivateipsRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListPrivateipsRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

int32_t ListPrivateipsRequest::getLimit() const
{
    return limit_;
}

void ListPrivateipsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPrivateipsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPrivateipsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPrivateipsRequest::getMarker() const
{
    return marker_;
}

void ListPrivateipsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPrivateipsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPrivateipsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


