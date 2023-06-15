

#include "huaweicloud/cbr/v1/model/ListOpLogsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListOpLogsRequest::ListOpLogsRequest()
{
    endTime_ = "";
    endTimeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    providerId_ = "";
    providerIdIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
    vaultName_ = "";
    vaultNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListOpLogsRequest::~ListOpLogsRequest() = default;

void ListOpLogsRequest::validate()
{
}

web::json::value ListOpLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(providerIdIsSet_) {
        val[utility::conversions::to_string_t("provider_id")] = ModelBase::toJson(providerId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }
    if(vaultNameIsSet_) {
        val[utility::conversions::to_string_t("vault_name")] = ModelBase::toJson(vaultName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool ListOpLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProviderId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultName(refVal);
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
    return ok;
}


std::string ListOpLogsRequest::getEndTime() const
{
    return endTime_;
}

void ListOpLogsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListOpLogsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListOpLogsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListOpLogsRequest::getLimit() const
{
    return limit_;
}

void ListOpLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOpLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOpLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListOpLogsRequest::getOffset() const
{
    return offset_;
}

void ListOpLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOpLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOpLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListOpLogsRequest::getOperationType() const
{
    return operationType_;
}

void ListOpLogsRequest::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool ListOpLogsRequest::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void ListOpLogsRequest::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::string ListOpLogsRequest::getProviderId() const
{
    return providerId_;
}

void ListOpLogsRequest::setProviderId(const std::string& value)
{
    providerId_ = value;
    providerIdIsSet_ = true;
}

bool ListOpLogsRequest::providerIdIsSet() const
{
    return providerIdIsSet_;
}

void ListOpLogsRequest::unsetproviderId()
{
    providerIdIsSet_ = false;
}

std::string ListOpLogsRequest::getResourceId() const
{
    return resourceId_;
}

void ListOpLogsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListOpLogsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListOpLogsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ListOpLogsRequest::getResourceName() const
{
    return resourceName_;
}

void ListOpLogsRequest::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ListOpLogsRequest::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ListOpLogsRequest::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string ListOpLogsRequest::getStartTime() const
{
    return startTime_;
}

void ListOpLogsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListOpLogsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListOpLogsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListOpLogsRequest::getStatus() const
{
    return status_;
}

void ListOpLogsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListOpLogsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListOpLogsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListOpLogsRequest::getVaultId() const
{
    return vaultId_;
}

void ListOpLogsRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool ListOpLogsRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void ListOpLogsRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

std::string ListOpLogsRequest::getVaultName() const
{
    return vaultName_;
}

void ListOpLogsRequest::setVaultName(const std::string& value)
{
    vaultName_ = value;
    vaultNameIsSet_ = true;
}

bool ListOpLogsRequest::vaultNameIsSet() const
{
    return vaultNameIsSet_;
}

void ListOpLogsRequest::unsetvaultName()
{
    vaultNameIsSet_ = false;
}

std::string ListOpLogsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListOpLogsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListOpLogsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListOpLogsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


