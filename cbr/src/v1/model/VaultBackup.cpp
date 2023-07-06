

#include "huaweicloud/cbr/v1/model/VaultBackup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultBackup::VaultBackup()
{
    parametersIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

VaultBackup::~VaultBackup() = default;

void VaultBackup::validate()
{
}

web::json::value VaultBackup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool VaultBackup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            CheckpointParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
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

CheckpointParam VaultBackup::getParameters() const
{
    return parameters_;
}

void VaultBackup::setParameters(const CheckpointParam& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool VaultBackup::parametersIsSet() const
{
    return parametersIsSet_;
}

void VaultBackup::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string VaultBackup::getVaultId() const
{
    return vaultId_;
}

void VaultBackup::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool VaultBackup::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void VaultBackup::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


