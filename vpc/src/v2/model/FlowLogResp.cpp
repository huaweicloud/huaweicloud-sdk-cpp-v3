

#include "huaweicloud/vpc/v2/model/FlowLogResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




FlowLogResp::FlowLogResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    trafficType_ = "";
    trafficTypeIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logTopicId_ = "";
    logTopicIdIsSet_ = false;
    logStoreType_ = "";
    logStoreTypeIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    adminState_ = false;
    adminStateIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

FlowLogResp::~FlowLogResp() = default;

void FlowLogResp::validate()
{
}

web::json::value FlowLogResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(trafficTypeIsSet_) {
        val[utility::conversions::to_string_t("traffic_type")] = ModelBase::toJson(trafficType_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logTopicIdIsSet_) {
        val[utility::conversions::to_string_t("log_topic_id")] = ModelBase::toJson(logTopicId_);
    }
    if(logStoreTypeIsSet_) {
        val[utility::conversions::to_string_t("log_store_type")] = ModelBase::toJson(logStoreType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(adminStateIsSet_) {
        val[utility::conversions::to_string_t("admin_state")] = ModelBase::toJson(adminState_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool FlowLogResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_topic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_topic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTopicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_store_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_store_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStoreType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminState(refVal);
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
    return ok;
}


std::string FlowLogResp::getId() const
{
    return id_;
}

void FlowLogResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FlowLogResp::idIsSet() const
{
    return idIsSet_;
}

void FlowLogResp::unsetid()
{
    idIsSet_ = false;
}

std::string FlowLogResp::getName() const
{
    return name_;
}

void FlowLogResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FlowLogResp::nameIsSet() const
{
    return nameIsSet_;
}

void FlowLogResp::unsetname()
{
    nameIsSet_ = false;
}

std::string FlowLogResp::getTenantId() const
{
    return tenantId_;
}

void FlowLogResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool FlowLogResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void FlowLogResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string FlowLogResp::getDescription() const
{
    return description_;
}

void FlowLogResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool FlowLogResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void FlowLogResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string FlowLogResp::getResourceType() const
{
    return resourceType_;
}

void FlowLogResp::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool FlowLogResp::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void FlowLogResp::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string FlowLogResp::getResourceId() const
{
    return resourceId_;
}

void FlowLogResp::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool FlowLogResp::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void FlowLogResp::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string FlowLogResp::getTrafficType() const
{
    return trafficType_;
}

void FlowLogResp::setTrafficType(const std::string& value)
{
    trafficType_ = value;
    trafficTypeIsSet_ = true;
}

bool FlowLogResp::trafficTypeIsSet() const
{
    return trafficTypeIsSet_;
}

void FlowLogResp::unsettrafficType()
{
    trafficTypeIsSet_ = false;
}

std::string FlowLogResp::getLogGroupId() const
{
    return logGroupId_;
}

void FlowLogResp::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool FlowLogResp::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void FlowLogResp::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string FlowLogResp::getLogTopicId() const
{
    return logTopicId_;
}

void FlowLogResp::setLogTopicId(const std::string& value)
{
    logTopicId_ = value;
    logTopicIdIsSet_ = true;
}

bool FlowLogResp::logTopicIdIsSet() const
{
    return logTopicIdIsSet_;
}

void FlowLogResp::unsetlogTopicId()
{
    logTopicIdIsSet_ = false;
}

std::string FlowLogResp::getLogStoreType() const
{
    return logStoreType_;
}

void FlowLogResp::setLogStoreType(const std::string& value)
{
    logStoreType_ = value;
    logStoreTypeIsSet_ = true;
}

bool FlowLogResp::logStoreTypeIsSet() const
{
    return logStoreTypeIsSet_;
}

void FlowLogResp::unsetlogStoreType()
{
    logStoreTypeIsSet_ = false;
}

std::string FlowLogResp::getCreatedAt() const
{
    return createdAt_;
}

void FlowLogResp::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool FlowLogResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void FlowLogResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string FlowLogResp::getUpdatedAt() const
{
    return updatedAt_;
}

void FlowLogResp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool FlowLogResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void FlowLogResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool FlowLogResp::isAdminState() const
{
    return adminState_;
}

void FlowLogResp::setAdminState(bool value)
{
    adminState_ = value;
    adminStateIsSet_ = true;
}

bool FlowLogResp::adminStateIsSet() const
{
    return adminStateIsSet_;
}

void FlowLogResp::unsetadminState()
{
    adminStateIsSet_ = false;
}

std::string FlowLogResp::getStatus() const
{
    return status_;
}

void FlowLogResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool FlowLogResp::statusIsSet() const
{
    return statusIsSet_;
}

void FlowLogResp::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


