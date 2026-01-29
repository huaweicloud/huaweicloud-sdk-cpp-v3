

#include "huaweicloud/projectman/v4/model/OptionVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




OptionVO::OptionVO()
{
    id_ = "";
    idIsSet_ = false;
    displayValue_ = "";
    displayValueIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    valuePy_ = "";
    valuePyIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    belongDefinitionType_ = "";
    belongDefinitionTypeIsSet_ = false;
}

OptionVO::~OptionVO() = default;

void OptionVO::validate()
{
}

web::json::value OptionVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(displayValueIsSet_) {
        val[utility::conversions::to_string_t("display_value")] = ModelBase::toJson(displayValue_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(valuePyIsSet_) {
        val[utility::conversions::to_string_t("value_py")] = ModelBase::toJson(valuePy_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(belongDefinitionTypeIsSet_) {
        val[utility::conversions::to_string_t("belong_definition_type")] = ModelBase::toJson(belongDefinitionType_);
    }

    return val;
}
bool OptionVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("display_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_py"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_py"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValuePy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_definition_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_definition_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongDefinitionType(refVal);
        }
    }
    return ok;
}


std::string OptionVO::getId() const
{
    return id_;
}

void OptionVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OptionVO::idIsSet() const
{
    return idIsSet_;
}

void OptionVO::unsetid()
{
    idIsSet_ = false;
}

std::string OptionVO::getDisplayValue() const
{
    return displayValue_;
}

void OptionVO::setDisplayValue(const std::string& value)
{
    displayValue_ = value;
    displayValueIsSet_ = true;
}

bool OptionVO::displayValueIsSet() const
{
    return displayValueIsSet_;
}

void OptionVO::unsetdisplayValue()
{
    displayValueIsSet_ = false;
}

std::string OptionVO::getValue() const
{
    return value_;
}

void OptionVO::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool OptionVO::valueIsSet() const
{
    return valueIsSet_;
}

void OptionVO::unsetvalue()
{
    valueIsSet_ = false;
}

std::string OptionVO::getCode() const
{
    return code_;
}

void OptionVO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool OptionVO::codeIsSet() const
{
    return codeIsSet_;
}

void OptionVO::unsetcode()
{
    codeIsSet_ = false;
}

std::string OptionVO::getValuePy() const
{
    return valuePy_;
}

void OptionVO::setValuePy(const std::string& value)
{
    valuePy_ = value;
    valuePyIsSet_ = true;
}

bool OptionVO::valuePyIsSet() const
{
    return valuePyIsSet_;
}

void OptionVO::unsetvaluePy()
{
    valuePyIsSet_ = false;
}

int32_t OptionVO::getSequence() const
{
    return sequence_;
}

void OptionVO::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool OptionVO::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void OptionVO::unsetsequence()
{
    sequenceIsSet_ = false;
}

int32_t OptionVO::getLevel() const
{
    return level_;
}

void OptionVO::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool OptionVO::levelIsSet() const
{
    return levelIsSet_;
}

void OptionVO::unsetlevel()
{
    levelIsSet_ = false;
}

std::string OptionVO::getDomainId() const
{
    return domainId_;
}

void OptionVO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool OptionVO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void OptionVO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string OptionVO::getBelongDefinitionType() const
{
    return belongDefinitionType_;
}

void OptionVO::setBelongDefinitionType(const std::string& value)
{
    belongDefinitionType_ = value;
    belongDefinitionTypeIsSet_ = true;
}

bool OptionVO::belongDefinitionTypeIsSet() const
{
    return belongDefinitionTypeIsSet_;
}

void OptionVO::unsetbelongDefinitionType()
{
    belongDefinitionTypeIsSet_ = false;
}

}
}
}
}
}


