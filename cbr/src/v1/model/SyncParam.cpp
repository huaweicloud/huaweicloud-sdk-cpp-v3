

#include "huaweicloud/cbr/v1/model/SyncParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




SyncParam::SyncParam()
{
    autoTrigger_ = false;
    autoTriggerIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

SyncParam::~SyncParam() = default;

void SyncParam::validate()
{
}

web::json::value SyncParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoTriggerIsSet_) {
        val[utility::conversions::to_string_t("auto_trigger")] = ModelBase::toJson(autoTrigger_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool SyncParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_trigger"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoTrigger(refVal);
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


bool SyncParam::isAutoTrigger() const
{
    return autoTrigger_;
}

void SyncParam::setAutoTrigger(bool value)
{
    autoTrigger_ = value;
    autoTriggerIsSet_ = true;
}

bool SyncParam::autoTriggerIsSet() const
{
    return autoTriggerIsSet_;
}

void SyncParam::unsetautoTrigger()
{
    autoTriggerIsSet_ = false;
}

std::string SyncParam::getVaultId() const
{
    return vaultId_;
}

void SyncParam::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool SyncParam::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void SyncParam::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


