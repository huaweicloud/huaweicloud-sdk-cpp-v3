

#include "huaweicloud/ecs/v2/model/ServerFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerFlavor::ServerFlavor()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    disk_ = "";
    diskIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    gpusIsSet_ = false;
    asicAcceleratorsIsSet_ = false;
}

ServerFlavor::~ServerFlavor() = default;

void ServerFlavor::validate()
{
}

web::json::value ServerFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(diskIsSet_) {
        val[utility::conversions::to_string_t("disk")] = ModelBase::toJson(disk_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(gpusIsSet_) {
        val[utility::conversions::to_string_t("gpus")] = ModelBase::toJson(gpus_);
    }
    if(asicAcceleratorsIsSet_) {
        val[utility::conversions::to_string_t("asic_accelerators")] = ModelBase::toJson(asicAccelerators_);
    }

    return val;
}
bool ServerFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpus"));
        if(!fieldValue.is_null())
        {
            std::vector<GpuInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asic_accelerators"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asic_accelerators"));
        if(!fieldValue.is_null())
        {
            std::vector<ASICAcceleratorInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsicAccelerators(refVal);
        }
    }
    return ok;
}


std::string ServerFlavor::getId() const
{
    return id_;
}

void ServerFlavor::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerFlavor::idIsSet() const
{
    return idIsSet_;
}

void ServerFlavor::unsetid()
{
    idIsSet_ = false;
}

std::string ServerFlavor::getName() const
{
    return name_;
}

void ServerFlavor::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServerFlavor::nameIsSet() const
{
    return nameIsSet_;
}

void ServerFlavor::unsetname()
{
    nameIsSet_ = false;
}

std::string ServerFlavor::getDisk() const
{
    return disk_;
}

void ServerFlavor::setDisk(const std::string& value)
{
    disk_ = value;
    diskIsSet_ = true;
}

bool ServerFlavor::diskIsSet() const
{
    return diskIsSet_;
}

void ServerFlavor::unsetdisk()
{
    diskIsSet_ = false;
}

std::string ServerFlavor::getVcpus() const
{
    return vcpus_;
}

void ServerFlavor::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool ServerFlavor::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void ServerFlavor::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string ServerFlavor::getRam() const
{
    return ram_;
}

void ServerFlavor::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ServerFlavor::ramIsSet() const
{
    return ramIsSet_;
}

void ServerFlavor::unsetram()
{
    ramIsSet_ = false;
}

std::vector<GpuInfo>& ServerFlavor::getGpus()
{
    return gpus_;
}

void ServerFlavor::setGpus(const std::vector<GpuInfo>& value)
{
    gpus_ = value;
    gpusIsSet_ = true;
}

bool ServerFlavor::gpusIsSet() const
{
    return gpusIsSet_;
}

void ServerFlavor::unsetgpus()
{
    gpusIsSet_ = false;
}

std::vector<ASICAcceleratorInfo>& ServerFlavor::getAsicAccelerators()
{
    return asicAccelerators_;
}

void ServerFlavor::setAsicAccelerators(const std::vector<ASICAcceleratorInfo>& value)
{
    asicAccelerators_ = value;
    asicAcceleratorsIsSet_ = true;
}

bool ServerFlavor::asicAcceleratorsIsSet() const
{
    return asicAcceleratorsIsSet_;
}

void ServerFlavor::unsetasicAccelerators()
{
    asicAcceleratorsIsSet_ = false;
}

}
}
}
}
}


