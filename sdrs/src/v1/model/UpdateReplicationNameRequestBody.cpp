

#include "huaweicloud/sdrs/v1/model/UpdateReplicationNameRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateReplicationNameRequestBody::UpdateReplicationNameRequestBody()
{
    replicationIsSet_ = false;
}

UpdateReplicationNameRequestBody::~UpdateReplicationNameRequestBody() = default;

void UpdateReplicationNameRequestBody::validate()
{
}

web::json::value UpdateReplicationNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIsSet_) {
        val[utility::conversions::to_string_t("replication")] = ModelBase::toJson(replication_);
    }

    return val;
}

bool UpdateReplicationNameRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication"));
        if(!fieldValue.is_null())
        {
            UpdateReplicationNameRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplication(refVal);
        }
    }
    return ok;
}

UpdateReplicationNameRequestParams UpdateReplicationNameRequestBody::getReplication() const
{
    return replication_;
}

void UpdateReplicationNameRequestBody::setReplication(const UpdateReplicationNameRequestParams& value)
{
    replication_ = value;
    replicationIsSet_ = true;
}

bool UpdateReplicationNameRequestBody::replicationIsSet() const
{
    return replicationIsSet_;
}

void UpdateReplicationNameRequestBody::unsetreplication()
{
    replicationIsSet_ = false;
}

}
}
}
}
}


