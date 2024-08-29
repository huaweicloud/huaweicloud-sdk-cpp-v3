

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
    rootGb_ = 0;
    rootGbIsSet_ = false;
    ephemeralGb_ = 0;
    ephemeralGbIsSet_ = false;
    extraSpecsIsSet_ = false;
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
    if(rootGbIsSet_) {
        val[utility::conversions::to_string_t("root_gb")] = ModelBase::toJson(rootGb_);
    }
    if(ephemeralGbIsSet_) {
        val[utility::conversions::to_string_t("ephemeral_gb")] = ModelBase::toJson(ephemeralGb_);
    }
    if(extraSpecsIsSet_) {
        val[utility::conversions::to_string_t("extra_specs")] = ModelBase::toJson(extraSpecs_);
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
    if(val.has_field(utility::conversions::to_string_t("root_gb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_gb"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootGb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ephemeral_gb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ephemeral_gb"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEphemeralGb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_specs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_specs"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraSpecs(refVal);
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

int32_t FlavorQuasar::getRootGb() const
{
    return rootGb_;
}

void FlavorQuasar::setRootGb(int32_t value)
{
    rootGb_ = value;
    rootGbIsSet_ = true;
}

bool FlavorQuasar::rootGbIsSet() const
{
    return rootGbIsSet_;
}

void FlavorQuasar::unsetrootGb()
{
    rootGbIsSet_ = false;
}

int32_t FlavorQuasar::getEphemeralGb() const
{
    return ephemeralGb_;
}

void FlavorQuasar::setEphemeralGb(int32_t value)
{
    ephemeralGb_ = value;
    ephemeralGbIsSet_ = true;
}

bool FlavorQuasar::ephemeralGbIsSet() const
{
    return ephemeralGbIsSet_;
}

void FlavorQuasar::unsetephemeralGb()
{
    ephemeralGbIsSet_ = false;
}

std::map<std::string, std::string>& FlavorQuasar::getExtraSpecs()
{
    return extraSpecs_;
}

void FlavorQuasar::setExtraSpecs(const std::map<std::string, std::string>& value)
{
    extraSpecs_ = value;
    extraSpecsIsSet_ = true;
}

bool FlavorQuasar::extraSpecsIsSet() const
{
    return extraSpecsIsSet_;
}

void FlavorQuasar::unsetextraSpecs()
{
    extraSpecsIsSet_ = false;
}

}
}
}
}
}


