

#include "huaweicloud/evs/model/RollbackSnapshotResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RollbackSnapshotResponse::RollbackSnapshotResponse()
{
    rollbackIsSet_ = false;
}

RollbackSnapshotResponse::~RollbackSnapshotResponse() = default;

void RollbackSnapshotResponse::validate()
{
}

web::json::value RollbackSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rollbackIsSet_) {
        val[utility::conversions::to_string_t("rollback")] = ModelBase::toJson(rollback_);
    }

    return val;
}

bool RollbackSnapshotResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rollback"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rollback"));
        if(!fieldValue.is_null())
        {
            RollbackInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollback(refVal);
        }
    }
    return ok;
}


RollbackInfo RollbackSnapshotResponse::getRollback() const
{
    return rollback_;
}

void RollbackSnapshotResponse::setRollback(const RollbackInfo& value)
{
    rollback_ = value;
    rollbackIsSet_ = true;
}

bool RollbackSnapshotResponse::rollbackIsSet() const
{
    return rollbackIsSet_;
}

void RollbackSnapshotResponse::unsetrollback()
{
    rollbackIsSet_ = false;
}

}
}
}
}
}


