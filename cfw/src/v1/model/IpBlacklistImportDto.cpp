

#include "huaweicloud/cfw/v1/model/IpBlacklistImportDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpBlacklistImportDto::IpBlacklistImportDto()
{
    addType_ = 0;
    addTypeIsSet_ = false;
    ipBlacklist_ = "";
    ipBlacklistIsSet_ = false;
    effectScopeIsSet_ = false;
}

IpBlacklistImportDto::~IpBlacklistImportDto() = default;

void IpBlacklistImportDto::validate()
{
}

web::json::value IpBlacklistImportDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addTypeIsSet_) {
        val[utility::conversions::to_string_t("add_type")] = ModelBase::toJson(addType_);
    }
    if(ipBlacklistIsSet_) {
        val[utility::conversions::to_string_t("ip_blacklist")] = ModelBase::toJson(ipBlacklist_);
    }
    if(effectScopeIsSet_) {
        val[utility::conversions::to_string_t("effect_scope")] = ModelBase::toJson(effectScope_);
    }

    return val;
}
bool IpBlacklistImportDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("add_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_blacklist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_blacklist"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpBlacklist(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effect_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effect_scope"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectScope(refVal);
        }
    }
    return ok;
}


int32_t IpBlacklistImportDto::getAddType() const
{
    return addType_;
}

void IpBlacklistImportDto::setAddType(int32_t value)
{
    addType_ = value;
    addTypeIsSet_ = true;
}

bool IpBlacklistImportDto::addTypeIsSet() const
{
    return addTypeIsSet_;
}

void IpBlacklistImportDto::unsetaddType()
{
    addTypeIsSet_ = false;
}

std::string IpBlacklistImportDto::getIpBlacklist() const
{
    return ipBlacklist_;
}

void IpBlacklistImportDto::setIpBlacklist(const std::string& value)
{
    ipBlacklist_ = value;
    ipBlacklistIsSet_ = true;
}

bool IpBlacklistImportDto::ipBlacklistIsSet() const
{
    return ipBlacklistIsSet_;
}

void IpBlacklistImportDto::unsetipBlacklist()
{
    ipBlacklistIsSet_ = false;
}

std::vector<int32_t>& IpBlacklistImportDto::getEffectScope()
{
    return effectScope_;
}

void IpBlacklistImportDto::setEffectScope(std::vector<int32_t> value)
{
    effectScope_ = value;
    effectScopeIsSet_ = true;
}

bool IpBlacklistImportDto::effectScopeIsSet() const
{
    return effectScopeIsSet_;
}

void IpBlacklistImportDto::unseteffectScope()
{
    effectScopeIsSet_ = false;
}

}
}
}
}
}


