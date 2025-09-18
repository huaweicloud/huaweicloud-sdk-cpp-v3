

#include "huaweicloud/codeartsartifact/v2/model/ShowProjectReleaseFilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowProjectReleaseFilesRequest::ShowProjectReleaseFilesRequest()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowProjectReleaseFilesRequest::~ShowProjectReleaseFilesRequest() = default;

void ShowProjectReleaseFilesRequest::validate()
{
}

web::json::value ShowProjectReleaseFilesRequest::toJson() const
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
bool ShowProjectReleaseFilesRequest::fromJson(const web::json::value& val)
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


std::string ShowProjectReleaseFilesRequest::getFileName() const
{
    return fileName_;
}

void ShowProjectReleaseFilesRequest::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ShowProjectReleaseFilesRequest::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ShowProjectReleaseFilesRequest::unsetfileName()
{
    fileNameIsSet_ = false;
}

int32_t ShowProjectReleaseFilesRequest::getLimit() const
{
    return limit_;
}

void ShowProjectReleaseFilesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowProjectReleaseFilesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowProjectReleaseFilesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowProjectReleaseFilesRequest::getOffset() const
{
    return offset_;
}

void ShowProjectReleaseFilesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowProjectReleaseFilesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowProjectReleaseFilesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


