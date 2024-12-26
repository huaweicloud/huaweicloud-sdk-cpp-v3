

#include "huaweicloud/cfw/v1/model/AntiVirusRuleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AntiVirusRuleDto::AntiVirusRuleDto()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    scanProtocolConfigsIsSet_ = false;
}

AntiVirusRuleDto::~AntiVirusRuleDto() = default;

void AntiVirusRuleDto::validate()
{
}

web::json::value AntiVirusRuleDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(scanProtocolConfigsIsSet_) {
        val[utility::conversions::to_string_t("scan_protocol_configs")] = ModelBase::toJson(scanProtocolConfigs_);
    }

    return val;
}
bool AntiVirusRuleDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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
    return ok;
}


std::string AntiVirusRuleDto::getObjectId() const
{
    return objectId_;
}

void AntiVirusRuleDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AntiVirusRuleDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AntiVirusRuleDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<ScanProtocolConfig>& AntiVirusRuleDto::getScanProtocolConfigs()
{
    return scanProtocolConfigs_;
}

void AntiVirusRuleDto::setScanProtocolConfigs(const std::vector<ScanProtocolConfig>& value)
{
    scanProtocolConfigs_ = value;
    scanProtocolConfigsIsSet_ = true;
}

bool AntiVirusRuleDto::scanProtocolConfigsIsSet() const
{
    return scanProtocolConfigsIsSet_;
}

void AntiVirusRuleDto::unsetscanProtocolConfigs()
{
    scanProtocolConfigsIsSet_ = false;
}

}
}
}
}
}


