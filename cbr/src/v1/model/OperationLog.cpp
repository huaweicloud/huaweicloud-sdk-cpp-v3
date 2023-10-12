

#include "huaweicloud/cbr/v1/model/OperationLog.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OperationLog::OperationLog()
{
    checkpointId_ = "";
    checkpointIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    endedAt_ = "";
    endedAtIsSet_ = false;
    errorInfoIsSet_ = false;
    extraInfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    providerId_ = "";
    providerIdIsSet_ = false;
    startedAt_ = "";
    startedAtIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
    vaultName_ = "";
    vaultNameIsSet_ = false;
}

OperationLog::~OperationLog() = default;

void OperationLog::validate()
{
}

web::json::value OperationLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIdIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_id")] = ModelBase::toJson(checkpointId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(endedAtIsSet_) {
        val[utility::conversions::to_string_t("ended_at")] = ModelBase::toJson(endedAt_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(providerIdIsSet_) {
        val[utility::conversions::to_string_t("provider_id")] = ModelBase::toJson(providerId_);
    }
    if(startedAtIsSet_) {
        val[utility::conversions::to_string_t("started_at")] = ModelBase::toJson(startedAt_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }
    if(vaultNameIsSet_) {
        val[utility::conversions::to_string_t("vault_name")] = ModelBase::toJson(vaultName_);
    }

    return val;
}
bool OperationLog::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checkpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpointId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ended_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ended_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            OpErrorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            OpExtraInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("started_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("started_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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
    return ok;
}


std::string OperationLog::getCheckpointId() const
{
    return checkpointId_;
}

void OperationLog::setCheckpointId(const std::string& value)
{
    checkpointId_ = value;
    checkpointIdIsSet_ = true;
}

bool OperationLog::checkpointIdIsSet() const
{
    return checkpointIdIsSet_;
}

void OperationLog::unsetcheckpointId()
{
    checkpointIdIsSet_ = false;
}

std::string OperationLog::getCreatedAt() const
{
    return createdAt_;
}

void OperationLog::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool OperationLog::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void OperationLog::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string OperationLog::getEndedAt() const
{
    return endedAt_;
}

void OperationLog::setEndedAt(const std::string& value)
{
    endedAt_ = value;
    endedAtIsSet_ = true;
}

bool OperationLog::endedAtIsSet() const
{
    return endedAtIsSet_;
}

void OperationLog::unsetendedAt()
{
    endedAtIsSet_ = false;
}

OpErrorInfo OperationLog::getErrorInfo() const
{
    return errorInfo_;
}

void OperationLog::setErrorInfo(const OpErrorInfo& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool OperationLog::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void OperationLog::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

OpExtraInfo OperationLog::getExtraInfo() const
{
    return extraInfo_;
}

void OperationLog::setExtraInfo(const OpExtraInfo& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool OperationLog::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void OperationLog::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

std::string OperationLog::getId() const
{
    return id_;
}

void OperationLog::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OperationLog::idIsSet() const
{
    return idIsSet_;
}

void OperationLog::unsetid()
{
    idIsSet_ = false;
}

std::string OperationLog::getOperationType() const
{
    return operationType_;
}

void OperationLog::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool OperationLog::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void OperationLog::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::string OperationLog::getPolicyId() const
{
    return policyId_;
}

void OperationLog::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool OperationLog::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void OperationLog::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string OperationLog::getProjectId() const
{
    return projectId_;
}

void OperationLog::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool OperationLog::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void OperationLog::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string OperationLog::getProviderId() const
{
    return providerId_;
}

void OperationLog::setProviderId(const std::string& value)
{
    providerId_ = value;
    providerIdIsSet_ = true;
}

bool OperationLog::providerIdIsSet() const
{
    return providerIdIsSet_;
}

void OperationLog::unsetproviderId()
{
    providerIdIsSet_ = false;
}

std::string OperationLog::getStartedAt() const
{
    return startedAt_;
}

void OperationLog::setStartedAt(const std::string& value)
{
    startedAt_ = value;
    startedAtIsSet_ = true;
}

bool OperationLog::startedAtIsSet() const
{
    return startedAtIsSet_;
}

void OperationLog::unsetstartedAt()
{
    startedAtIsSet_ = false;
}

std::string OperationLog::getStatus() const
{
    return status_;
}

void OperationLog::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool OperationLog::statusIsSet() const
{
    return statusIsSet_;
}

void OperationLog::unsetstatus()
{
    statusIsSet_ = false;
}

std::string OperationLog::getUpdatedAt() const
{
    return updatedAt_;
}

void OperationLog::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool OperationLog::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void OperationLog::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string OperationLog::getVaultId() const
{
    return vaultId_;
}

void OperationLog::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool OperationLog::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void OperationLog::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

std::string OperationLog::getVaultName() const
{
    return vaultName_;
}

void OperationLog::setVaultName(const std::string& value)
{
    vaultName_ = value;
    vaultNameIsSet_ = true;
}

bool OperationLog::vaultNameIsSet() const
{
    return vaultNameIsSet_;
}

void OperationLog::unsetvaultName()
{
    vaultNameIsSet_ = false;
}

}
}
}
}
}


