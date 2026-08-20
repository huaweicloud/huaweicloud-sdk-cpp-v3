

#include "huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_issue_priority.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProcessInstanceResponse_result_issue_priority::ProcessInstanceResponse_result_issue_priority()
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

ProcessInstanceResponse_result_issue_priority::~ProcessInstanceResponse_result_issue_priority() = default;

void ProcessInstanceResponse_result_issue_priority::validate()
{
}

web::json::value ProcessInstanceResponse_result_issue_priority::toJson() const
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
bool ProcessInstanceResponse_result_issue_priority::fromJson(const web::json::value& val)
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


std::string ProcessInstanceResponse_result_issue_priority::getId() const
{
    return id_;
}

void ProcessInstanceResponse_result_issue_priority::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_priority::idIsSet() const
{
    return idIsSet_;
}

void ProcessInstanceResponse_result_issue_priority::unsetid()
{
    idIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_priority::getDisplayValue() const
{
    return displayValue_;
}

void ProcessInstanceResponse_result_issue_priority::setDisplayValue(const std::string& value)
{
    displayValue_ = value;
    displayValueIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_priority::displayValueIsSet() const
{
    return displayValueIsSet_;
}

void ProcessInstanceResponse_result_issue_priority::unsetdisplayValue()
{
    displayValueIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_priority::getValue() const
{
    return value_;
}

void ProcessInstanceResponse_result_issue_priority::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_priority::valueIsSet() const
{
    return valueIsSet_;
}

void ProcessInstanceResponse_result_issue_priority::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_priority::getCode() const
{
    return code_;
}

void ProcessInstanceResponse_result_issue_priority::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_priority::codeIsSet() const
{
    return codeIsSet_;
}

void ProcessInstanceResponse_result_issue_priority::unsetcode()
{
    codeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_priority::getValuePy() const
{
    return valuePy_;
}

void ProcessInstanceResponse_result_issue_priority::setValuePy(const std::string& value)
{
    valuePy_ = value;
    valuePyIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_priority::valuePyIsSet() const
{
    return valuePyIsSet_;
}

void ProcessInstanceResponse_result_issue_priority::unsetvaluePy()
{
    valuePyIsSet_ = false;
}

int32_t ProcessInstanceResponse_result_issue_priority::getSequence() const
{
    return sequence_;
}

void ProcessInstanceResponse_result_issue_priority::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_priority::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ProcessInstanceResponse_result_issue_priority::unsetsequence()
{
    sequenceIsSet_ = false;
}

int32_t ProcessInstanceResponse_result_issue_priority::getLevel() const
{
    return level_;
}

void ProcessInstanceResponse_result_issue_priority::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_priority::levelIsSet() const
{
    return levelIsSet_;
}

void ProcessInstanceResponse_result_issue_priority::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_priority::getDomainId() const
{
    return domainId_;
}

void ProcessInstanceResponse_result_issue_priority::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_priority::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ProcessInstanceResponse_result_issue_priority::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_priority::getBelongDefinitionType() const
{
    return belongDefinitionType_;
}

void ProcessInstanceResponse_result_issue_priority::setBelongDefinitionType(const std::string& value)
{
    belongDefinitionType_ = value;
    belongDefinitionTypeIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_priority::belongDefinitionTypeIsSet() const
{
    return belongDefinitionTypeIsSet_;
}

void ProcessInstanceResponse_result_issue_priority::unsetbelongDefinitionType()
{
    belongDefinitionTypeIsSet_ = false;
}

}
}
}
}
}


