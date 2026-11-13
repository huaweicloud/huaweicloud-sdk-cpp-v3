

#include "huaweicloud/vpc/v2/model/ListVpcPeeringInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListVpcPeeringInfosRequest::ListVpcPeeringInfosRequest()
{
    idIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    vpcIdIsSet_ = false;
}

ListVpcPeeringInfosRequest::~ListVpcPeeringInfosRequest() = default;

void ListVpcPeeringInfosRequest::validate()
{
}

web::json::value ListVpcPeeringInfosRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}
bool ListVpcPeeringInfosRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListVpcPeeringInfosRequest::getId()
{
    return id_;
}

void ListVpcPeeringInfosRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListVpcPeeringInfosRequest::idIsSet() const
{
    return idIsSet_;
}

void ListVpcPeeringInfosRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t ListVpcPeeringInfosRequest::getLimit() const
{
    return limit_;
}

void ListVpcPeeringInfosRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVpcPeeringInfosRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListVpcPeeringInfosRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListVpcPeeringInfosRequest::getMarker() const
{
    return marker_;
}

void ListVpcPeeringInfosRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListVpcPeeringInfosRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListVpcPeeringInfosRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::vector<std::string>& ListVpcPeeringInfosRequest::getName()
{
    return name_;
}

void ListVpcPeeringInfosRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListVpcPeeringInfosRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListVpcPeeringInfosRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListVpcPeeringInfosRequest::getStatus() const
{
    return status_;
}

void ListVpcPeeringInfosRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListVpcPeeringInfosRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListVpcPeeringInfosRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListVpcPeeringInfosRequest::getTenantId() const
{
    return tenantId_;
}

void ListVpcPeeringInfosRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListVpcPeeringInfosRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListVpcPeeringInfosRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::vector<std::string>& ListVpcPeeringInfosRequest::getVpcId()
{
    return vpcId_;
}

void ListVpcPeeringInfosRequest::setVpcId(const std::vector<std::string>& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListVpcPeeringInfosRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListVpcPeeringInfosRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


