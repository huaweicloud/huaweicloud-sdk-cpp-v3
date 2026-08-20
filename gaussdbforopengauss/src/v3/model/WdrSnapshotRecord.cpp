

#include "huaweicloud/gaussdbforopengauss/v3/model/WdrSnapshotRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




WdrSnapshotRecord::WdrSnapshotRecord()
{
    id_ = "";
    idIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

WdrSnapshotRecord::~WdrSnapshotRecord() = default;

void WdrSnapshotRecord::validate()
{
}

web::json::value WdrSnapshotRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool WdrSnapshotRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    return ok;
}


std::string WdrSnapshotRecord::getId() const
{
    return id_;
}

void WdrSnapshotRecord::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WdrSnapshotRecord::idIsSet() const
{
    return idIsSet_;
}

void WdrSnapshotRecord::unsetid()
{
    idIsSet_ = false;
}

int64_t WdrSnapshotRecord::getStartTime() const
{
    return startTime_;
}

void WdrSnapshotRecord::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool WdrSnapshotRecord::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void WdrSnapshotRecord::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t WdrSnapshotRecord::getEndTime() const
{
    return endTime_;
}

void WdrSnapshotRecord::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool WdrSnapshotRecord::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void WdrSnapshotRecord::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


