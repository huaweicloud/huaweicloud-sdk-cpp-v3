

#include "huaweicloud/sdrs/v1/model/ShowReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowReplicationResponse::ShowReplicationResponse()
{
    replicationIsSet_ = false;
}

ShowReplicationResponse::~ShowReplicationResponse() = default;

void ShowReplicationResponse::validate()
{
}

web::json::value ShowReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIsSet_) {
        val[utility::conversions::to_string_t("replication")] = ModelBase::toJson(replication_);
    }

    return val;
}
bool ShowReplicationResponse::fromJson(const web::json::value& val)
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


ShowReplicationParams ShowReplicationResponse::getReplication() const
{
    return replication_;
}

void ShowReplicationResponse::setReplication(const ShowReplicationParams& value)
{
    replication_ = value;
    replicationIsSet_ = true;
}

bool ShowReplicationResponse::replicationIsSet() const
{
    return replicationIsSet_;
}

void ShowReplicationResponse::unsetreplication()
{
    replicationIsSet_ = false;
}

}
}
}
}
}


