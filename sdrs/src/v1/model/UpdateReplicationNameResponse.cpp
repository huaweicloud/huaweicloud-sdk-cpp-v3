

#include "huaweicloud/sdrs/v1/model/UpdateReplicationNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateReplicationNameResponse::UpdateReplicationNameResponse()
{
    replicationIsSet_ = false;
}

UpdateReplicationNameResponse::~UpdateReplicationNameResponse() = default;

void UpdateReplicationNameResponse::validate()
{
}

web::json::value UpdateReplicationNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIsSet_) {
        val[utility::conversions::to_string_t("replication")] = ModelBase::toJson(replication_);
    }

    return val;
}
bool UpdateReplicationNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication"));
        if(!fieldValue.is_null())
        {
            ShowReplicationParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplication(refVal);
        }
    }
    return ok;
}


ShowReplicationParams UpdateReplicationNameResponse::getReplication() const
{
    return replication_;
}

void UpdateReplicationNameResponse::setReplication(const ShowReplicationParams& value)
{
    replication_ = value;
    replicationIsSet_ = true;
}

bool UpdateReplicationNameResponse::replicationIsSet() const
{
    return replicationIsSet_;
}

void UpdateReplicationNameResponse::unsetreplication()
{
    replicationIsSet_ = false;
}

}
}
}
}
}


