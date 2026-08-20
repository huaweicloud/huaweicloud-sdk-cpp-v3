

#include "huaweicloud/projectman/v4/model/IssueBaselineResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueBaselineResult::IssueBaselineResult()
{
    id_ = "";
    idIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    baseline_ = "";
    baselineIsSet_ = false;
    operationId_ = "";
    operationIdIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    failMessage_ = "";
    failMessageIsSet_ = false;
}

IssueBaselineResult::~IssueBaselineResult() = default;

void IssueBaselineResult::validate()
{
}

web::json::value IssueBaselineResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(baselineIsSet_) {
        val[utility::conversions::to_string_t("baseline")] = ModelBase::toJson(baseline_);
    }
    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(failMessageIsSet_) {
        val[utility::conversions::to_string_t("fail_message")] = ModelBase::toJson(failMessage_);
    }

    return val;
}
bool IssueBaselineResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baseline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baseline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseline(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailMessage(refVal);
        }
    }
    return ok;
}


std::string IssueBaselineResult::getId() const
{
    return id_;
}

void IssueBaselineResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueBaselineResult::idIsSet() const
{
    return idIsSet_;
}

void IssueBaselineResult::unsetid()
{
    idIsSet_ = false;
}

std::string IssueBaselineResult::getModifiedBy() const
{
    return modifiedBy_;
}

void IssueBaselineResult::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool IssueBaselineResult::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void IssueBaselineResult::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string IssueBaselineResult::getBaseline() const
{
    return baseline_;
}

void IssueBaselineResult::setBaseline(const std::string& value)
{
    baseline_ = value;
    baselineIsSet_ = true;
}

bool IssueBaselineResult::baselineIsSet() const
{
    return baselineIsSet_;
}

void IssueBaselineResult::unsetbaseline()
{
    baselineIsSet_ = false;
}

std::string IssueBaselineResult::getOperationId() const
{
    return operationId_;
}

void IssueBaselineResult::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool IssueBaselineResult::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void IssueBaselineResult::unsetoperationId()
{
    operationIdIsSet_ = false;
}

std::string IssueBaselineResult::getModifiedDate() const
{
    return modifiedDate_;
}

void IssueBaselineResult::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool IssueBaselineResult::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void IssueBaselineResult::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string IssueBaselineResult::getNumber() const
{
    return number_;
}

void IssueBaselineResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IssueBaselineResult::numberIsSet() const
{
    return numberIsSet_;
}

void IssueBaselineResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string IssueBaselineResult::getTitle() const
{
    return title_;
}

void IssueBaselineResult::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool IssueBaselineResult::titleIsSet() const
{
    return titleIsSet_;
}

void IssueBaselineResult::unsettitle()
{
    titleIsSet_ = false;
}

std::string IssueBaselineResult::getFailMessage() const
{
    return failMessage_;
}

void IssueBaselineResult::setFailMessage(const std::string& value)
{
    failMessage_ = value;
    failMessageIsSet_ = true;
}

bool IssueBaselineResult::failMessageIsSet() const
{
    return failMessageIsSet_;
}

void IssueBaselineResult::unsetfailMessage()
{
    failMessageIsSet_ = false;
}

}
}
}
}
}


