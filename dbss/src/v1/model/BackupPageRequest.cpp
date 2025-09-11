

#include "huaweicloud/dbss/v1/model/BackupPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BackupPageRequest::BackupPageRequest()
{
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
}

BackupPageRequest::~BackupPageRequest() = default;

void BackupPageRequest::validate()
{
}

web::json::value BackupPageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool BackupPageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


utility::datetime BackupPageRequest::getEndTime() const
{
    return endTime_;
}

void BackupPageRequest::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool BackupPageRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void BackupPageRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t BackupPageRequest::getPage() const
{
    return page_;
}

void BackupPageRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool BackupPageRequest::pageIsSet() const
{
    return pageIsSet_;
}

void BackupPageRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t BackupPageRequest::getSize() const
{
    return size_;
}

void BackupPageRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BackupPageRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void BackupPageRequest::unsetsize()
{
    sizeIsSet_ = false;
}

utility::datetime BackupPageRequest::getStartTime() const
{
    return startTime_;
}

void BackupPageRequest::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BackupPageRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BackupPageRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


