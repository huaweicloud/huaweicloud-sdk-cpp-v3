

#include "huaweicloud/drs/v5/model/BackupFileResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BackupFileResp::BackupFileResp()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
    fileLastModify_ = "";
    fileLastModifyIsSet_ = false;
}

BackupFileResp::~BackupFileResp() = default;

void BackupFileResp::validate()
{
}

web::json::value BackupFileResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(fileLastModifyIsSet_) {
        val[utility::conversions::to_string_t("file_last_modify")] = ModelBase::toJson(fileLastModify_);
    }

    return val;
}
bool BackupFileResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_last_modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_last_modify"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileLastModify(refVal);
        }
    }
    return ok;
}


std::string BackupFileResp::getFileName() const
{
    return fileName_;
}

void BackupFileResp::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool BackupFileResp::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void BackupFileResp::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string BackupFileResp::getFileSize() const
{
    return fileSize_;
}

void BackupFileResp::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool BackupFileResp::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void BackupFileResp::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string BackupFileResp::getFileLastModify() const
{
    return fileLastModify_;
}

void BackupFileResp::setFileLastModify(const std::string& value)
{
    fileLastModify_ = value;
    fileLastModifyIsSet_ = true;
}

bool BackupFileResp::fileLastModifyIsSet() const
{
    return fileLastModifyIsSet_;
}

void BackupFileResp::unsetfileLastModify()
{
    fileLastModifyIsSet_ = false;
}

}
}
}
}
}


