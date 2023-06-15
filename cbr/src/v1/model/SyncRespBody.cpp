

#include "huaweicloud/cbr/v1/model/SyncRespBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




SyncRespBody::SyncRespBody()
{
    operationLogId_ = "";
    operationLogIdIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

SyncRespBody::~SyncRespBody() = default;

void SyncRespBody::validate()
{
}

web::json::value SyncRespBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationLogIdIsSet_) {
        val[utility::conversions::to_string_t("operation_log_id")] = ModelBase::toJson(operationLogId_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool SyncRespBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_log_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationLogId(refVal);
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
    return ok;
}


std::string SyncRespBody::getOperationLogId() const
{
    return operationLogId_;
}

void SyncRespBody::setOperationLogId(const std::string& value)
{
    operationLogId_ = value;
    operationLogIdIsSet_ = true;
}

bool SyncRespBody::operationLogIdIsSet() const
{
    return operationLogIdIsSet_;
}

void SyncRespBody::unsetoperationLogId()
{
    operationLogIdIsSet_ = false;
}

std::string SyncRespBody::getVaultId() const
{
    return vaultId_;
}

void SyncRespBody::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool SyncRespBody::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void SyncRespBody::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


