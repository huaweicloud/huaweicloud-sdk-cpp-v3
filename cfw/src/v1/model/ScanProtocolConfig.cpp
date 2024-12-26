

#include "huaweicloud/cfw/v1/model/ScanProtocolConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ScanProtocolConfig::ScanProtocolConfig()
{
    action_ = 0;
    actionIsSet_ = false;
    protocolType_ = 0;
    protocolTypeIsSet_ = false;
}

ScanProtocolConfig::~ScanProtocolConfig() = default;

void ScanProtocolConfig::validate()
{
}

web::json::value ScanProtocolConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(protocolTypeIsSet_) {
        val[utility::conversions::to_string_t("protocol_type")] = ModelBase::toJson(protocolType_);
    }

    return val;
}
bool ScanProtocolConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocolType(refVal);
        }
    }
    return ok;
}


int32_t ScanProtocolConfig::getAction() const
{
    return action_;
}

void ScanProtocolConfig::setAction(int32_t value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ScanProtocolConfig::actionIsSet() const
{
    return actionIsSet_;
}

void ScanProtocolConfig::unsetaction()
{
    actionIsSet_ = false;
}

int32_t ScanProtocolConfig::getProtocolType() const
{
    return protocolType_;
}

void ScanProtocolConfig::setProtocolType(int32_t value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool ScanProtocolConfig::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void ScanProtocolConfig::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

}
}
}
}
}


