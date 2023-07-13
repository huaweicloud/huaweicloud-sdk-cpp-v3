

#include "huaweicloud/vpc/v2/model/ListRouteTablesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListRouteTablesRequest::ListRouteTablesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

ListRouteTablesRequest::~ListRouteTablesRequest() = default;

void ListRouteTablesRequest::validate()
{
}

web::json::value ListRouteTablesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}

bool ListRouteTablesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    return ok;
}

int32_t ListRouteTablesRequest::getLimit() const
{
    return limit_;
}

void ListRouteTablesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRouteTablesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRouteTablesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRouteTablesRequest::getMarker() const
{
    return marker_;
}

void ListRouteTablesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRouteTablesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListRouteTablesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListRouteTablesRequest::getId() const
{
    return id_;
}

void ListRouteTablesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListRouteTablesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListRouteTablesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListRouteTablesRequest::getVpcId() const
{
    return vpcId_;
}

void ListRouteTablesRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListRouteTablesRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListRouteTablesRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListRouteTablesRequest::getSubnetId() const
{
    return subnetId_;
}

void ListRouteTablesRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListRouteTablesRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListRouteTablesRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


