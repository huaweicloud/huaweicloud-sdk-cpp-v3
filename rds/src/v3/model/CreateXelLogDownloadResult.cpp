

#include "huaweicloud/rds/v3/model/CreateXelLogDownloadResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateXelLogDownloadResult::CreateXelLogDownloadResult()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
    fileLink_ = "";
    fileLinkIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
}

CreateXelLogDownloadResult::~CreateXelLogDownloadResult() = default;

void CreateXelLogDownloadResult::validate()
{
}

web::json::value CreateXelLogDownloadResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(fileLinkIsSet_) {
        val[utility::conversions::to_string_t("file_link")] = ModelBase::toJson(fileLink_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}

bool CreateXelLogDownloadResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}

std::string CreateXelLogDownloadResult::getFileName() const
{
    return fileName_;
}

void CreateXelLogDownloadResult::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool CreateXelLogDownloadResult::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void CreateXelLogDownloadResult::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string CreateXelLogDownloadResult::getStatus() const
{
    return status_;
}

void CreateXelLogDownloadResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateXelLogDownloadResult::statusIsSet() const
{
    return statusIsSet_;
}

void CreateXelLogDownloadResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateXelLogDownloadResult::getFileSize() const
{
    return fileSize_;
}

void CreateXelLogDownloadResult::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool CreateXelLogDownloadResult::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void CreateXelLogDownloadResult::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string CreateXelLogDownloadResult::getFileLink() const
{
    return fileLink_;
}

void CreateXelLogDownloadResult::setFileLink(const std::string& value)
{
    fileLink_ = value;
    fileLinkIsSet_ = true;
}

bool CreateXelLogDownloadResult::fileLinkIsSet() const
{
    return fileLinkIsSet_;
}

void CreateXelLogDownloadResult::unsetfileLink()
{
    fileLinkIsSet_ = false;
}

std::string CreateXelLogDownloadResult::getCreateAt() const
{
    return createAt_;
}

void CreateXelLogDownloadResult::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool CreateXelLogDownloadResult::createAtIsSet() const
{
    return createAtIsSet_;
}

void CreateXelLogDownloadResult::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string CreateXelLogDownloadResult::getUpdateAt() const
{
    return updateAt_;
}

void CreateXelLogDownloadResult::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool CreateXelLogDownloadResult::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void CreateXelLogDownloadResult::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


