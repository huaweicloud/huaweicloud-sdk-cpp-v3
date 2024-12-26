

#include "huaweicloud/cfw/v1/model/AntiVirusRuleVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AntiVirusRuleVO::AntiVirusRuleVO()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    scanProtocolConfigsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

AntiVirusRuleVO::~AntiVirusRuleVO() = default;

void AntiVirusRuleVO::validate()
{
}

web::json::value AntiVirusRuleVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(scanProtocolConfigsIsSet_) {
        val[utility::conversions::to_string_t("scan_protocol_configs")] = ModelBase::toJson(scanProtocolConfigs_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool AntiVirusRuleVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("scan_protocol_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scan_protocol_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<ScanProtocolConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScanProtocolConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::string AntiVirusRuleVO::getId() const
{
    return id_;
}

void AntiVirusRuleVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AntiVirusRuleVO::idIsSet() const
{
    return idIsSet_;
}

void AntiVirusRuleVO::unsetid()
{
    idIsSet_ = false;
}

std::string AntiVirusRuleVO::getName() const
{
    return name_;
}

void AntiVirusRuleVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AntiVirusRuleVO::nameIsSet() const
{
    return nameIsSet_;
}

void AntiVirusRuleVO::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ScanProtocolConfig>& AntiVirusRuleVO::getScanProtocolConfigs()
{
    return scanProtocolConfigs_;
}

void AntiVirusRuleVO::setScanProtocolConfigs(const std::vector<ScanProtocolConfig>& value)
{
    scanProtocolConfigs_ = value;
    scanProtocolConfigsIsSet_ = true;
}

bool AntiVirusRuleVO::scanProtocolConfigsIsSet() const
{
    return scanProtocolConfigsIsSet_;
}

void AntiVirusRuleVO::unsetscanProtocolConfigs()
{
    scanProtocolConfigsIsSet_ = false;
}

int32_t AntiVirusRuleVO::getTotal() const
{
    return total_;
}

void AntiVirusRuleVO::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool AntiVirusRuleVO::totalIsSet() const
{
    return totalIsSet_;
}

void AntiVirusRuleVO::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


