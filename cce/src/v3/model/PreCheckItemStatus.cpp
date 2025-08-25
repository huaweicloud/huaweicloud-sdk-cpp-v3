

#include "huaweicloud/cce/v3/model/PreCheckItemStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PreCheckItemStatus::PreCheckItemStatus()
{
    name_ = "";
    nameIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    group_ = "";
    groupIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    phase_ = "";
    phaseIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    riskSourceIsSet_ = false;
    errorCodesIsSet_ = false;
}

PreCheckItemStatus::~PreCheckItemStatus() = default;

void PreCheckItemStatus::validate()
{
}

web::json::value PreCheckItemStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(riskSourceIsSet_) {
        val[utility::conversions::to_string_t("riskSource")] = ModelBase::toJson(riskSource_);
    }
    if(errorCodesIsSet_) {
        val[utility::conversions::to_string_t("errorCodes")] = ModelBase::toJson(errorCodes_);
    }

    return val;
}
bool PreCheckItemStatus::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("riskSource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("riskSource"));
        if(!fieldValue.is_null())
        {
            RiskSource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errorCodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorCodes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCodes(refVal);
        }
    }
    return ok;
}


std::string PreCheckItemStatus::getName() const
{
    return name_;
}

void PreCheckItemStatus::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PreCheckItemStatus::nameIsSet() const
{
    return nameIsSet_;
}

void PreCheckItemStatus::unsetname()
{
    nameIsSet_ = false;
}

std::string PreCheckItemStatus::getKind() const
{
    return kind_;
}

void PreCheckItemStatus::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PreCheckItemStatus::kindIsSet() const
{
    return kindIsSet_;
}

void PreCheckItemStatus::unsetkind()
{
    kindIsSet_ = false;
}

std::string PreCheckItemStatus::getGroup() const
{
    return group_;
}

void PreCheckItemStatus::setGroup(const std::string& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool PreCheckItemStatus::groupIsSet() const
{
    return groupIsSet_;
}

void PreCheckItemStatus::unsetgroup()
{
    groupIsSet_ = false;
}

std::string PreCheckItemStatus::getLevel() const
{
    return level_;
}

void PreCheckItemStatus::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool PreCheckItemStatus::levelIsSet() const
{
    return levelIsSet_;
}

void PreCheckItemStatus::unsetlevel()
{
    levelIsSet_ = false;
}

std::string PreCheckItemStatus::getPhase() const
{
    return phase_;
}

void PreCheckItemStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool PreCheckItemStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void PreCheckItemStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string PreCheckItemStatus::getMessage() const
{
    return message_;
}

void PreCheckItemStatus::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool PreCheckItemStatus::messageIsSet() const
{
    return messageIsSet_;
}

void PreCheckItemStatus::unsetmessage()
{
    messageIsSet_ = false;
}

RiskSource PreCheckItemStatus::getRiskSource() const
{
    return riskSource_;
}

void PreCheckItemStatus::setRiskSource(const RiskSource& value)
{
    riskSource_ = value;
    riskSourceIsSet_ = true;
}

bool PreCheckItemStatus::riskSourceIsSet() const
{
    return riskSourceIsSet_;
}

void PreCheckItemStatus::unsetriskSource()
{
    riskSourceIsSet_ = false;
}

std::vector<std::string>& PreCheckItemStatus::getErrorCodes()
{
    return errorCodes_;
}

void PreCheckItemStatus::setErrorCodes(const std::vector<std::string>& value)
{
    errorCodes_ = value;
    errorCodesIsSet_ = true;
}

bool PreCheckItemStatus::errorCodesIsSet() const
{
    return errorCodesIsSet_;
}

void PreCheckItemStatus::unseterrorCodes()
{
    errorCodesIsSet_ = false;
}

}
}
}
}
}


