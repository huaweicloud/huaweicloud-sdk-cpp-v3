

#include "huaweicloud/codeartsartifact/v2/model/ShowReleaseProjectFilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowReleaseProjectFilesRequest::ShowReleaseProjectFilesRequest()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowReleaseProjectFilesRequest::~ShowReleaseProjectFilesRequest() = default;

void ShowReleaseProjectFilesRequest::validate()
{
}

web::json::value ShowReleaseProjectFilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowReleaseProjectFilesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
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


std::string ShowReleaseProjectFilesRequest::getFileName() const
{
    return fileName_;
}

void ShowReleaseProjectFilesRequest::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ShowReleaseProjectFilesRequest::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ShowReleaseProjectFilesRequest::unsetfileName()
{
    fileNameIsSet_ = false;
}

int32_t ShowReleaseProjectFilesRequest::getLimit() const
{
    return limit_;
}

void ShowReleaseProjectFilesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowReleaseProjectFilesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowReleaseProjectFilesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowReleaseProjectFilesRequest::getOffset() const
{
    return offset_;
}

void ShowReleaseProjectFilesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowReleaseProjectFilesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowReleaseProjectFilesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


