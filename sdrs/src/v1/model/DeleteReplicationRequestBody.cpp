

#include "huaweicloud/sdrs/v1/model/DeleteReplicationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteReplicationRequestBody::DeleteReplicationRequestBody()
{
    replicationIsSet_ = false;
}

DeleteReplicationRequestBody::~DeleteReplicationRequestBody() = default;

void DeleteReplicationRequestBody::validate()
{
}

web::json::value DeleteReplicationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIsSet_) {
        val[utility::conversions::to_string_t("replication")] = ModelBase::toJson(replication_);
    }

    return val;
}

bool DeleteReplicationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication"));
        if(!fieldValue.is_null())
        {
            DeleteReplicationRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplication(refVal);
        }
    }
    return ok;
}


DeleteReplicationRequestParams DeleteReplicationRequestBody::getReplication() const
{
    return replication_;
}

void DeleteReplicationRequestBody::setReplication(const DeleteReplicationRequestParams& value)
{
    replication_ = value;
    replicationIsSet_ = true;
}

bool DeleteReplicationRequestBody::replicationIsSet() const
{
    return replicationIsSet_;
}

void DeleteReplicationRequestBody::unsetreplication()
{
    replicationIsSet_ = false;
}

}
}
}
}
}


