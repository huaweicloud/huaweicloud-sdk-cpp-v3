

#include "huaweicloud/ecs/v2/model/Flavor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




Flavor::Flavor()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = 0;
    ramIsSet_ = false;
    disk_ = "";
    diskIsSet_ = false;
    swap_ = "";
    swapIsSet_ = false;
    oSFLVEXTDATAephemeral_ = 0;
    oSFLVEXTDATAephemeralIsSet_ = false;
    oSFLVDISABLEDdisabled_ = false;
    oSFLVDISABLEDdisabledIsSet_ = false;
    rxtxFactor_ = 0.0f;
    rxtxFactorIsSet_ = false;
    rxtxQuota_ = "";
    rxtxQuotaIsSet_ = false;
    rxtxCap_ = "";
    rxtxCapIsSet_ = false;
    osFlavorAccessisPublic_ = false;
    osFlavorAccessisPublicIsSet_ = false;
    linksIsSet_ = false;
    osExtraSpecsIsSet_ = false;
    attachableQuantityIsSet_ = false;
}

Flavor::~Flavor() = default;

void Flavor::validate()
{
}

web::json::value Flavor::toJson() const
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
    if(swapIsSet_) {
        val[utility::conversions::to_string_t("swap")] = ModelBase::toJson(swap_);
    }
    if(oSFLVEXTDATAephemeralIsSet_) {
        val[utility::conversions::to_string_t("OS-FLV-EXT-DATA:ephemeral")] = ModelBase::toJson(oSFLVEXTDATAephemeral_);
    }
    if(oSFLVDISABLEDdisabledIsSet_) {
        val[utility::conversions::to_string_t("OS-FLV-DISABLED:disabled")] = ModelBase::toJson(oSFLVDISABLEDdisabled_);
    }
    if(rxtxFactorIsSet_) {
        val[utility::conversions::to_string_t("rxtx_factor")] = ModelBase::toJson(rxtxFactor_);
    }
    if(rxtxQuotaIsSet_) {
        val[utility::conversions::to_string_t("rxtx_quota")] = ModelBase::toJson(rxtxQuota_);
    }
    if(rxtxCapIsSet_) {
        val[utility::conversions::to_string_t("rxtx_cap")] = ModelBase::toJson(rxtxCap_);
    }
    if(osFlavorAccessisPublicIsSet_) {
        val[utility::conversions::to_string_t("os-flavor-access:is_public")] = ModelBase::toJson(osFlavorAccessisPublic_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(osExtraSpecsIsSet_) {
        val[utility::conversions::to_string_t("os_extra_specs")] = ModelBase::toJson(osExtraSpecs_);
    }
    if(attachableQuantityIsSet_) {
        val[utility::conversions::to_string_t("attachableQuantity")] = ModelBase::toJson(attachableQuantity_);
    }

    return val;
}

bool Flavor::fromJson(const web::json::value& val)
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
            std::string refVal;
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swap"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-FLV-EXT-DATA:ephemeral"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-FLV-EXT-DATA:ephemeral"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSFLVEXTDATAephemeral(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-FLV-DISABLED:disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-FLV-DISABLED:disabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSFLVDISABLEDdisabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rxtx_factor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rxtx_factor"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRxtxFactor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rxtx_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rxtx_quota"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRxtxQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rxtx_cap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rxtx_cap"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRxtxCap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-flavor-access:is_public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-flavor-access:is_public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsFlavorAccessisPublic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<FlavorLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_extra_specs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_extra_specs"));
        if(!fieldValue.is_null())
        {
            FlavorExtraSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsExtraSpecs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachableQuantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachableQuantity"));
        if(!fieldValue.is_null())
        {
            ServerAttachableQuantity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachableQuantity(refVal);
        }
    }
    return ok;
}

std::string Flavor::getId() const
{
    return id_;
}

void Flavor::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Flavor::idIsSet() const
{
    return idIsSet_;
}

void Flavor::unsetid()
{
    idIsSet_ = false;
}

std::string Flavor::getName() const
{
    return name_;
}

void Flavor::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Flavor::nameIsSet() const
{
    return nameIsSet_;
}

void Flavor::unsetname()
{
    nameIsSet_ = false;
}

std::string Flavor::getVcpus() const
{
    return vcpus_;
}

void Flavor::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool Flavor::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void Flavor::unsetvcpus()
{
    vcpusIsSet_ = false;
}

int32_t Flavor::getRam() const
{
    return ram_;
}

void Flavor::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool Flavor::ramIsSet() const
{
    return ramIsSet_;
}

void Flavor::unsetram()
{
    ramIsSet_ = false;
}

std::string Flavor::getDisk() const
{
    return disk_;
}

void Flavor::setDisk(const std::string& value)
{
    disk_ = value;
    diskIsSet_ = true;
}

bool Flavor::diskIsSet() const
{
    return diskIsSet_;
}

void Flavor::unsetdisk()
{
    diskIsSet_ = false;
}

std::string Flavor::getSwap() const
{
    return swap_;
}

void Flavor::setSwap(const std::string& value)
{
    swap_ = value;
    swapIsSet_ = true;
}

bool Flavor::swapIsSet() const
{
    return swapIsSet_;
}

void Flavor::unsetswap()
{
    swapIsSet_ = false;
}

int32_t Flavor::getOSFLVEXTDATAephemeral() const
{
    return oSFLVEXTDATAephemeral_;
}

void Flavor::setOSFLVEXTDATAephemeral(int32_t value)
{
    oSFLVEXTDATAephemeral_ = value;
    oSFLVEXTDATAephemeralIsSet_ = true;
}

bool Flavor::oSFLVEXTDATAephemeralIsSet() const
{
    return oSFLVEXTDATAephemeralIsSet_;
}

void Flavor::unsetoSFLVEXTDATAephemeral()
{
    oSFLVEXTDATAephemeralIsSet_ = false;
}

bool Flavor::isOSFLVDISABLEDdisabled() const
{
    return oSFLVDISABLEDdisabled_;
}

void Flavor::setOSFLVDISABLEDdisabled(bool value)
{
    oSFLVDISABLEDdisabled_ = value;
    oSFLVDISABLEDdisabledIsSet_ = true;
}

bool Flavor::oSFLVDISABLEDdisabledIsSet() const
{
    return oSFLVDISABLEDdisabledIsSet_;
}

void Flavor::unsetoSFLVDISABLEDdisabled()
{
    oSFLVDISABLEDdisabledIsSet_ = false;
}

float Flavor::getRxtxFactor() const
{
    return rxtxFactor_;
}

void Flavor::setRxtxFactor(float value)
{
    rxtxFactor_ = value;
    rxtxFactorIsSet_ = true;
}

bool Flavor::rxtxFactorIsSet() const
{
    return rxtxFactorIsSet_;
}

void Flavor::unsetrxtxFactor()
{
    rxtxFactorIsSet_ = false;
}

std::string Flavor::getRxtxQuota() const
{
    return rxtxQuota_;
}

void Flavor::setRxtxQuota(const std::string& value)
{
    rxtxQuota_ = value;
    rxtxQuotaIsSet_ = true;
}

bool Flavor::rxtxQuotaIsSet() const
{
    return rxtxQuotaIsSet_;
}

void Flavor::unsetrxtxQuota()
{
    rxtxQuotaIsSet_ = false;
}

std::string Flavor::getRxtxCap() const
{
    return rxtxCap_;
}

void Flavor::setRxtxCap(const std::string& value)
{
    rxtxCap_ = value;
    rxtxCapIsSet_ = true;
}

bool Flavor::rxtxCapIsSet() const
{
    return rxtxCapIsSet_;
}

void Flavor::unsetrxtxCap()
{
    rxtxCapIsSet_ = false;
}

bool Flavor::isOsFlavorAccessisPublic() const
{
    return osFlavorAccessisPublic_;
}

void Flavor::setOsFlavorAccessisPublic(bool value)
{
    osFlavorAccessisPublic_ = value;
    osFlavorAccessisPublicIsSet_ = true;
}

bool Flavor::osFlavorAccessisPublicIsSet() const
{
    return osFlavorAccessisPublicIsSet_;
}

void Flavor::unsetosFlavorAccessisPublic()
{
    osFlavorAccessisPublicIsSet_ = false;
}

std::vector<FlavorLink>& Flavor::getLinks()
{
    return links_;
}

void Flavor::setLinks(const std::vector<FlavorLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool Flavor::linksIsSet() const
{
    return linksIsSet_;
}

void Flavor::unsetlinks()
{
    linksIsSet_ = false;
}

FlavorExtraSpec Flavor::getOsExtraSpecs() const
{
    return osExtraSpecs_;
}

void Flavor::setOsExtraSpecs(const FlavorExtraSpec& value)
{
    osExtraSpecs_ = value;
    osExtraSpecsIsSet_ = true;
}

bool Flavor::osExtraSpecsIsSet() const
{
    return osExtraSpecsIsSet_;
}

void Flavor::unsetosExtraSpecs()
{
    osExtraSpecsIsSet_ = false;
}

ServerAttachableQuantity Flavor::getAttachableQuantity() const
{
    return attachableQuantity_;
}

void Flavor::setAttachableQuantity(const ServerAttachableQuantity& value)
{
    attachableQuantity_ = value;
    attachableQuantityIsSet_ = true;
}

bool Flavor::attachableQuantityIsSet() const
{
    return attachableQuantityIsSet_;
}

void Flavor::unsetattachableQuantity()
{
    attachableQuantityIsSet_ = false;
}

}
}
}
}
}


