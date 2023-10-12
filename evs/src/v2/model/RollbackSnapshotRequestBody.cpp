

#include "huaweicloud/evs/v2/model/RollbackSnapshotRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RollbackSnapshotRequestBody::RollbackSnapshotRequestBody()
{
    rollbackIsSet_ = false;
}

RollbackSnapshotRequestBody::~RollbackSnapshotRequestBody() = default;

void RollbackSnapshotRequestBody::validate()
{
}

web::json::value RollbackSnapshotRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rollbackIsSet_) {
        val[utility::conversions::to_string_t("rollback")] = ModelBase::toJson(rollback_);
    }

    return val;
}
bool RollbackSnapshotRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rollback"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rollback"));
        if(!fieldValue.is_null())
        {
            RollbackSnapshotOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollback(refVal);
        }
    }
    return ok;
}


RollbackSnapshotOption RollbackSnapshotRequestBody::getRollback() const
{
    return rollback_;
}

void RollbackSnapshotRequestBody::setRollback(const RollbackSnapshotOption& value)
{
    rollback_ = value;
    rollbackIsSet_ = true;
}

bool RollbackSnapshotRequestBody::rollbackIsSet() const
{
    return rollbackIsSet_;
}

void RollbackSnapshotRequestBody::unsetrollback()
{
    rollbackIsSet_ = false;
}

}
}
}
}
}


