

#include "huaweicloud/cfw/v1/model/IpBlacklistVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpBlacklistVO::IpBlacklistVO()
{
    name_ = "";
    nameIsSet_ = false;
    effectScopeIsSet_ = false;
    importStatus_ = 0;
    importStatusIsSet_ = false;
    importTime_ = 0L;
    importTimeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

IpBlacklistVO::~IpBlacklistVO() = default;

void IpBlacklistVO::validate()
{
}

web::json::value IpBlacklistVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(effectScopeIsSet_) {
        val[utility::conversions::to_string_t("effect_scope")] = ModelBase::toJson(effectScope_);
    }
    if(importStatusIsSet_) {
        val[utility::conversions::to_string_t("import_status")] = ModelBase::toJson(importStatus_);
    }
    if(importTimeIsSet_) {
        val[utility::conversions::to_string_t("import_time")] = ModelBase::toJson(importTime_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool IpBlacklistVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("import_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("import_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string IpBlacklistVO::getName() const
{
    return name_;
}

void IpBlacklistVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IpBlacklistVO::nameIsSet() const
{
    return nameIsSet_;
}

void IpBlacklistVO::unsetname()
{
    nameIsSet_ = false;
}

std::vector<int32_t>& IpBlacklistVO::getEffectScope()
{
    return effectScope_;
}

void IpBlacklistVO::setEffectScope(std::vector<int32_t> value)
{
    effectScope_ = value;
    effectScopeIsSet_ = true;
}

bool IpBlacklistVO::effectScopeIsSet() const
{
    return effectScopeIsSet_;
}

void IpBlacklistVO::unseteffectScope()
{
    effectScopeIsSet_ = false;
}

int32_t IpBlacklistVO::getImportStatus() const
{
    return importStatus_;
}

void IpBlacklistVO::setImportStatus(int32_t value)
{
    importStatus_ = value;
    importStatusIsSet_ = true;
}

bool IpBlacklistVO::importStatusIsSet() const
{
    return importStatusIsSet_;
}

void IpBlacklistVO::unsetimportStatus()
{
    importStatusIsSet_ = false;
}

int64_t IpBlacklistVO::getImportTime() const
{
    return importTime_;
}

void IpBlacklistVO::setImportTime(int64_t value)
{
    importTime_ = value;
    importTimeIsSet_ = true;
}

bool IpBlacklistVO::importTimeIsSet() const
{
    return importTimeIsSet_;
}

void IpBlacklistVO::unsetimportTime()
{
    importTimeIsSet_ = false;
}

std::string IpBlacklistVO::getErrorMessage() const
{
    return errorMessage_;
}

void IpBlacklistVO::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool IpBlacklistVO::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void IpBlacklistVO::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


