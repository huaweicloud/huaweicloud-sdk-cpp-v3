

#include "huaweicloud/cbr/v1/model/VaultBackupReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultBackupReq::VaultBackupReq()
{
    checkpointIsSet_ = false;
}

VaultBackupReq::~VaultBackupReq() = default;

void VaultBackupReq::validate()
{
}

web::json::value VaultBackupReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIsSet_) {
        val[utility::conversions::to_string_t("checkpoint")] = ModelBase::toJson(checkpoint_);
    }

    return val;
}
bool VaultBackupReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checkpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint"));
        if(!fieldValue.is_null())
        {
            VaultBackup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpoint(refVal);
        }
    }
    return ok;
}


VaultBackup VaultBackupReq::getCheckpoint() const
{
    return checkpoint_;
}

void VaultBackupReq::setCheckpoint(const VaultBackup& value)
{
    checkpoint_ = value;
    checkpointIsSet_ = true;
}

bool VaultBackupReq::checkpointIsSet() const
{
    return checkpointIsSet_;
}

void VaultBackupReq::unsetcheckpoint()
{
    checkpointIsSet_ = false;
}

}
}
}
}
}


