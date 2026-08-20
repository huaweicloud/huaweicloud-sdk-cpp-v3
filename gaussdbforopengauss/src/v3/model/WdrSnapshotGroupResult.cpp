

#include "huaweicloud/gaussdbforopengauss/v3/model/WdrSnapshotGroupResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




WdrSnapshotGroupResult::WdrSnapshotGroupResult()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    beginTime_ = 0L;
    beginTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    snapshotsIsSet_ = false;
}

WdrSnapshotGroupResult::~WdrSnapshotGroupResult() = default;

void WdrSnapshotGroupResult::validate()
{
}

web::json::value WdrSnapshotGroupResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(snapshotsIsSet_) {
        val[utility::conversions::to_string_t("snapshots")] = ModelBase::toJson(snapshots_);
    }

    return val;
}
bool WdrSnapshotGroupResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshots"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshots"));
        if(!fieldValue.is_null())
        {
            std::vector<WdrSnapshotRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshots(refVal);
        }
    }
    return ok;
}


int64_t WdrSnapshotGroupResult::getTotalCount() const
{
    return totalCount_;
}

void WdrSnapshotGroupResult::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool WdrSnapshotGroupResult::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void WdrSnapshotGroupResult::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int64_t WdrSnapshotGroupResult::getBeginTime() const
{
    return beginTime_;
}

void WdrSnapshotGroupResult::setBeginTime(int64_t value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool WdrSnapshotGroupResult::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void WdrSnapshotGroupResult::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

int64_t WdrSnapshotGroupResult::getEndTime() const
{
    return endTime_;
}

void WdrSnapshotGroupResult::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool WdrSnapshotGroupResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void WdrSnapshotGroupResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<WdrSnapshotRecord>& WdrSnapshotGroupResult::getSnapshots()
{
    return snapshots_;
}

void WdrSnapshotGroupResult::setSnapshots(const std::vector<WdrSnapshotRecord>& value)
{
    snapshots_ = value;
    snapshotsIsSet_ = true;
}

bool WdrSnapshotGroupResult::snapshotsIsSet() const
{
    return snapshotsIsSet_;
}

void WdrSnapshotGroupResult::unsetsnapshots()
{
    snapshotsIsSet_ = false;
}

}
}
}
}
}


