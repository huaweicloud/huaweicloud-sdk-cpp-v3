

#include "huaweicloud/evs/v2/model/DeleteStandardSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteStandardSnapshotRequest::DeleteStandardSnapshotRequest()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
}

DeleteStandardSnapshotRequest::~DeleteStandardSnapshotRequest() = default;

void DeleteStandardSnapshotRequest::validate()
{
}

web::json::value DeleteStandardSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }

    return val;
}
bool DeleteStandardSnapshotRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
        }
    }
    return ok;
}


std::string DeleteStandardSnapshotRequest::getSnapshotId() const
{
    return snapshotId_;
}

void DeleteStandardSnapshotRequest::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool DeleteStandardSnapshotRequest::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void DeleteStandardSnapshotRequest::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

}
}
}
}
}


