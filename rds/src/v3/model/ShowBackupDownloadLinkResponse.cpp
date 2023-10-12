

#include "huaweicloud/rds/v3/model/ShowBackupDownloadLinkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupDownloadLinkResponse::ShowBackupDownloadLinkResponse()
{
    filesIsSet_ = false;
    bucket_ = "";
    bucketIsSet_ = false;
}

ShowBackupDownloadLinkResponse::~ShowBackupDownloadLinkResponse() = default;

void ShowBackupDownloadLinkResponse::validate()
{
}

web::json::value ShowBackupDownloadLinkResponse::toJson() const
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
bool ShowBackupDownloadLinkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<GetBackupDownloadLink_files> refVal;
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


std::vector<GetBackupDownloadLink_files>& ShowBackupDownloadLinkResponse::getFiles()
{
    return files_;
}

void ShowBackupDownloadLinkResponse::setFiles(const std::vector<GetBackupDownloadLink_files>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool ShowBackupDownloadLinkResponse::filesIsSet() const
{
    return filesIsSet_;
}

void ShowBackupDownloadLinkResponse::unsetfiles()
{
    filesIsSet_ = false;
}

std::string ShowBackupDownloadLinkResponse::getBucket() const
{
    return bucket_;
}

void ShowBackupDownloadLinkResponse::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ShowBackupDownloadLinkResponse::bucketIsSet() const
{
    return bucketIsSet_;
}

void ShowBackupDownloadLinkResponse::unsetbucket()
{
    bucketIsSet_ = false;
}

}
}
}
}
}


