

#include "huaweicloud/sdrs/v1/model/CreateReplicationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateReplicationRequestBody::CreateReplicationRequestBody()
{
    replicationIsSet_ = false;
}

CreateReplicationRequestBody::~CreateReplicationRequestBody() = default;

void CreateReplicationRequestBody::validate()
{
}

web::json::value CreateReplicationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIsSet_) {
        val[utility::conversions::to_string_t("replication")] = ModelBase::toJson(replication_);
    }

    return val;
}

bool CreateReplicationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication"));
        if(!fieldValue.is_null())
        {
            CreateReplicationRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplication(refVal);
        }
    }
    return ok;
}


CreateReplicationRequestParams CreateReplicationRequestBody::getReplication() const
{
    return replication_;
}

void CreateReplicationRequestBody::setReplication(const CreateReplicationRequestParams& value)
{
    replication_ = value;
    replicationIsSet_ = true;
}

bool CreateReplicationRequestBody::replicationIsSet() const
{
    return replicationIsSet_;
}

void CreateReplicationRequestBody::unsetreplication()
{
    replicationIsSet_ = false;
}

}
}
}
}
}


