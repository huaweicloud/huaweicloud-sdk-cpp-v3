

#include "huaweicloud/vpc/v2/model/NeutronListRoutersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListRoutersRequest::NeutronListRoutersRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
}

NeutronListRoutersRequest::~NeutronListRoutersRequest() = default;

void NeutronListRoutersRequest::validate()
{
}

web::json::value NeutronListRoutersRequest::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }

    return val;
}
bool NeutronListRoutersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
        }
    }
    return ok;
}


int32_t NeutronListRoutersRequest::getLimit() const
{
    return limit_;
}

void NeutronListRoutersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NeutronListRoutersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NeutronListRoutersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NeutronListRoutersRequest::getMarker() const
{
    return marker_;
}

void NeutronListRoutersRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NeutronListRoutersRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NeutronListRoutersRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string NeutronListRoutersRequest::getId() const
{
    return id_;
}

void NeutronListRoutersRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronListRoutersRequest::idIsSet() const
{
    return idIsSet_;
}

void NeutronListRoutersRequest::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronListRoutersRequest::getStatus() const
{
    return status_;
}

void NeutronListRoutersRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NeutronListRoutersRequest::statusIsSet() const
{
    return statusIsSet_;
}

void NeutronListRoutersRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NeutronListRoutersRequest::getTenantId() const
{
    return tenantId_;
}

void NeutronListRoutersRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronListRoutersRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronListRoutersRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

bool NeutronListRoutersRequest::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronListRoutersRequest::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronListRoutersRequest::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronListRoutersRequest::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

}
}
}
}
}


