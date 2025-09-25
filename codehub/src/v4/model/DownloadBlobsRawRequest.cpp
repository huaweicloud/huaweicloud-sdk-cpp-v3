

#include "huaweicloud/codehub/v4/model/DownloadBlobsRawRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DownloadBlobsRawRequest::DownloadBlobsRawRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    blobId_ = "";
    blobIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
}

DownloadBlobsRawRequest::~DownloadBlobsRawRequest() = default;

void DownloadBlobsRawRequest::validate()
{
}

web::json::value DownloadBlobsRawRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(blobIdIsSet_) {
        val[utility::conversions::to_string_t("blob_id")] = ModelBase::toJson(blobId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }

    return val;
}
bool DownloadBlobsRawRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("blob_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
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
    return ok;
}


int32_t DownloadBlobsRawRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DownloadBlobsRawRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DownloadBlobsRawRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DownloadBlobsRawRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string DownloadBlobsRawRequest::getBlobId() const
{
    return blobId_;
}

void DownloadBlobsRawRequest::setBlobId(const std::string& value)
{
    blobId_ = value;
    blobIdIsSet_ = true;
}

bool DownloadBlobsRawRequest::blobIdIsSet() const
{
    return blobIdIsSet_;
}

void DownloadBlobsRawRequest::unsetblobId()
{
    blobIdIsSet_ = false;
}

std::string DownloadBlobsRawRequest::getFileName() const
{
    return fileName_;
}

void DownloadBlobsRawRequest::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool DownloadBlobsRawRequest::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void DownloadBlobsRawRequest::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string DownloadBlobsRawRequest::getFilePath() const
{
    return filePath_;
}

void DownloadBlobsRawRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool DownloadBlobsRawRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void DownloadBlobsRawRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

}
}
}
}
}


