

#include "huaweicloud/metastudio/v1/model/DeleteFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteFileRequest::DeleteFileRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    fileId_ = "";
    fileIdIsSet_ = false;
}

DeleteFileRequest::~DeleteFileRequest() = default;

void DeleteFileRequest::validate()
{
}

web::json::value DeleteFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }

    return val;
}
bool DeleteFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
        }
    }
    return ok;
}


std::string DeleteFileRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteFileRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteFileRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteFileRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteFileRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteFileRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteFileRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteFileRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteFileRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteFileRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteFileRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteFileRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string DeleteFileRequest::getFileId() const
{
    return fileId_;
}

void DeleteFileRequest::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool DeleteFileRequest::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void DeleteFileRequest::unsetfileId()
{
    fileIdIsSet_ = false;
}

}
}
}
}
}


