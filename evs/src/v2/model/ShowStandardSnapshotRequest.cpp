

#include "huaweicloud/evs/v2/model/ShowStandardSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowStandardSnapshotRequest::ShowStandardSnapshotRequest()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
}

ShowStandardSnapshotRequest::~ShowStandardSnapshotRequest() = default;

void ShowStandardSnapshotRequest::validate()
{
}

web::json::value ShowStandardSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }

    return val;
}
bool ShowStandardSnapshotRequest::fromJson(const web::json::value& val)
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


std::string ShowStandardSnapshotRequest::getSnapshotId() const
{
    return snapshotId_;
}

void ShowStandardSnapshotRequest::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool ShowStandardSnapshotRequest::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void ShowStandardSnapshotRequest::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

}
}
}
}
}


