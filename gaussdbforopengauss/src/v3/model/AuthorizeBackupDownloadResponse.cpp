

#include "huaweicloud/gaussdbforopengauss/v3/model/AuthorizeBackupDownloadResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AuthorizeBackupDownloadResponse::AuthorizeBackupDownloadResponse()
{
    bucket_ = "";
    bucketIsSet_ = false;
    filePathsIsSet_ = false;
}

AuthorizeBackupDownloadResponse::~AuthorizeBackupDownloadResponse() = default;

void AuthorizeBackupDownloadResponse::validate()
{
}

web::json::value AuthorizeBackupDownloadResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(filePathsIsSet_) {
        val[utility::conversions::to_string_t("file_paths")] = ModelBase::toJson(filePaths_);
    }

    return val;
}
bool AuthorizeBackupDownloadResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_paths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_paths"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePaths(refVal);
        }
    }
    return ok;
}


std::string AuthorizeBackupDownloadResponse::getBucket() const
{
    return bucket_;
}

void AuthorizeBackupDownloadResponse::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool AuthorizeBackupDownloadResponse::bucketIsSet() const
{
    return bucketIsSet_;
}

void AuthorizeBackupDownloadResponse::unsetbucket()
{
    bucketIsSet_ = false;
}

std::vector<std::string>& AuthorizeBackupDownloadResponse::getFilePaths()
{
    return filePaths_;
}

void AuthorizeBackupDownloadResponse::setFilePaths(const std::vector<std::string>& value)
{
    filePaths_ = value;
    filePathsIsSet_ = true;
}

bool AuthorizeBackupDownloadResponse::filePathsIsSet() const
{
    return filePathsIsSet_;
}

void AuthorizeBackupDownloadResponse::unsetfilePaths()
{
    filePathsIsSet_ = false;
}

}
}
}
}
}


