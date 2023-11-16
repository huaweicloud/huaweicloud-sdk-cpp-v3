

#include "huaweicloud/aad/v1/model/ShowUnblockRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ShowUnblockRecordRequest::ShowUnblockRecordRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

ShowUnblockRecordRequest::~ShowUnblockRecordRequest() = default;

void ShowUnblockRecordRequest::validate()
{
}

web::json::value ShowUnblockRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowUnblockRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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


std::string ShowUnblockRecordRequest::getDomainId() const
{
    return domainId_;
}

void ShowUnblockRecordRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowUnblockRecordRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowUnblockRecordRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int64_t ShowUnblockRecordRequest::getStartTime() const
{
    return startTime_;
}

void ShowUnblockRecordRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowUnblockRecordRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowUnblockRecordRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowUnblockRecordRequest::getEndTime() const
{
    return endTime_;
}

void ShowUnblockRecordRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowUnblockRecordRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowUnblockRecordRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


