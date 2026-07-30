

#include "huaweicloud/modelarts/v1/model/VolumeRes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




VolumeRes::VolumeRes()
{
    capacity_ = 0;
    capacityIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    mountPath_ = "";
    mountPathIsSet_ = false;
    ownership_ = "";
    ownershipIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    readOnly_ = false;
    readOnlyIsSet_ = false;
    dewSecretName_ = "";
    dewSecretNameIsSet_ = false;
    evsSkuCode_ = "";
    evsSkuCodeIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    mountType_ = "";
    mountTypeIsSet_ = false;
}

VolumeRes::~VolumeRes() = default;

void VolumeRes::validate()
{
}

web::json::value VolumeRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(capacityIsSet_) {
        val[utility::conversions::to_string_t("capacity")] = ModelBase::toJson(capacity_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(mountPathIsSet_) {
        val[utility::conversions::to_string_t("mount_path")] = ModelBase::toJson(mountPath_);
    }
    if(ownershipIsSet_) {
        val[utility::conversions::to_string_t("ownership")] = ModelBase::toJson(ownership_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(readOnlyIsSet_) {
        val[utility::conversions::to_string_t("read_only")] = ModelBase::toJson(readOnly_);
    }
    if(dewSecretNameIsSet_) {
        val[utility::conversions::to_string_t("dew_secret_name")] = ModelBase::toJson(dewSecretName_);
    }
    if(evsSkuCodeIsSet_) {
        val[utility::conversions::to_string_t("evs_sku_code")] = ModelBase::toJson(evsSkuCode_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(mountTypeIsSet_) {
        val[utility::conversions::to_string_t("mount_type")] = ModelBase::toJson(mountType_);
    }

    return val;
}
bool VolumeRes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacity"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacity(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("ownership"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownership"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnership(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("evs_sku_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evs_sku_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvsSkuCode(refVal);
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


int32_t VolumeRes::getCapacity() const
{
    return capacity_;
}

void VolumeRes::setCapacity(int32_t value)
{
    capacity_ = value;
    capacityIsSet_ = true;
}

bool VolumeRes::capacityIsSet() const
{
    return capacityIsSet_;
}

void VolumeRes::unsetcapacity()
{
    capacityIsSet_ = false;
}

std::string VolumeRes::getCategory() const
{
    return category_;
}

void VolumeRes::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool VolumeRes::categoryIsSet() const
{
    return categoryIsSet_;
}

void VolumeRes::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string VolumeRes::getMountPath() const
{
    return mountPath_;
}

void VolumeRes::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool VolumeRes::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void VolumeRes::unsetmountPath()
{
    mountPathIsSet_ = false;
}

std::string VolumeRes::getOwnership() const
{
    return ownership_;
}

void VolumeRes::setOwnership(const std::string& value)
{
    ownership_ = value;
    ownershipIsSet_ = true;
}

bool VolumeRes::ownershipIsSet() const
{
    return ownershipIsSet_;
}

void VolumeRes::unsetownership()
{
    ownershipIsSet_ = false;
}

std::string VolumeRes::getStatus() const
{
    return status_;
}

void VolumeRes::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool VolumeRes::statusIsSet() const
{
    return statusIsSet_;
}

void VolumeRes::unsetstatus()
{
    statusIsSet_ = false;
}

std::string VolumeRes::getId() const
{
    return id_;
}

void VolumeRes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VolumeRes::idIsSet() const
{
    return idIsSet_;
}

void VolumeRes::unsetid()
{
    idIsSet_ = false;
}

bool VolumeRes::isReadOnly() const
{
    return readOnly_;
}

void VolumeRes::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool VolumeRes::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void VolumeRes::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

std::string VolumeRes::getDewSecretName() const
{
    return dewSecretName_;
}

void VolumeRes::setDewSecretName(const std::string& value)
{
    dewSecretName_ = value;
    dewSecretNameIsSet_ = true;
}

bool VolumeRes::dewSecretNameIsSet() const
{
    return dewSecretNameIsSet_;
}

void VolumeRes::unsetdewSecretName()
{
    dewSecretNameIsSet_ = false;
}

std::string VolumeRes::getEvsSkuCode() const
{
    return evsSkuCode_;
}

void VolumeRes::setEvsSkuCode(const std::string& value)
{
    evsSkuCode_ = value;
    evsSkuCodeIsSet_ = true;
}

bool VolumeRes::evsSkuCodeIsSet() const
{
    return evsSkuCodeIsSet_;
}

void VolumeRes::unsetevsSkuCode()
{
    evsSkuCodeIsSet_ = false;
}

std::string VolumeRes::getUri() const
{
    return uri_;
}

void VolumeRes::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool VolumeRes::uriIsSet() const
{
    return uriIsSet_;
}

void VolumeRes::unseturi()
{
    uriIsSet_ = false;
}

std::string VolumeRes::getMountType() const
{
    return mountType_;
}

void VolumeRes::setMountType(const std::string& value)
{
    mountType_ = value;
    mountTypeIsSet_ = true;
}

bool VolumeRes::mountTypeIsSet() const
{
    return mountTypeIsSet_;
}

void VolumeRes::unsetmountType()
{
    mountTypeIsSet_ = false;
}

}
}
}
}
}


