

#include "huaweicloud/metastudio/v1/model/CreateLargeFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateLargeFileResponse::CreateLargeFileResponse()
{
    fileId_ = "";
    fileIdIsSet_ = false;
    uploadUrlsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateLargeFileResponse::~CreateLargeFileResponse() = default;

void CreateLargeFileResponse::validate()
{
}

web::json::value CreateLargeFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }
    if(uploadUrlsIsSet_) {
        val[utility::conversions::to_string_t("upload_urls")] = ModelBase::toJson(uploadUrls_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateLargeFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upload_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upload_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadUrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateLargeFileResponse::getFileId() const
{
    return fileId_;
}

void CreateLargeFileResponse::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool CreateLargeFileResponse::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void CreateLargeFileResponse::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::vector<std::string>& CreateLargeFileResponse::getUploadUrls()
{
    return uploadUrls_;
}

void CreateLargeFileResponse::setUploadUrls(const std::vector<std::string>& value)
{
    uploadUrls_ = value;
    uploadUrlsIsSet_ = true;
}

bool CreateLargeFileResponse::uploadUrlsIsSet() const
{
    return uploadUrlsIsSet_;
}

void CreateLargeFileResponse::unsetuploadUrls()
{
    uploadUrlsIsSet_ = false;
}

std::string CreateLargeFileResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateLargeFileResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateLargeFileResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateLargeFileResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


