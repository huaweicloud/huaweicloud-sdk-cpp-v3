

#include "huaweicloud/meeting/v1/model/ShowRecordingFileDownloadUrlsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRecordingFileDownloadUrlsRequest::ShowRecordingFileDownloadUrlsRequest()
{
    confUUID_ = "";
    confUUIDIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
}

ShowRecordingFileDownloadUrlsRequest::~ShowRecordingFileDownloadUrlsRequest() = default;

void ShowRecordingFileDownloadUrlsRequest::validate()
{
}

web::json::value ShowRecordingFileDownloadUrlsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(xAuthorizationTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Authorization-Type")] = ModelBase::toJson(xAuthorizationType_);
    }
    if(xSiteIdIsSet_) {
        val[utility::conversions::to_string_t("X-Site-Id")] = ModelBase::toJson(xSiteId_);
    }

    return val;
}
bool ShowRecordingFileDownloadUrlsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Authorization-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Authorization-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAuthorizationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Site-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Site-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSiteId(refVal);
        }
    }
    return ok;
}


std::string ShowRecordingFileDownloadUrlsRequest::getConfUUID() const
{
    return confUUID_;
}

void ShowRecordingFileDownloadUrlsRequest::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool ShowRecordingFileDownloadUrlsRequest::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void ShowRecordingFileDownloadUrlsRequest::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

int32_t ShowRecordingFileDownloadUrlsRequest::getOffset() const
{
    return offset_;
}

void ShowRecordingFileDownloadUrlsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowRecordingFileDownloadUrlsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowRecordingFileDownloadUrlsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowRecordingFileDownloadUrlsRequest::getLimit() const
{
    return limit_;
}

void ShowRecordingFileDownloadUrlsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowRecordingFileDownloadUrlsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowRecordingFileDownloadUrlsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowRecordingFileDownloadUrlsRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void ShowRecordingFileDownloadUrlsRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool ShowRecordingFileDownloadUrlsRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void ShowRecordingFileDownloadUrlsRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string ShowRecordingFileDownloadUrlsRequest::getXSiteId() const
{
    return xSiteId_;
}

void ShowRecordingFileDownloadUrlsRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool ShowRecordingFileDownloadUrlsRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void ShowRecordingFileDownloadUrlsRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

}
}
}
}
}


