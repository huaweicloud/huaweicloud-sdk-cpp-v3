

#include "huaweicloud/modelarts/v1/model/VolumeMountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




VolumeMountRequest::VolumeMountRequest()
{
    category_ = "";
    categoryIsSet_ = false;
    ownership_ = "";
    ownershipIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    mountPath_ = "";
    mountPathIsSet_ = false;
    readOnly_ = false;
    readOnlyIsSet_ = false;
    dewSecretName_ = "";
    dewSecretNameIsSet_ = false;
    capacity_ = 0;
    capacityIsSet_ = false;
}

VolumeMountRequest::~VolumeMountRequest() = default;

void VolumeMountRequest::validate()
{
}

web::json::value VolumeMountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(ownershipIsSet_) {
        val[utility::conversions::to_string_t("ownership")] = ModelBase::toJson(ownership_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(mountPathIsSet_) {
        val[utility::conversions::to_string_t("mount_path")] = ModelBase::toJson(mountPath_);
    }
    if(readOnlyIsSet_) {
        val[utility::conversions::to_string_t("read_only")] = ModelBase::toJson(readOnly_);
    }
    if(dewSecretNameIsSet_) {
        val[utility::conversions::to_string_t("dew_secret_name")] = ModelBase::toJson(dewSecretName_);
    }
    if(capacityIsSet_) {
        val[utility::conversions::to_string_t("capacity")] = ModelBase::toJson(capacity_);
    }

    return val;
}
bool VolumeMountRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ownership"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownership"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnership(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("read_only"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dew_secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dew_secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDewSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacity"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacity(refVal);
        }
    }
    return ok;
}


std::string VolumeMountRequest::getCategory() const
{
    return category_;
}

void VolumeMountRequest::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool VolumeMountRequest::categoryIsSet() const
{
    return categoryIsSet_;
}

void VolumeMountRequest::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string VolumeMountRequest::getOwnership() const
{
    return ownership_;
}

void VolumeMountRequest::setOwnership(const std::string& value)
{
    ownership_ = value;
    ownershipIsSet_ = true;
}

bool VolumeMountRequest::ownershipIsSet() const
{
    return ownershipIsSet_;
}

void VolumeMountRequest::unsetownership()
{
    ownershipIsSet_ = false;
}

std::string VolumeMountRequest::getUri() const
{
    return uri_;
}

void VolumeMountRequest::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool VolumeMountRequest::uriIsSet() const
{
    return uriIsSet_;
}

void VolumeMountRequest::unseturi()
{
    uriIsSet_ = false;
}

std::string VolumeMountRequest::getId() const
{
    return id_;
}

void VolumeMountRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VolumeMountRequest::idIsSet() const
{
    return idIsSet_;
}

void VolumeMountRequest::unsetid()
{
    idIsSet_ = false;
}

std::string VolumeMountRequest::getMountPath() const
{
    return mountPath_;
}

void VolumeMountRequest::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool VolumeMountRequest::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void VolumeMountRequest::unsetmountPath()
{
    mountPathIsSet_ = false;
}

bool VolumeMountRequest::isReadOnly() const
{
    return readOnly_;
}

void VolumeMountRequest::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool VolumeMountRequest::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void VolumeMountRequest::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

std::string VolumeMountRequest::getDewSecretName() const
{
    return dewSecretName_;
}

void VolumeMountRequest::setDewSecretName(const std::string& value)
{
    dewSecretName_ = value;
    dewSecretNameIsSet_ = true;
}

bool VolumeMountRequest::dewSecretNameIsSet() const
{
    return dewSecretNameIsSet_;
}

void VolumeMountRequest::unsetdewSecretName()
{
    dewSecretNameIsSet_ = false;
}

int32_t VolumeMountRequest::getCapacity() const
{
    return capacity_;
}

void VolumeMountRequest::setCapacity(int32_t value)
{
    capacity_ = value;
    capacityIsSet_ = true;
}

bool VolumeMountRequest::capacityIsSet() const
{
    return capacityIsSet_;
}

void VolumeMountRequest::unsetcapacity()
{
    capacityIsSet_ = false;
}

}
}
}
}
}


