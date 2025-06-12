

#include "huaweicloud/metastudio/v1/model/CreateFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateFileResponse::CreateFileResponse()
{
    fileId_ = "";
    fileIdIsSet_ = false;
    uploadUrl_ = "";
    uploadUrlIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateFileResponse::~CreateFileResponse() = default;

void CreateFileResponse::validate()
{
}

web::json::value CreateFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }
    if(uploadUrlIsSet_) {
        val[utility::conversions::to_string_t("upload_url")] = ModelBase::toJson(uploadUrl_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateFileResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadUrl(refVal);
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


std::string CreateFileResponse::getFileId() const
{
    return fileId_;
}

void CreateFileResponse::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool CreateFileResponse::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void CreateFileResponse::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::string CreateFileResponse::getUploadUrl() const
{
    return uploadUrl_;
}

void CreateFileResponse::setUploadUrl(const std::string& value)
{
    uploadUrl_ = value;
    uploadUrlIsSet_ = true;
}

bool CreateFileResponse::uploadUrlIsSet() const
{
    return uploadUrlIsSet_;
}

void CreateFileResponse::unsetuploadUrl()
{
    uploadUrlIsSet_ = false;
}

std::string CreateFileResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateFileResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateFileResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateFileResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


