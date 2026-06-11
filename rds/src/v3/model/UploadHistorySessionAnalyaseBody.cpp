

#include "huaweicloud/rds/v3/model/UploadHistorySessionAnalyaseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UploadHistorySessionAnalyaseBody::UploadHistorySessionAnalyaseBody()
{
    type_ = "";
    typeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

UploadHistorySessionAnalyaseBody::~UploadHistorySessionAnalyaseBody() = default;

void UploadHistorySessionAnalyaseBody::validate()
{
}

web::json::value UploadHistorySessionAnalyaseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool UploadHistorySessionAnalyaseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string UploadHistorySessionAnalyaseBody::getType() const
{
    return type_;
}

void UploadHistorySessionAnalyaseBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UploadHistorySessionAnalyaseBody::typeIsSet() const
{
    return typeIsSet_;
}

void UploadHistorySessionAnalyaseBody::unsettype()
{
    typeIsSet_ = false;
}

int64_t UploadHistorySessionAnalyaseBody::getStartTime() const
{
    return startTime_;
}

void UploadHistorySessionAnalyaseBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool UploadHistorySessionAnalyaseBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void UploadHistorySessionAnalyaseBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t UploadHistorySessionAnalyaseBody::getEndTime() const
{
    return endTime_;
}

void UploadHistorySessionAnalyaseBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UploadHistorySessionAnalyaseBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UploadHistorySessionAnalyaseBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


