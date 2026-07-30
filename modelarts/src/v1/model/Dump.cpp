

#include "huaweicloud/modelarts/v1/model/Dump.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Dump::Dump()
{
    source_ = "";
    sourceIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    mountPath_ = "";
    mountPathIsSet_ = false;
}

Dump::~Dump() = default;

void Dump::validate()
{
}

web::json::value Dump::toJson() const
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

    return val;
}
bool Dump::fromJson(const web::json::value& val)
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
    return ok;
}


std::string Dump::getSource() const
{
    return source_;
}

void Dump::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool Dump::sourceIsSet() const
{
    return sourceIsSet_;
}

void Dump::unsetsource()
{
    sourceIsSet_ = false;
}

std::string Dump::getAddress() const
{
    return address_;
}

void Dump::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool Dump::addressIsSet() const
{
    return addressIsSet_;
}

void Dump::unsetaddress()
{
    addressIsSet_ = false;
}

std::string Dump::getMountPath() const
{
    return mountPath_;
}

void Dump::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool Dump::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void Dump::unsetmountPath()
{
    mountPathIsSet_ = false;
}

}
}
}
}
}


