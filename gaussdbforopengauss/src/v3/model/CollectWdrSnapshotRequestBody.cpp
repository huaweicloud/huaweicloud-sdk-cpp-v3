

#include "huaweicloud/gaussdbforopengauss/v3/model/CollectWdrSnapshotRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CollectWdrSnapshotRequestBody::CollectWdrSnapshotRequestBody()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    wdrTypeIsSet_ = false;
}

CollectWdrSnapshotRequestBody::~CollectWdrSnapshotRequestBody() = default;

void CollectWdrSnapshotRequestBody::validate()
{
}

web::json::value CollectWdrSnapshotRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(wdrTypeIsSet_) {
        val[utility::conversions::to_string_t("wdr_type")] = ModelBase::toJson(wdrType_);
    }

    return val;
}
bool CollectWdrSnapshotRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wdr_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wdr_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWdrType(refVal);
        }
    }
    return ok;
}


std::string CollectWdrSnapshotRequestBody::getStartTime() const
{
    return startTime_;
}

void CollectWdrSnapshotRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CollectWdrSnapshotRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CollectWdrSnapshotRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CollectWdrSnapshotRequestBody::getEndTime() const
{
    return endTime_;
}

void CollectWdrSnapshotRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CollectWdrSnapshotRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CollectWdrSnapshotRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& CollectWdrSnapshotRequestBody::getWdrType()
{
    return wdrType_;
}

void CollectWdrSnapshotRequestBody::setWdrType(const std::vector<std::string>& value)
{
    wdrType_ = value;
    wdrTypeIsSet_ = true;
}

bool CollectWdrSnapshotRequestBody::wdrTypeIsSet() const
{
    return wdrTypeIsSet_;
}

void CollectWdrSnapshotRequestBody::unsetwdrType()
{
    wdrTypeIsSet_ = false;
}

}
}
}
}
}


