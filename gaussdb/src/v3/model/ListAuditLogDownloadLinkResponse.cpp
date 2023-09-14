

#include "huaweicloud/gaussdb/v3/model/ListAuditLogDownloadLinkResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListAuditLogDownloadLinkResponse::ListAuditLogDownloadLinkResponse()
{
    filesIsSet_ = false;
}

ListAuditLogDownloadLinkResponse::~ListAuditLogDownloadLinkResponse() = default;

void ListAuditLogDownloadLinkResponse::validate()
{
}

web::json::value ListAuditLogDownloadLinkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}

bool ListAuditLogDownloadLinkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<FileInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}

std::vector<FileInfo>& ListAuditLogDownloadLinkResponse::getFiles()
{
    return files_;
}

void ListAuditLogDownloadLinkResponse::setFiles(const std::vector<FileInfo>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool ListAuditLogDownloadLinkResponse::filesIsSet() const
{
    return filesIsSet_;
}

void ListAuditLogDownloadLinkResponse::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


