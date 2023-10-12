

#include "huaweicloud/vpc/v2/model/NeutronListSecurityGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListSecurityGroupsRequest::NeutronListSecurityGroupsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

NeutronListSecurityGroupsRequest::~NeutronListSecurityGroupsRequest() = default;

void NeutronListSecurityGroupsRequest::validate()
{
}

web::json::value NeutronListSecurityGroupsRequest::toJson() const
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
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}
bool NeutronListSecurityGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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


int32_t NeutronListSecurityGroupsRequest::getLimit() const
{
    return limit_;
}

void NeutronListSecurityGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NeutronListSecurityGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NeutronListSecurityGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NeutronListSecurityGroupsRequest::getMarker() const
{
    return marker_;
}

void NeutronListSecurityGroupsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NeutronListSecurityGroupsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NeutronListSecurityGroupsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string NeutronListSecurityGroupsRequest::getId() const
{
    return id_;
}

void NeutronListSecurityGroupsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronListSecurityGroupsRequest::idIsSet() const
{
    return idIsSet_;
}

void NeutronListSecurityGroupsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronListSecurityGroupsRequest::getName() const
{
    return name_;
}

void NeutronListSecurityGroupsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronListSecurityGroupsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronListSecurityGroupsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronListSecurityGroupsRequest::getDescription() const
{
    return description_;
}

void NeutronListSecurityGroupsRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronListSecurityGroupsRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronListSecurityGroupsRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronListSecurityGroupsRequest::getTenantId() const
{
    return tenantId_;
}

void NeutronListSecurityGroupsRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronListSecurityGroupsRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronListSecurityGroupsRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


