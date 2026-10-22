

#include "huaweicloud/evs/v2/model/RollbackSnapshotRequestBodyV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RollbackSnapshotRequestBodyV5::RollbackSnapshotRequestBodyV5()
{
    rollbackIsSet_ = false;
}

RollbackSnapshotRequestBodyV5::~RollbackSnapshotRequestBodyV5() = default;

void RollbackSnapshotRequestBodyV5::validate()
{
}

web::json::value RollbackSnapshotRequestBodyV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rollbackIsSet_) {
        val[utility::conversions::to_string_t("rollback")] = ModelBase::toJson(rollback_);
    }

    return val;
}
bool RollbackSnapshotRequestBodyV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rollback"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rollback"));
        if(!fieldValue.is_null())
        {
            RollbackSnapshotRequestBodyNew refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollback(refVal);
        }
    }
    return ok;
}


RollbackSnapshotRequestBodyNew RollbackSnapshotRequestBodyV5::getRollback() const
{
    return rollback_;
}

void RollbackSnapshotRequestBodyV5::setRollback(const RollbackSnapshotRequestBodyNew& value)
{
    rollback_ = value;
    rollbackIsSet_ = true;
}

bool RollbackSnapshotRequestBodyV5::rollbackIsSet() const
{
    return rollbackIsSet_;
}

void RollbackSnapshotRequestBodyV5::unsetrollback()
{
    rollbackIsSet_ = false;
}

}
}
}
}
}


