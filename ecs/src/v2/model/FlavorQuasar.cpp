

#include "huaweicloud/ecs/v2/model/FlavorQuasar.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




FlavorQuasar::FlavorQuasar()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    vcpus_ = 0;
    vcpusIsSet_ = false;
    ram_ = 0;
    ramIsSet_ = false;
    disk_ = 0;
    diskIsSet_ = false;
    gpusIsSet_ = false;
    asicAcceleratorsIsSet_ = false;
}

FlavorQuasar::~FlavorQuasar() = default;

void FlavorQuasar::validate()
{
}

web::json::value FlavorQuasar::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(diskIsSet_) {
        val[utility::conversions::to_string_t("disk")] = ModelBase::toJson(disk_);
    }
    if(gpusIsSet_) {
        val[utility::conversions::to_string_t("gpus")] = ModelBase::toJson(gpus_);
    }
    if(asicAcceleratorsIsSet_) {
        val[utility::conversions::to_string_t("asic_accelerators")] = ModelBase::toJson(asicAccelerators_);
    }

    return val;
}
bool FlavorQuasar::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisk(refVal);
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


std::string FlavorQuasar::getId() const
{
    return id_;
}

void FlavorQuasar::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FlavorQuasar::idIsSet() const
{
    return idIsSet_;
}

void FlavorQuasar::unsetid()
{
    idIsSet_ = false;
}

std::string FlavorQuasar::getName() const
{
    return name_;
}

void FlavorQuasar::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FlavorQuasar::nameIsSet() const
{
    return nameIsSet_;
}

void FlavorQuasar::unsetname()
{
    nameIsSet_ = false;
}

int32_t FlavorQuasar::getVcpus() const
{
    return vcpus_;
}

void FlavorQuasar::setVcpus(int32_t value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool FlavorQuasar::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void FlavorQuasar::unsetvcpus()
{
    vcpusIsSet_ = false;
}

int32_t FlavorQuasar::getRam() const
{
    return ram_;
}

void FlavorQuasar::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool FlavorQuasar::ramIsSet() const
{
    return ramIsSet_;
}

void FlavorQuasar::unsetram()
{
    ramIsSet_ = false;
}

int32_t FlavorQuasar::getDisk() const
{
    return disk_;
}

void FlavorQuasar::setDisk(int32_t value)
{
    disk_ = value;
    diskIsSet_ = true;
}

bool FlavorQuasar::diskIsSet() const
{
    return diskIsSet_;
}

void FlavorQuasar::unsetdisk()
{
    diskIsSet_ = false;
}

std::vector<GpuInfo>& FlavorQuasar::getGpus()
{
    return gpus_;
}

void FlavorQuasar::setGpus(const std::vector<GpuInfo>& value)
{
    gpus_ = value;
    gpusIsSet_ = true;
}

bool FlavorQuasar::gpusIsSet() const
{
    return gpusIsSet_;
}

void FlavorQuasar::unsetgpus()
{
    gpusIsSet_ = false;
}

std::vector<ASICAcceleratorInfo>& FlavorQuasar::getAsicAccelerators()
{
    return asicAccelerators_;
}

void FlavorQuasar::setAsicAccelerators(const std::vector<ASICAcceleratorInfo>& value)
{
    asicAccelerators_ = value;
    asicAcceleratorsIsSet_ = true;
}

bool FlavorQuasar::asicAcceleratorsIsSet() const
{
    return asicAcceleratorsIsSet_;
}

void FlavorQuasar::unsetasicAccelerators()
{
    asicAcceleratorsIsSet_ = false;
}

}
}
}
}
}


