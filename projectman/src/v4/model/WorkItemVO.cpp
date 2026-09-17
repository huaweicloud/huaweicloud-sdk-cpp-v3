

#include "huaweicloud/projectman/v4/model/WorkItemVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemVO::WorkItemVO()
{
    id_ = "";
    idIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    statusIsSet_ = false;
    assigneeIsSet_ = false;
    baseline_ = "";
    baselineIsSet_ = false;
    changeStatus_ = "";
    changeStatusIsSet_ = false;
}

WorkItemVO::~WorkItemVO() = default;

void WorkItemVO::validate()
{
}

web::json::value WorkItemVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }
    if(baselineIsSet_) {
        val[utility::conversions::to_string_t("baseline")] = ModelBase::toJson(baseline_);
    }
    if(changeStatusIsSet_) {
        val[utility::conversions::to_string_t("change_status")] = ModelBase::toJson(changeStatus_);
    }

    return val;
}
bool WorkItemVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            StatusVoIpd refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assignee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("change_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeStatus(refVal);
        }
    }
    return ok;
}


std::string WorkItemVO::getId() const
{
    return id_;
}

void WorkItemVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkItemVO::idIsSet() const
{
    return idIsSet_;
}

void WorkItemVO::unsetid()
{
    idIsSet_ = false;
}

std::string WorkItemVO::getTitle() const
{
    return title_;
}

void WorkItemVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool WorkItemVO::titleIsSet() const
{
    return titleIsSet_;
}

void WorkItemVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string WorkItemVO::getNumber() const
{
    return number_;
}

void WorkItemVO::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool WorkItemVO::numberIsSet() const
{
    return numberIsSet_;
}

void WorkItemVO::unsetnumber()
{
    numberIsSet_ = false;
}

std::string WorkItemVO::getCategory() const
{
    return category_;
}

void WorkItemVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool WorkItemVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void WorkItemVO::unsetcategory()
{
    categoryIsSet_ = false;
}

StatusVoIpd WorkItemVO::getStatus() const
{
    return status_;
}

void WorkItemVO::setStatus(const StatusVoIpd& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WorkItemVO::statusIsSet() const
{
    return statusIsSet_;
}

void WorkItemVO::unsetstatus()
{
    statusIsSet_ = false;
}

UserVO WorkItemVO::getAssignee() const
{
    return assignee_;
}

void WorkItemVO::setAssignee(const UserVO& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool WorkItemVO::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void WorkItemVO::unsetassignee()
{
    assigneeIsSet_ = false;
}

std::string WorkItemVO::getBaseline() const
{
    return baseline_;
}

void WorkItemVO::setBaseline(const std::string& value)
{
    baseline_ = value;
    baselineIsSet_ = true;
}

bool WorkItemVO::baselineIsSet() const
{
    return baselineIsSet_;
}

void WorkItemVO::unsetbaseline()
{
    baselineIsSet_ = false;
}

std::string WorkItemVO::getChangeStatus() const
{
    return changeStatus_;
}

void WorkItemVO::setChangeStatus(const std::string& value)
{
    changeStatus_ = value;
    changeStatusIsSet_ = true;
}

bool WorkItemVO::changeStatusIsSet() const
{
    return changeStatusIsSet_;
}

void WorkItemVO::unsetchangeStatus()
{
    changeStatusIsSet_ = false;
}

}
}
}
}
}


