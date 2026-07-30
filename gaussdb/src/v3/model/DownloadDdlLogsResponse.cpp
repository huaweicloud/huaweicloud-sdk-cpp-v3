

#include "huaweicloud/gaussdb/v3/model/DownloadDdlLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadDdlLogsResponse::DownloadDdlLogsResponse()
{
    downloadFilesIsSet_ = false;
}

DownloadDdlLogsResponse::~DownloadDdlLogsResponse() = default;

void DownloadDdlLogsResponse::validate()
{
}

web::json::value DownloadDdlLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(downloadFilesIsSet_) {
        val[utility::conversions::to_string_t("download_files")] = ModelBase::toJson(downloadFiles_);
    }

    return val;
}
bool DownloadDdlLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("download_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_files"));
        if(!fieldValue.is_null())
        {
            std::vector<DownLoadFileInfoItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadFiles(refVal);
        }
    }
    return ok;
}


std::vector<DownLoadFileInfoItem>& DownloadDdlLogsResponse::getDownloadFiles()
{
    return downloadFiles_;
}

void DownloadDdlLogsResponse::setDownloadFiles(const std::vector<DownLoadFileInfoItem>& value)
{
    downloadFiles_ = value;
    downloadFilesIsSet_ = true;
}

bool DownloadDdlLogsResponse::downloadFilesIsSet() const
{
    return downloadFilesIsSet_;
}

void DownloadDdlLogsResponse::unsetdownloadFiles()
{
    downloadFilesIsSet_ = false;
}

}
}
}
}
}


