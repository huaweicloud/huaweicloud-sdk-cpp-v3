

#include "huaweicloud/live/v1/model/PackageRequestArgs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




PackageRequestArgs::PackageRequestArgs()
{
    recordIsSet_ = false;
    timeshiftIsSet_ = false;
    liveIsSet_ = false;
}

PackageRequestArgs::~PackageRequestArgs() = default;

void PackageRequestArgs::validate()
{
}

web::json::value PackageRequestArgs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIsSet_) {
        val[utility::conversions::to_string_t("record")] = ModelBase::toJson(record_);
    }
    if(timeshiftIsSet_) {
        val[utility::conversions::to_string_t("timeshift")] = ModelBase::toJson(timeshift_);
    }
    if(liveIsSet_) {
        val[utility::conversions::to_string_t("live")] = ModelBase::toJson(live_);
    }

    return val;
}
bool PackageRequestArgs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record"));
        if(!fieldValue.is_null())
        {
            std::vector<RecordRequestArgs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeshift"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeshift"));
        if(!fieldValue.is_null())
        {
            std::vector<TimeshiftRequestArgs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeshift(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("live"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live"));
        if(!fieldValue.is_null())
        {
            std::vector<LiveRequestArgs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLive(refVal);
        }
    }
    return ok;
}


std::vector<RecordRequestArgs>& PackageRequestArgs::getRecord()
{
    return record_;
}

void PackageRequestArgs::setRecord(const std::vector<RecordRequestArgs>& value)
{
    record_ = value;
    recordIsSet_ = true;
}

bool PackageRequestArgs::recordIsSet() const
{
    return recordIsSet_;
}

void PackageRequestArgs::unsetrecord()
{
    recordIsSet_ = false;
}

std::vector<TimeshiftRequestArgs>& PackageRequestArgs::getTimeshift()
{
    return timeshift_;
}

void PackageRequestArgs::setTimeshift(const std::vector<TimeshiftRequestArgs>& value)
{
    timeshift_ = value;
    timeshiftIsSet_ = true;
}

bool PackageRequestArgs::timeshiftIsSet() const
{
    return timeshiftIsSet_;
}

void PackageRequestArgs::unsettimeshift()
{
    timeshiftIsSet_ = false;
}

std::vector<LiveRequestArgs>& PackageRequestArgs::getLive()
{
    return live_;
}

void PackageRequestArgs::setLive(const std::vector<LiveRequestArgs>& value)
{
    live_ = value;
    liveIsSet_ = true;
}

bool PackageRequestArgs::liveIsSet() const
{
    return liveIsSet_;
}

void PackageRequestArgs::unsetlive()
{
    liveIsSet_ = false;
}

}
}
}
}
}


