

#include "huaweicloud/cbr/v1/model/CopyBackupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CopyBackupResponse::CopyBackupResponse()
{
    replicationIsSet_ = false;
}

CopyBackupResponse::~CopyBackupResponse() = default;

void CopyBackupResponse::validate()
{
}

web::json::value CopyBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIsSet_) {
        val[utility::conversions::to_string_t("replication")] = ModelBase::toJson(replication_);
    }

    return val;
}

bool CopyBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication"));
        if(!fieldValue.is_null())
        {
            BackupReplicateRespBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplication(refVal);
        }
    }
    return ok;
}

BackupReplicateRespBody CopyBackupResponse::getReplication() const
{
    return replication_;
}

void CopyBackupResponse::setReplication(const BackupReplicateRespBody& value)
{
    replication_ = value;
    replicationIsSet_ = true;
}

bool CopyBackupResponse::replicationIsSet() const
{
    return replicationIsSet_;
}

void CopyBackupResponse::unsetreplication()
{
    replicationIsSet_ = false;
}

}
}
}
}
}


