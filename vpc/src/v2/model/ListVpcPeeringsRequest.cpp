

#include "huaweicloud/vpc/v2/model/ListVpcPeeringsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListVpcPeeringsRequest::ListVpcPeeringsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

ListVpcPeeringsRequest::~ListVpcPeeringsRequest() = default;

void ListVpcPeeringsRequest::validate()
{
}

web::json::value ListVpcPeeringsRequest::toJson() const
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

bool ListVpcPeeringsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    return ok;
}


int32_t ListVpcPeeringsRequest::getLimit() const
{
    return limit_;
}

void ListVpcPeeringsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVpcPeeringsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListVpcPeeringsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListVpcPeeringsRequest::getMarker() const
{
    return marker_;
}

void ListVpcPeeringsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListVpcPeeringsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListVpcPeeringsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListVpcPeeringsRequest::getId() const
{
    return id_;
}

void ListVpcPeeringsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListVpcPeeringsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListVpcPeeringsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListVpcPeeringsRequest::getName() const
{
    return name_;
}

void ListVpcPeeringsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListVpcPeeringsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListVpcPeeringsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListVpcPeeringsRequest::getStatus() const
{
    return status_;
}

void ListVpcPeeringsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListVpcPeeringsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListVpcPeeringsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListVpcPeeringsRequest::getTenantId() const
{
    return tenantId_;
}

void ListVpcPeeringsRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListVpcPeeringsRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListVpcPeeringsRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ListVpcPeeringsRequest::getVpcId() const
{
    return vpcId_;
}

void ListVpcPeeringsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListVpcPeeringsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListVpcPeeringsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


