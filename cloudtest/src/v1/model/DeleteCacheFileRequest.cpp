

#include "huaweicloud/cloudtest/v1/model/DeleteCacheFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteCacheFileRequest::DeleteCacheFileRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    parentUri_ = "";
    parentUriIsSet_ = false;
    bakUp_ = false;
    bakUpIsSet_ = false;
}

DeleteCacheFileRequest::~DeleteCacheFileRequest() = default;

void DeleteCacheFileRequest::validate()
{
}

web::json::value DeleteCacheFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(parentUriIsSet_) {
        val[utility::conversions::to_string_t("parent_uri")] = ModelBase::toJson(parentUri_);
    }
    if(bakUpIsSet_) {
        val[utility::conversions::to_string_t("bak_up")] = ModelBase::toJson(bakUp_);
    }

    return val;
}
bool DeleteCacheFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bak_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bak_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBakUp(refVal);
        }
    }
    return ok;
}


std::string DeleteCacheFileRequest::getProjectId() const
{
    return projectId_;
}

void DeleteCacheFileRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteCacheFileRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteCacheFileRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteCacheFileRequest::getFilePath() const
{
    return filePath_;
}

void DeleteCacheFileRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool DeleteCacheFileRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void DeleteCacheFileRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string DeleteCacheFileRequest::getUri() const
{
    return uri_;
}

void DeleteCacheFileRequest::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool DeleteCacheFileRequest::uriIsSet() const
{
    return uriIsSet_;
}

void DeleteCacheFileRequest::unseturi()
{
    uriIsSet_ = false;
}

std::string DeleteCacheFileRequest::getParentUri() const
{
    return parentUri_;
}

void DeleteCacheFileRequest::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool DeleteCacheFileRequest::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void DeleteCacheFileRequest::unsetparentUri()
{
    parentUriIsSet_ = false;
}

bool DeleteCacheFileRequest::isBakUp() const
{
    return bakUp_;
}

void DeleteCacheFileRequest::setBakUp(bool value)
{
    bakUp_ = value;
    bakUpIsSet_ = true;
}

bool DeleteCacheFileRequest::bakUpIsSet() const
{
    return bakUpIsSet_;
}

void DeleteCacheFileRequest::unsetbakUp()
{
    bakUpIsSet_ = false;
}

}
}
}
}
}


