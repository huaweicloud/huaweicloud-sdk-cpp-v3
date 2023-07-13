

#include "huaweicloud/mpc/v1/model/ObsObject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ObsObject::ObsObject()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    lastModified_ = "";
    lastModifiedIsSet_ = false;
}

ObsObject::~ObsObject() = default;

void ObsObject::validate()
{
}

web::json::value ObsObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }

    return val;
}

bool ObsObject::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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

std::string ObsObject::getFileName() const
{
    return fileName_;
}

void ObsObject::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ObsObject::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ObsObject::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t ObsObject::getSize() const
{
    return size_;
}

void ObsObject::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ObsObject::sizeIsSet() const
{
    return sizeIsSet_;
}

void ObsObject::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ObsObject::getLastModified() const
{
    return lastModified_;
}

void ObsObject::setLastModified(const std::string& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ObsObject::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ObsObject::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

}
}
}
}
}


