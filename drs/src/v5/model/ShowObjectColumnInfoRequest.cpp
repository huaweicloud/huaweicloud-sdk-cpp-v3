

#include "huaweicloud/drs/v5/model/ShowObjectColumnInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowObjectColumnInfoRequest::ShowObjectColumnInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    isRefresh_ = false;
    isRefreshIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowObjectColumnInfoRequest::~ShowObjectColumnInfoRequest() = default;

void ShowObjectColumnInfoRequest::validate()
{
}

web::json::value ShowObjectColumnInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(isRefreshIsSet_) {
        val[utility::conversions::to_string_t("is_refresh")] = ModelBase::toJson(isRefresh_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowObjectColumnInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_refresh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_refresh"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRefresh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ShowObjectColumnInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowObjectColumnInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowObjectColumnInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowObjectColumnInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowObjectColumnInfoRequest::getJobId() const
{
    return jobId_;
}

void ShowObjectColumnInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowObjectColumnInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowObjectColumnInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowObjectColumnInfoRequest::getObjectId() const
{
    return objectId_;
}

void ShowObjectColumnInfoRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ShowObjectColumnInfoRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ShowObjectColumnInfoRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

bool ShowObjectColumnInfoRequest::isIsRefresh() const
{
    return isRefresh_;
}

void ShowObjectColumnInfoRequest::setIsRefresh(bool value)
{
    isRefresh_ = value;
    isRefreshIsSet_ = true;
}

bool ShowObjectColumnInfoRequest::isRefreshIsSet() const
{
    return isRefreshIsSet_;
}

void ShowObjectColumnInfoRequest::unsetisRefresh()
{
    isRefreshIsSet_ = false;
}

int32_t ShowObjectColumnInfoRequest::getLimit() const
{
    return limit_;
}

void ShowObjectColumnInfoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowObjectColumnInfoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowObjectColumnInfoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowObjectColumnInfoRequest::getOffset() const
{
    return offset_;
}

void ShowObjectColumnInfoRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowObjectColumnInfoRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowObjectColumnInfoRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


