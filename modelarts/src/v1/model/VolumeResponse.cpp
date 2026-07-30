

#include "huaweicloud/modelarts/v1/model/VolumeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




VolumeResponse::VolumeResponse()
{
    category_ = "";
    categoryIsSet_ = false;
    mountPath_ = "";
    mountPathIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    mountType_ = "";
    mountTypeIsSet_ = false;
}

VolumeResponse::~VolumeResponse() = default;

void VolumeResponse::validate()
{
}

web::json::value VolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(mountPathIsSet_) {
        val[utility::conversions::to_string_t("mount_path")] = ModelBase::toJson(mountPath_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(mountTypeIsSet_) {
        val[utility::conversions::to_string_t("mount_type")] = ModelBase::toJson(mountType_);
    }

    return val;
}
bool VolumeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mount_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mount_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountType(refVal);
        }
    }
    return ok;
}


std::string VolumeResponse::getCategory() const
{
    return category_;
}

void VolumeResponse::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool VolumeResponse::categoryIsSet() const
{
    return categoryIsSet_;
}

void VolumeResponse::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string VolumeResponse::getMountPath() const
{
    return mountPath_;
}

void VolumeResponse::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool VolumeResponse::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void VolumeResponse::unsetmountPath()
{
    mountPathIsSet_ = false;
}

std::string VolumeResponse::getUrl() const
{
    return url_;
}

void VolumeResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool VolumeResponse::urlIsSet() const
{
    return urlIsSet_;
}

void VolumeResponse::unseturl()
{
    urlIsSet_ = false;
}

std::string VolumeResponse::getStatus() const
{
    return status_;
}

void VolumeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool VolumeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void VolumeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string VolumeResponse::getMountType() const
{
    return mountType_;
}

void VolumeResponse::setMountType(const std::string& value)
{
    mountType_ = value;
    mountTypeIsSet_ = true;
}

bool VolumeResponse::mountTypeIsSet() const
{
    return mountTypeIsSet_;
}

void VolumeResponse::unsetmountType()
{
    mountTypeIsSet_ = false;
}

}
}
}
}
}


