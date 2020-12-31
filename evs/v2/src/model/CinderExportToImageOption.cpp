

#include "huaweicloud/evs/model/CinderExportToImageOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderExportToImageOption::CinderExportToImageOption()
{
    containerFormat_ = "";
    containerFormatIsSet_ = false;
    diskFormat_ = "";
    diskFormatIsSet_ = false;
    force_ = false;
    forceIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    osType_ = "";
    osTypeIsSet_ = false;
}

CinderExportToImageOption::~CinderExportToImageOption() = default;

void CinderExportToImageOption::validate()
{
}

web::json::value CinderExportToImageOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(containerFormatIsSet_) {
        val[utility::conversions::to_string_t("container_format")] = ModelBase::toJson(containerFormat_);
    }
    if(diskFormatIsSet_) {
        val[utility::conversions::to_string_t("disk_format")] = ModelBase::toJson(diskFormat_);
    }
    if(forceIsSet_) {
        val[utility::conversions::to_string_t("force")] = ModelBase::toJson(force_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(osTypeIsSet_) {
        val[utility::conversions::to_string_t("__os_type")] = ModelBase::toJson(osType_);
    }

    return val;
}

bool CinderExportToImageOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("container_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForce(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__os_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__os_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsType(refVal);
        }
    }
    return ok;
}


std::string CinderExportToImageOption::getContainerFormat() const
{
    return containerFormat_;
}

void CinderExportToImageOption::setContainerFormat(const std::string& value)
{
    containerFormat_ = value;
    containerFormatIsSet_ = true;
}

bool CinderExportToImageOption::containerFormatIsSet() const
{
    return containerFormatIsSet_;
}

void CinderExportToImageOption::unsetcontainerFormat()
{
    containerFormatIsSet_ = false;
}

std::string CinderExportToImageOption::getDiskFormat() const
{
    return diskFormat_;
}

void CinderExportToImageOption::setDiskFormat(const std::string& value)
{
    diskFormat_ = value;
    diskFormatIsSet_ = true;
}

bool CinderExportToImageOption::diskFormatIsSet() const
{
    return diskFormatIsSet_;
}

void CinderExportToImageOption::unsetdiskFormat()
{
    diskFormatIsSet_ = false;
}

bool CinderExportToImageOption::isForce() const
{
    return force_;
}

void CinderExportToImageOption::setForce(bool value)
{
    force_ = value;
    forceIsSet_ = true;
}

bool CinderExportToImageOption::forceIsSet() const
{
    return forceIsSet_;
}

void CinderExportToImageOption::unsetforce()
{
    forceIsSet_ = false;
}

std::string CinderExportToImageOption::getImageName() const
{
    return imageName_;
}

void CinderExportToImageOption::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool CinderExportToImageOption::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void CinderExportToImageOption::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string CinderExportToImageOption::getOsType() const
{
    return osType_;
}

void CinderExportToImageOption::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool CinderExportToImageOption::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void CinderExportToImageOption::unsetosType()
{
    osTypeIsSet_ = false;
}

}
}
}
}
}


