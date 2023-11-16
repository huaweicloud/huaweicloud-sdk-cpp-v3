

#include "huaweicloud/aad/v1/model/PopPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




PopPolicy::PopPolicy()
{
    blockLocationIsSet_ = false;
    blockProtocolIsSet_ = false;
    bwListIsSet_ = false;
    connectionProtection_ = false;
    connectionProtectionIsSet_ = false;
    connectionProtectionListIsSet_ = false;
    fingerprintCount_ = 0;
    fingerprintCountIsSet_ = false;
    portBlockCount_ = 0;
    portBlockCountIsSet_ = false;
    watermarkCount_ = 0;
    watermarkCountIsSet_ = false;
    ifExistTraffic_ = false;
    ifExistTrafficIsSet_ = false;
    pop_ = "";
    popIsSet_ = false;
}

PopPolicy::~PopPolicy() = default;

void PopPolicy::validate()
{
}

web::json::value PopPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blockLocationIsSet_) {
        val[utility::conversions::to_string_t("block_location")] = ModelBase::toJson(blockLocation_);
    }
    if(blockProtocolIsSet_) {
        val[utility::conversions::to_string_t("block_protocol")] = ModelBase::toJson(blockProtocol_);
    }
    if(bwListIsSet_) {
        val[utility::conversions::to_string_t("bw_list")] = ModelBase::toJson(bwList_);
    }
    if(connectionProtectionIsSet_) {
        val[utility::conversions::to_string_t("connection_protection")] = ModelBase::toJson(connectionProtection_);
    }
    if(connectionProtectionListIsSet_) {
        val[utility::conversions::to_string_t("connection_protection_list")] = ModelBase::toJson(connectionProtectionList_);
    }
    if(fingerprintCountIsSet_) {
        val[utility::conversions::to_string_t("fingerprint_count")] = ModelBase::toJson(fingerprintCount_);
    }
    if(portBlockCountIsSet_) {
        val[utility::conversions::to_string_t("port_block_count")] = ModelBase::toJson(portBlockCount_);
    }
    if(watermarkCountIsSet_) {
        val[utility::conversions::to_string_t("watermark_count")] = ModelBase::toJson(watermarkCount_);
    }
    if(ifExistTrafficIsSet_) {
        val[utility::conversions::to_string_t("if_exist_traffic")] = ModelBase::toJson(ifExistTraffic_);
    }
    if(popIsSet_) {
        val[utility::conversions::to_string_t("pop")] = ModelBase::toJson(pop_);
    }

    return val;
}
bool PopPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("block_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_protocol"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bw_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bw_list"));
        if(!fieldValue.is_null())
        {
            Bw refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBwList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_protection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_protection"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionProtection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_protection_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_protection_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionProtectionList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fingerprint_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprintCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_block_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_block_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortBlockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("watermark_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("watermark_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWatermarkCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("if_exist_traffic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("if_exist_traffic"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIfExistTraffic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pop"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPop(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& PopPolicy::getBlockLocation()
{
    return blockLocation_;
}

void PopPolicy::setBlockLocation(const std::vector<std::string>& value)
{
    blockLocation_ = value;
    blockLocationIsSet_ = true;
}

bool PopPolicy::blockLocationIsSet() const
{
    return blockLocationIsSet_;
}

void PopPolicy::unsetblockLocation()
{
    blockLocationIsSet_ = false;
}

std::vector<std::string>& PopPolicy::getBlockProtocol()
{
    return blockProtocol_;
}

void PopPolicy::setBlockProtocol(const std::vector<std::string>& value)
{
    blockProtocol_ = value;
    blockProtocolIsSet_ = true;
}

bool PopPolicy::blockProtocolIsSet() const
{
    return blockProtocolIsSet_;
}

void PopPolicy::unsetblockProtocol()
{
    blockProtocolIsSet_ = false;
}

Bw PopPolicy::getBwList() const
{
    return bwList_;
}

void PopPolicy::setBwList(const Bw& value)
{
    bwList_ = value;
    bwListIsSet_ = true;
}

bool PopPolicy::bwListIsSet() const
{
    return bwListIsSet_;
}

void PopPolicy::unsetbwList()
{
    bwListIsSet_ = false;
}

bool PopPolicy::isConnectionProtection() const
{
    return connectionProtection_;
}

void PopPolicy::setConnectionProtection(bool value)
{
    connectionProtection_ = value;
    connectionProtectionIsSet_ = true;
}

bool PopPolicy::connectionProtectionIsSet() const
{
    return connectionProtectionIsSet_;
}

void PopPolicy::unsetconnectionProtection()
{
    connectionProtectionIsSet_ = false;
}

std::vector<std::string>& PopPolicy::getConnectionProtectionList()
{
    return connectionProtectionList_;
}

void PopPolicy::setConnectionProtectionList(const std::vector<std::string>& value)
{
    connectionProtectionList_ = value;
    connectionProtectionListIsSet_ = true;
}

bool PopPolicy::connectionProtectionListIsSet() const
{
    return connectionProtectionListIsSet_;
}

void PopPolicy::unsetconnectionProtectionList()
{
    connectionProtectionListIsSet_ = false;
}

int32_t PopPolicy::getFingerprintCount() const
{
    return fingerprintCount_;
}

void PopPolicy::setFingerprintCount(int32_t value)
{
    fingerprintCount_ = value;
    fingerprintCountIsSet_ = true;
}

bool PopPolicy::fingerprintCountIsSet() const
{
    return fingerprintCountIsSet_;
}

void PopPolicy::unsetfingerprintCount()
{
    fingerprintCountIsSet_ = false;
}

int32_t PopPolicy::getPortBlockCount() const
{
    return portBlockCount_;
}

void PopPolicy::setPortBlockCount(int32_t value)
{
    portBlockCount_ = value;
    portBlockCountIsSet_ = true;
}

bool PopPolicy::portBlockCountIsSet() const
{
    return portBlockCountIsSet_;
}

void PopPolicy::unsetportBlockCount()
{
    portBlockCountIsSet_ = false;
}

int32_t PopPolicy::getWatermarkCount() const
{
    return watermarkCount_;
}

void PopPolicy::setWatermarkCount(int32_t value)
{
    watermarkCount_ = value;
    watermarkCountIsSet_ = true;
}

bool PopPolicy::watermarkCountIsSet() const
{
    return watermarkCountIsSet_;
}

void PopPolicy::unsetwatermarkCount()
{
    watermarkCountIsSet_ = false;
}

bool PopPolicy::isIfExistTraffic() const
{
    return ifExistTraffic_;
}

void PopPolicy::setIfExistTraffic(bool value)
{
    ifExistTraffic_ = value;
    ifExistTrafficIsSet_ = true;
}

bool PopPolicy::ifExistTrafficIsSet() const
{
    return ifExistTrafficIsSet_;
}

void PopPolicy::unsetifExistTraffic()
{
    ifExistTrafficIsSet_ = false;
}

std::string PopPolicy::getPop() const
{
    return pop_;
}

void PopPolicy::setPop(const std::string& value)
{
    pop_ = value;
    popIsSet_ = true;
}

bool PopPolicy::popIsSet() const
{
    return popIsSet_;
}

void PopPolicy::unsetpop()
{
    popIsSet_ = false;
}

}
}
}
}
}


