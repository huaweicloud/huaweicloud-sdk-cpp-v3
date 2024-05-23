

#include "huaweicloud/ecs/v2/model/ListResizeFlavorsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListResizeFlavorsResult::ListResizeFlavorsResult()
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
    oSFLVEXTDATAEphemeral_ = 0;
    oSFLVEXTDATAEphemeralIsSet_ = false;
    oSFLVDISABLEDDisabled_ = false;
    oSFLVDISABLEDDisabledIsSet_ = false;
    rxtxFactor_ = 0.0f;
    rxtxFactorIsSet_ = false;
    rxtxQuota_ = "";
    rxtxQuotaIsSet_ = false;
    rxtxCap_ = "";
    rxtxCapIsSet_ = false;
    osFlavorAccessIsPublic_ = false;
    osFlavorAccessIsPublicIsSet_ = false;
    linksIsSet_ = false;
    extraSpecsIsSet_ = false;
    instanceQuotaIsSet_ = false;
}

ListResizeFlavorsResult::~ListResizeFlavorsResult() = default;

void ListResizeFlavorsResult::validate()
{
}

web::json::value ListResizeFlavorsResult::toJson() const
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
    if(oSFLVEXTDATAEphemeralIsSet_) {
        val[utility::conversions::to_string_t("OS-FLV-EXT-DATA:ephemeral")] = ModelBase::toJson(oSFLVEXTDATAEphemeral_);
    }
    if(oSFLVDISABLEDDisabledIsSet_) {
        val[utility::conversions::to_string_t("OS-FLV-DISABLED:disabled")] = ModelBase::toJson(oSFLVDISABLEDDisabled_);
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
    if(osFlavorAccessIsPublicIsSet_) {
        val[utility::conversions::to_string_t("os-flavor-access:is_public")] = ModelBase::toJson(osFlavorAccessIsPublic_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(extraSpecsIsSet_) {
        val[utility::conversions::to_string_t("extra_specs")] = ModelBase::toJson(extraSpecs_);
    }
    if(instanceQuotaIsSet_) {
        val[utility::conversions::to_string_t("instance_quota")] = ModelBase::toJson(instanceQuota_);
    }

    return val;
}
bool ListResizeFlavorsResult::fromJson(const web::json::value& val)
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
            setOSFLVEXTDATAEphemeral(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-FLV-DISABLED:disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-FLV-DISABLED:disabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSFLVDISABLEDDisabled(refVal);
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
            setOsFlavorAccessIsPublic(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("extra_specs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_specs"));
        if(!fieldValue.is_null())
        {
            FlavorExtraSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraSpecs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_quota"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceQuota(refVal);
        }
    }
    return ok;
}


std::string ListResizeFlavorsResult::getId() const
{
    return id_;
}

void ListResizeFlavorsResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListResizeFlavorsResult::idIsSet() const
{
    return idIsSet_;
}

void ListResizeFlavorsResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListResizeFlavorsResult::getName() const
{
    return name_;
}

void ListResizeFlavorsResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListResizeFlavorsResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListResizeFlavorsResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListResizeFlavorsResult::getVcpus() const
{
    return vcpus_;
}

void ListResizeFlavorsResult::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool ListResizeFlavorsResult::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void ListResizeFlavorsResult::unsetvcpus()
{
    vcpusIsSet_ = false;
}

int32_t ListResizeFlavorsResult::getRam() const
{
    return ram_;
}

void ListResizeFlavorsResult::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ListResizeFlavorsResult::ramIsSet() const
{
    return ramIsSet_;
}

void ListResizeFlavorsResult::unsetram()
{
    ramIsSet_ = false;
}

std::string ListResizeFlavorsResult::getDisk() const
{
    return disk_;
}

void ListResizeFlavorsResult::setDisk(const std::string& value)
{
    disk_ = value;
    diskIsSet_ = true;
}

bool ListResizeFlavorsResult::diskIsSet() const
{
    return diskIsSet_;
}

void ListResizeFlavorsResult::unsetdisk()
{
    diskIsSet_ = false;
}

std::string ListResizeFlavorsResult::getSwap() const
{
    return swap_;
}

void ListResizeFlavorsResult::setSwap(const std::string& value)
{
    swap_ = value;
    swapIsSet_ = true;
}

bool ListResizeFlavorsResult::swapIsSet() const
{
    return swapIsSet_;
}

void ListResizeFlavorsResult::unsetswap()
{
    swapIsSet_ = false;
}

int32_t ListResizeFlavorsResult::getOSFLVEXTDATAEphemeral() const
{
    return oSFLVEXTDATAEphemeral_;
}

void ListResizeFlavorsResult::setOSFLVEXTDATAEphemeral(int32_t value)
{
    oSFLVEXTDATAEphemeral_ = value;
    oSFLVEXTDATAEphemeralIsSet_ = true;
}

bool ListResizeFlavorsResult::oSFLVEXTDATAEphemeralIsSet() const
{
    return oSFLVEXTDATAEphemeralIsSet_;
}

void ListResizeFlavorsResult::unsetoSFLVEXTDATAEphemeral()
{
    oSFLVEXTDATAEphemeralIsSet_ = false;
}

bool ListResizeFlavorsResult::isOSFLVDISABLEDDisabled() const
{
    return oSFLVDISABLEDDisabled_;
}

void ListResizeFlavorsResult::setOSFLVDISABLEDDisabled(bool value)
{
    oSFLVDISABLEDDisabled_ = value;
    oSFLVDISABLEDDisabledIsSet_ = true;
}

bool ListResizeFlavorsResult::oSFLVDISABLEDDisabledIsSet() const
{
    return oSFLVDISABLEDDisabledIsSet_;
}

void ListResizeFlavorsResult::unsetoSFLVDISABLEDDisabled()
{
    oSFLVDISABLEDDisabledIsSet_ = false;
}

float ListResizeFlavorsResult::getRxtxFactor() const
{
    return rxtxFactor_;
}

void ListResizeFlavorsResult::setRxtxFactor(float value)
{
    rxtxFactor_ = value;
    rxtxFactorIsSet_ = true;
}

bool ListResizeFlavorsResult::rxtxFactorIsSet() const
{
    return rxtxFactorIsSet_;
}

void ListResizeFlavorsResult::unsetrxtxFactor()
{
    rxtxFactorIsSet_ = false;
}

std::string ListResizeFlavorsResult::getRxtxQuota() const
{
    return rxtxQuota_;
}

void ListResizeFlavorsResult::setRxtxQuota(const std::string& value)
{
    rxtxQuota_ = value;
    rxtxQuotaIsSet_ = true;
}

bool ListResizeFlavorsResult::rxtxQuotaIsSet() const
{
    return rxtxQuotaIsSet_;
}

void ListResizeFlavorsResult::unsetrxtxQuota()
{
    rxtxQuotaIsSet_ = false;
}

std::string ListResizeFlavorsResult::getRxtxCap() const
{
    return rxtxCap_;
}

void ListResizeFlavorsResult::setRxtxCap(const std::string& value)
{
    rxtxCap_ = value;
    rxtxCapIsSet_ = true;
}

bool ListResizeFlavorsResult::rxtxCapIsSet() const
{
    return rxtxCapIsSet_;
}

void ListResizeFlavorsResult::unsetrxtxCap()
{
    rxtxCapIsSet_ = false;
}

bool ListResizeFlavorsResult::isOsFlavorAccessIsPublic() const
{
    return osFlavorAccessIsPublic_;
}

void ListResizeFlavorsResult::setOsFlavorAccessIsPublic(bool value)
{
    osFlavorAccessIsPublic_ = value;
    osFlavorAccessIsPublicIsSet_ = true;
}

bool ListResizeFlavorsResult::osFlavorAccessIsPublicIsSet() const
{
    return osFlavorAccessIsPublicIsSet_;
}

void ListResizeFlavorsResult::unsetosFlavorAccessIsPublic()
{
    osFlavorAccessIsPublicIsSet_ = false;
}

std::vector<FlavorLink>& ListResizeFlavorsResult::getLinks()
{
    return links_;
}

void ListResizeFlavorsResult::setLinks(const std::vector<FlavorLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ListResizeFlavorsResult::linksIsSet() const
{
    return linksIsSet_;
}

void ListResizeFlavorsResult::unsetlinks()
{
    linksIsSet_ = false;
}

FlavorExtraSpec ListResizeFlavorsResult::getExtraSpecs() const
{
    return extraSpecs_;
}

void ListResizeFlavorsResult::setExtraSpecs(const FlavorExtraSpec& value)
{
    extraSpecs_ = value;
    extraSpecsIsSet_ = true;
}

bool ListResizeFlavorsResult::extraSpecsIsSet() const
{
    return extraSpecsIsSet_;
}

void ListResizeFlavorsResult::unsetextraSpecs()
{
    extraSpecsIsSet_ = false;
}

Object ListResizeFlavorsResult::getInstanceQuota() const
{
    return instanceQuota_;
}

void ListResizeFlavorsResult::setInstanceQuota(const Object& value)
{
    instanceQuota_ = value;
    instanceQuotaIsSet_ = true;
}

bool ListResizeFlavorsResult::instanceQuotaIsSet() const
{
    return instanceQuotaIsSet_;
}

void ListResizeFlavorsResult::unsetinstanceQuota()
{
    instanceQuotaIsSet_ = false;
}

}
}
}
}
}


