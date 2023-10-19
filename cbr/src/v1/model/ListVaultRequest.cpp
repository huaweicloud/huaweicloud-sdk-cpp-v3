

#include "huaweicloud/cbr/v1/model/ListVaultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListVaultRequest::ListVaultRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    cloudType_ = "";
    cloudTypeIsSet_ = false;
    protectType_ = "";
    protectTypeIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    idIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    resourceIds_ = "";
    resourceIdsIsSet_ = false;
}

ListVaultRequest::~ListVaultRequest() = default;

void ListVaultRequest::validate()
{
}

web::json::value ListVaultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(cloudTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_type")] = ModelBase::toJson(cloudType_);
    }
    if(protectTypeIsSet_) {
        val[utility::conversions::to_string_t("protect_type")] = ModelBase::toJson(protectType_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resourceIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_ids")] = ModelBase::toJson(resourceIds_);
    }

    return val;
}
bool ListVaultRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protect_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceIds(refVal);
        }
    }
    return ok;
}


int32_t ListVaultRequest::getLimit() const
{
    return limit_;
}

void ListVaultRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVaultRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListVaultRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListVaultRequest::getName() const
{
    return name_;
}

void ListVaultRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListVaultRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListVaultRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListVaultRequest::getOffset() const
{
    return offset_;
}

void ListVaultRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVaultRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVaultRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListVaultRequest::getCloudType() const
{
    return cloudType_;
}

void ListVaultRequest::setCloudType(const std::string& value)
{
    cloudType_ = value;
    cloudTypeIsSet_ = true;
}

bool ListVaultRequest::cloudTypeIsSet() const
{
    return cloudTypeIsSet_;
}

void ListVaultRequest::unsetcloudType()
{
    cloudTypeIsSet_ = false;
}

std::string ListVaultRequest::getProtectType() const
{
    return protectType_;
}

void ListVaultRequest::setProtectType(const std::string& value)
{
    protectType_ = value;
    protectTypeIsSet_ = true;
}

bool ListVaultRequest::protectTypeIsSet() const
{
    return protectTypeIsSet_;
}

void ListVaultRequest::unsetprotectType()
{
    protectTypeIsSet_ = false;
}

std::string ListVaultRequest::getObjectType() const
{
    return objectType_;
}

void ListVaultRequest::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool ListVaultRequest::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void ListVaultRequest::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string ListVaultRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListVaultRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListVaultRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListVaultRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& ListVaultRequest::getId()
{
    return id_;
}

void ListVaultRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListVaultRequest::idIsSet() const
{
    return idIsSet_;
}

void ListVaultRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListVaultRequest::getPolicyId() const
{
    return policyId_;
}

void ListVaultRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ListVaultRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ListVaultRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string ListVaultRequest::getStatus() const
{
    return status_;
}

void ListVaultRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListVaultRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListVaultRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListVaultRequest::getResourceIds() const
{
    return resourceIds_;
}

void ListVaultRequest::setResourceIds(const std::string& value)
{
    resourceIds_ = value;
    resourceIdsIsSet_ = true;
}

bool ListVaultRequest::resourceIdsIsSet() const
{
    return resourceIdsIsSet_;
}

void ListVaultRequest::unsetresourceIds()
{
    resourceIdsIsSet_ = false;
}

}
}
}
}
}


