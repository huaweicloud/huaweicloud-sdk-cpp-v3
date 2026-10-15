

#include "huaweicloud/drs/v5/model/FileInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




FileInfo::FileInfo()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    lastModified_ = "";
    lastModifiedIsSet_ = false;
}

FileInfo::~FileInfo() = default;

void FileInfo::validate()
{
}

web::json::value FileInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }

    return val;
}
bool FileInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    return ok;
}


std::string FileInfo::getFileName() const
{
    return fileName_;
}

void FileInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool FileInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void FileInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string FileInfo::getLastModified() const
{
    return lastModified_;
}

void FileInfo::setLastModified(const std::string& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool FileInfo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void FileInfo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

}
}
}
}
}


