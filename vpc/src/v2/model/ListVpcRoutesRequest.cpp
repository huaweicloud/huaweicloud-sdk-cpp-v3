

#include "huaweicloud/vpc/v2/model/ListVpcRoutesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListVpcRoutesRequest::ListVpcRoutesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

ListVpcRoutesRequest::~ListVpcRoutesRequest() = default;

void ListVpcRoutesRequest::validate()
{
}

web::json::value ListVpcRoutesRequest::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}

bool ListVpcRoutesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    return ok;
}


int32_t ListVpcRoutesRequest::getLimit() const
{
    return limit_;
}

void ListVpcRoutesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVpcRoutesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListVpcRoutesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListVpcRoutesRequest::getMarker() const
{
    return marker_;
}

void ListVpcRoutesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListVpcRoutesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListVpcRoutesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListVpcRoutesRequest::getId() const
{
    return id_;
}

void ListVpcRoutesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListVpcRoutesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListVpcRoutesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListVpcRoutesRequest::getType() const
{
    return type_;
}

void ListVpcRoutesRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListVpcRoutesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListVpcRoutesRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListVpcRoutesRequest::getVpcId() const
{
    return vpcId_;
}

void ListVpcRoutesRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListVpcRoutesRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListVpcRoutesRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListVpcRoutesRequest::getDestination() const
{
    return destination_;
}

void ListVpcRoutesRequest::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool ListVpcRoutesRequest::destinationIsSet() const
{
    return destinationIsSet_;
}

void ListVpcRoutesRequest::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string ListVpcRoutesRequest::getTenantId() const
{
    return tenantId_;
}

void ListVpcRoutesRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListVpcRoutesRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListVpcRoutesRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


