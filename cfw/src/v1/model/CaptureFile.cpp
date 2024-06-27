

#include "huaweicloud/cfw/v1/model/CaptureFile.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CaptureFile::CaptureFile()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
}

CaptureFile::~CaptureFile() = default;

void CaptureFile::validate()
{
}

web::json::value CaptureFile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }

    return val;
}
bool CaptureFile::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    return ok;
}


std::string CaptureFile::getFileName() const
{
    return fileName_;
}

void CaptureFile::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool CaptureFile::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void CaptureFile::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string CaptureFile::getUrl() const
{
    return url_;
}

void CaptureFile::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool CaptureFile::urlIsSet() const
{
    return urlIsSet_;
}

void CaptureFile::unseturl()
{
    urlIsSet_ = false;
}

std::string CaptureFile::getFilePath() const
{
    return filePath_;
}

void CaptureFile::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool CaptureFile::filePathIsSet() const
{
    return filePathIsSet_;
}

void CaptureFile::unsetfilePath()
{
    filePathIsSet_ = false;
}

}
}
}
}
}


