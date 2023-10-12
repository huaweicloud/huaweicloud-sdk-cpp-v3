

#include "huaweicloud/sdrs/v1/model/ExtendReplicationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ExtendReplicationRequestBody::ExtendReplicationRequestBody()
{
    extendReplicationIsSet_ = false;
}

ExtendReplicationRequestBody::~ExtendReplicationRequestBody() = default;

void ExtendReplicationRequestBody::validate()
{
}

web::json::value ExtendReplicationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(extendReplicationIsSet_) {
        val[utility::conversions::to_string_t("extend-replication")] = ModelBase::toJson(extendReplication_);
    }

    return val;
}
bool ExtendReplicationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("extend-replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend-replication"));
        if(!fieldValue.is_null())
        {
            ExtendReplicationRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendReplication(refVal);
        }
    }
    return ok;
}


ExtendReplicationRequestParams ExtendReplicationRequestBody::getExtendReplication() const
{
    return extendReplication_;
}

void ExtendReplicationRequestBody::setExtendReplication(const ExtendReplicationRequestParams& value)
{
    extendReplication_ = value;
    extendReplicationIsSet_ = true;
}

bool ExtendReplicationRequestBody::extendReplicationIsSet() const
{
    return extendReplicationIsSet_;
}

void ExtendReplicationRequestBody::unsetextendReplication()
{
    extendReplicationIsSet_ = false;
}

}
}
}
}
}


