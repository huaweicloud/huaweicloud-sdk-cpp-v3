

#include "huaweicloud/cbr/v1/model/CopyCheckpointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CopyCheckpointResponse::CopyCheckpointResponse()
{
    replicationIsSet_ = false;
}

CopyCheckpointResponse::~CopyCheckpointResponse() = default;

void CopyCheckpointResponse::validate()
{
}

web::json::value CopyCheckpointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIsSet_) {
        val[utility::conversions::to_string_t("replication")] = ModelBase::toJson(replication_);
    }

    return val;
}
bool CopyCheckpointResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication"));
        if(!fieldValue.is_null())
        {
            CheckpointReplicateRespBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplication(refVal);
        }
    }
    return ok;
}


CheckpointReplicateRespBody CopyCheckpointResponse::getReplication() const
{
    return replication_;
}

void CopyCheckpointResponse::setReplication(const CheckpointReplicateRespBody& value)
{
    replication_ = value;
    replicationIsSet_ = true;
}

bool CopyCheckpointResponse::replicationIsSet() const
{
    return replicationIsSet_;
}

void CopyCheckpointResponse::unsetreplication()
{
    replicationIsSet_ = false;
}

}
}
}
}
}


