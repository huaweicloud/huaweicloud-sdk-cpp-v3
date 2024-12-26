

#include "huaweicloud/cfw/v1/model/IpsRuleUpdateTimeVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsRuleUpdateTimeVO::IpsRuleUpdateTimeVO()
{
    ipsType_ = 0;
    ipsTypeIsSet_ = false;
    ipsVersion_ = "";
    ipsVersionIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
}

IpsRuleUpdateTimeVO::~IpsRuleUpdateTimeVO() = default;

void IpsRuleUpdateTimeVO::validate()
{
}

web::json::value IpsRuleUpdateTimeVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipsTypeIsSet_) {
        val[utility::conversions::to_string_t("ips_type")] = ModelBase::toJson(ipsType_);
    }
    if(ipsVersionIsSet_) {
        val[utility::conversions::to_string_t("ips_version")] = ModelBase::toJson(ipsVersion_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool IpsRuleUpdateTimeVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ips_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


int32_t IpsRuleUpdateTimeVO::getIpsType() const
{
    return ipsType_;
}

void IpsRuleUpdateTimeVO::setIpsType(int32_t value)
{
    ipsType_ = value;
    ipsTypeIsSet_ = true;
}

bool IpsRuleUpdateTimeVO::ipsTypeIsSet() const
{
    return ipsTypeIsSet_;
}

void IpsRuleUpdateTimeVO::unsetipsType()
{
    ipsTypeIsSet_ = false;
}

std::string IpsRuleUpdateTimeVO::getIpsVersion() const
{
    return ipsVersion_;
}

void IpsRuleUpdateTimeVO::setIpsVersion(const std::string& value)
{
    ipsVersion_ = value;
    ipsVersionIsSet_ = true;
}

bool IpsRuleUpdateTimeVO::ipsVersionIsSet() const
{
    return ipsVersionIsSet_;
}

void IpsRuleUpdateTimeVO::unsetipsVersion()
{
    ipsVersionIsSet_ = false;
}

int64_t IpsRuleUpdateTimeVO::getUpdateTime() const
{
    return updateTime_;
}

void IpsRuleUpdateTimeVO::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool IpsRuleUpdateTimeVO::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void IpsRuleUpdateTimeVO::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


