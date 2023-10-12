

#include "huaweicloud/gaussdbforopengauss/v3/model/DownloadBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DownloadBackupResponse::DownloadBackupResponse()
{
    filesIsSet_ = false;
    bucket_ = "";
    bucketIsSet_ = false;
}

DownloadBackupResponse::~DownloadBackupResponse() = default;

void DownloadBackupResponse::validate()
{
}

web::json::value DownloadBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }
    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }

    return val;
}
bool DownloadBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<DownloadObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    return ok;
}


std::vector<DownloadObject>& DownloadBackupResponse::getFiles()
{
    return files_;
}

void DownloadBackupResponse::setFiles(const std::vector<DownloadObject>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool DownloadBackupResponse::filesIsSet() const
{
    return filesIsSet_;
}

void DownloadBackupResponse::unsetfiles()
{
    filesIsSet_ = false;
}

std::string DownloadBackupResponse::getBucket() const
{
    return bucket_;
}

void DownloadBackupResponse::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool DownloadBackupResponse::bucketIsSet() const
{
    return bucketIsSet_;
}

void DownloadBackupResponse::unsetbucket()
{
    bucketIsSet_ = false;
}

}
}
}
}
}


