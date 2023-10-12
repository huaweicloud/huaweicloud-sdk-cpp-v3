

#include "huaweicloud/rds/v3/model/SlowLogFile.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SlowLogFile::SlowLogFile()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
}

SlowLogFile::~SlowLogFile() = default;

void SlowLogFile::validate()
{
}

web::json::value SlowLogFile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }

    return val;
}
bool SlowLogFile::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SlowLogFile::getFileName() const
{
    return fileName_;
}

void SlowLogFile::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool SlowLogFile::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void SlowLogFile::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string SlowLogFile::getFileSize() const
{
    return fileSize_;
}

void SlowLogFile::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool SlowLogFile::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void SlowLogFile::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

}
}
}
}
}


