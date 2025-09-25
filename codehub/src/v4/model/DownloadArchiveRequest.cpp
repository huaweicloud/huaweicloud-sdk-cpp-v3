

#include "huaweicloud/codehub/v4/model/DownloadArchiveRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DownloadArchiveRequest::DownloadArchiveRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    archiveFormat_ = "";
    archiveFormatIsSet_ = false;
}

DownloadArchiveRequest::~DownloadArchiveRequest() = default;

void DownloadArchiveRequest::validate()
{
}

web::json::value DownloadArchiveRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(archiveFormatIsSet_) {
        val[utility::conversions::to_string_t("archive_format")] = ModelBase::toJson(archiveFormat_);
    }

    return val;
}
bool DownloadArchiveRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("archive_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archive_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchiveFormat(refVal);
        }
    }
    return ok;
}


int32_t DownloadArchiveRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DownloadArchiveRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DownloadArchiveRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DownloadArchiveRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string DownloadArchiveRequest::getSha() const
{
    return sha_;
}

void DownloadArchiveRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool DownloadArchiveRequest::shaIsSet() const
{
    return shaIsSet_;
}

void DownloadArchiveRequest::unsetsha()
{
    shaIsSet_ = false;
}

std::string DownloadArchiveRequest::getPath() const
{
    return path_;
}

void DownloadArchiveRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool DownloadArchiveRequest::pathIsSet() const
{
    return pathIsSet_;
}

void DownloadArchiveRequest::unsetpath()
{
    pathIsSet_ = false;
}

std::string DownloadArchiveRequest::getArchiveFormat() const
{
    return archiveFormat_;
}

void DownloadArchiveRequest::setArchiveFormat(const std::string& value)
{
    archiveFormat_ = value;
    archiveFormatIsSet_ = true;
}

bool DownloadArchiveRequest::archiveFormatIsSet() const
{
    return archiveFormatIsSet_;
}

void DownloadArchiveRequest::unsetarchiveFormat()
{
    archiveFormatIsSet_ = false;
}

}
}
}
}
}


