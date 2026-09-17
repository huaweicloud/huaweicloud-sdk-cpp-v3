

#include "huaweicloud/projectman/v4/model/IssueWithReasonVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueWithReasonVO::IssueWithReasonVO()
{
    id_ = "";
    idIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

IssueWithReasonVO::~IssueWithReasonVO() = default;

void IssueWithReasonVO::validate()
{
}

web::json::value IssueWithReasonVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool IssueWithReasonVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


std::string IssueWithReasonVO::getId() const
{
    return id_;
}

void IssueWithReasonVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueWithReasonVO::idIsSet() const
{
    return idIsSet_;
}

void IssueWithReasonVO::unsetid()
{
    idIsSet_ = false;
}

std::string IssueWithReasonVO::getCategory() const
{
    return category_;
}

void IssueWithReasonVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool IssueWithReasonVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void IssueWithReasonVO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string IssueWithReasonVO::getTitle() const
{
    return title_;
}

void IssueWithReasonVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool IssueWithReasonVO::titleIsSet() const
{
    return titleIsSet_;
}

void IssueWithReasonVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string IssueWithReasonVO::getNumber() const
{
    return number_;
}

void IssueWithReasonVO::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IssueWithReasonVO::numberIsSet() const
{
    return numberIsSet_;
}

void IssueWithReasonVO::unsetnumber()
{
    numberIsSet_ = false;
}

std::string IssueWithReasonVO::getReason() const
{
    return reason_;
}

void IssueWithReasonVO::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool IssueWithReasonVO::reasonIsSet() const
{
    return reasonIsSet_;
}

void IssueWithReasonVO::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


