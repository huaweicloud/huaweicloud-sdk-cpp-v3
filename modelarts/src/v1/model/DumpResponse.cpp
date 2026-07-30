

#include "huaweicloud/modelarts/v1/model/DumpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DumpResponse::DumpResponse()
{
    source_ = "";
    sourceIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    mountPath_ = "";
    mountPathIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

DumpResponse::~DumpResponse() = default;

void DumpResponse::validate()
{
}

web::json::value DumpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(mountPathIsSet_) {
        val[utility::conversions::to_string_t("mount_path")] = ModelBase::toJson(mountPath_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool DumpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string DumpResponse::getSource() const
{
    return source_;
}

void DumpResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool DumpResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void DumpResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string DumpResponse::getAddress() const
{
    return address_;
}

void DumpResponse::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool DumpResponse::addressIsSet() const
{
    return addressIsSet_;
}

void DumpResponse::unsetaddress()
{
    addressIsSet_ = false;
}

std::string DumpResponse::getMountPath() const
{
    return mountPath_;
}

void DumpResponse::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool DumpResponse::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void DumpResponse::unsetmountPath()
{
    mountPathIsSet_ = false;
}

std::string DumpResponse::getType() const
{
    return type_;
}

void DumpResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DumpResponse::typeIsSet() const
{
    return typeIsSet_;
}

void DumpResponse::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


