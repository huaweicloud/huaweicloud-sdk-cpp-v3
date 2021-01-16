

#include "huaweicloud/ecs/v2/model/NovaServerFlavor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaServerFlavor::NovaServerFlavor()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    vcpus_ = 0;
    vcpusIsSet_ = false;
    ram_ = 0;
    ramIsSet_ = false;
    disk_ = 0;
    diskIsSet_ = false;
    ephemeral_ = 0;
    ephemeralIsSet_ = false;
    swap_ = 0;
    swapIsSet_ = false;
    originalName_ = "";
    originalNameIsSet_ = false;
    extraSpecsIsSet_ = false;
}

NovaServerFlavor::~NovaServerFlavor() = default;

void NovaServerFlavor::validate()
{
}

web::json::value NovaServerFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
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
    if(ephemeralIsSet_) {
        val[utility::conversions::to_string_t("ephemeral")] = ModelBase::toJson(ephemeral_);
    }
    if(swapIsSet_) {
        val[utility::conversions::to_string_t("swap")] = ModelBase::toJson(swap_);
    }
    if(originalNameIsSet_) {
        val[utility::conversions::to_string_t("original_name")] = ModelBase::toJson(originalName_);
    }
    if(extraSpecsIsSet_) {
        val[utility::conversions::to_string_t("extra_specs")] = ModelBase::toJson(extraSpecs_);
    }

    return val;
}

bool NovaServerFlavor::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ephemeral"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ephemeral"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEphemeral(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swap"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("original_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("original_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalName(refVal);
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


std::string NovaServerFlavor::getId() const
{
    return id_;
}

void NovaServerFlavor::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaServerFlavor::idIsSet() const
{
    return idIsSet_;
}

void NovaServerFlavor::unsetid()
{
    idIsSet_ = false;
}

std::vector<NovaLink>& NovaServerFlavor::getLinks()
{
    return links_;
}

void NovaServerFlavor::setLinks(const std::vector<NovaLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool NovaServerFlavor::linksIsSet() const
{
    return linksIsSet_;
}

void NovaServerFlavor::unsetlinks()
{
    linksIsSet_ = false;
}

int32_t NovaServerFlavor::getVcpus() const
{
    return vcpus_;
}

void NovaServerFlavor::setVcpus(int32_t value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool NovaServerFlavor::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void NovaServerFlavor::unsetvcpus()
{
    vcpusIsSet_ = false;
}

int32_t NovaServerFlavor::getRam() const
{
    return ram_;
}

void NovaServerFlavor::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool NovaServerFlavor::ramIsSet() const
{
    return ramIsSet_;
}

void NovaServerFlavor::unsetram()
{
    ramIsSet_ = false;
}

int32_t NovaServerFlavor::getDisk() const
{
    return disk_;
}

void NovaServerFlavor::setDisk(int32_t value)
{
    disk_ = value;
    diskIsSet_ = true;
}

bool NovaServerFlavor::diskIsSet() const
{
    return diskIsSet_;
}

void NovaServerFlavor::unsetdisk()
{
    diskIsSet_ = false;
}

int32_t NovaServerFlavor::getEphemeral() const
{
    return ephemeral_;
}

void NovaServerFlavor::setEphemeral(int32_t value)
{
    ephemeral_ = value;
    ephemeralIsSet_ = true;
}

bool NovaServerFlavor::ephemeralIsSet() const
{
    return ephemeralIsSet_;
}

void NovaServerFlavor::unsetephemeral()
{
    ephemeralIsSet_ = false;
}

int32_t NovaServerFlavor::getSwap() const
{
    return swap_;
}

void NovaServerFlavor::setSwap(int32_t value)
{
    swap_ = value;
    swapIsSet_ = true;
}

bool NovaServerFlavor::swapIsSet() const
{
    return swapIsSet_;
}

void NovaServerFlavor::unsetswap()
{
    swapIsSet_ = false;
}

std::string NovaServerFlavor::getOriginalName() const
{
    return originalName_;
}

void NovaServerFlavor::setOriginalName(const std::string& value)
{
    originalName_ = value;
    originalNameIsSet_ = true;
}

bool NovaServerFlavor::originalNameIsSet() const
{
    return originalNameIsSet_;
}

void NovaServerFlavor::unsetoriginalName()
{
    originalNameIsSet_ = false;
}

std::map<std::string, std::string>& NovaServerFlavor::getExtraSpecs()
{
    return extraSpecs_;
}

void NovaServerFlavor::setExtraSpecs(const std::map<std::string, std::string>& value)
{
    extraSpecs_ = value;
    extraSpecsIsSet_ = true;
}

bool NovaServerFlavor::extraSpecsIsSet() const
{
    return extraSpecsIsSet_;
}

void NovaServerFlavor::unsetextraSpecs()
{
    extraSpecsIsSet_ = false;
}

}
}
}
}
}


