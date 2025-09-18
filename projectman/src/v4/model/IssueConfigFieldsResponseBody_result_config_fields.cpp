

#include "huaweicloud/projectman/v4/model/IssueConfigFieldsResponseBody_result_config_fields.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueConfigFieldsResponseBody_result_config_fields::IssueConfigFieldsResponseBody_result_config_fields()
{
    displayName_ = "";
    displayNameIsSet_ = false;
    show_ = false;
    showIsSet_ = false;
    showEditable_ = false;
    showEditableIsSet_ = false;
    optional_ = false;
    optionalIsSet_ = false;
    controlled_ = false;
    controlledIsSet_ = false;
    issueRolesIsSet_ = false;
}

IssueConfigFieldsResponseBody_result_config_fields::~IssueConfigFieldsResponseBody_result_config_fields() = default;

void IssueConfigFieldsResponseBody_result_config_fields::validate()
{
}

web::json::value IssueConfigFieldsResponseBody_result_config_fields::toJson() const
{
    web::json::value val = web::json::value::object();

    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(showIsSet_) {
        val[utility::conversions::to_string_t("show")] = ModelBase::toJson(show_);
    }
    if(showEditableIsSet_) {
        val[utility::conversions::to_string_t("show_editable")] = ModelBase::toJson(showEditable_);
    }
    if(optionalIsSet_) {
        val[utility::conversions::to_string_t("optional")] = ModelBase::toJson(optional_);
    }
    if(controlledIsSet_) {
        val[utility::conversions::to_string_t("controlled")] = ModelBase::toJson(controlled_);
    }
    if(issueRolesIsSet_) {
        val[utility::conversions::to_string_t("issue_roles")] = ModelBase::toJson(issueRoles_);
    }

    return val;
}
bool IssueConfigFieldsResponseBody_result_config_fields::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show_editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_editable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowEditable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("optional"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("optional"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptional(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("controlled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("controlled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_roles"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueRoles(refVal);
        }
    }
    return ok;
}


std::string IssueConfigFieldsResponseBody_result_config_fields::getDisplayName() const
{
    return displayName_;
}

void IssueConfigFieldsResponseBody_result_config_fields::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool IssueConfigFieldsResponseBody_result_config_fields::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void IssueConfigFieldsResponseBody_result_config_fields::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

bool IssueConfigFieldsResponseBody_result_config_fields::isShow() const
{
    return show_;
}

void IssueConfigFieldsResponseBody_result_config_fields::setShow(bool value)
{
    show_ = value;
    showIsSet_ = true;
}

bool IssueConfigFieldsResponseBody_result_config_fields::showIsSet() const
{
    return showIsSet_;
}

void IssueConfigFieldsResponseBody_result_config_fields::unsetshow()
{
    showIsSet_ = false;
}

bool IssueConfigFieldsResponseBody_result_config_fields::isShowEditable() const
{
    return showEditable_;
}

void IssueConfigFieldsResponseBody_result_config_fields::setShowEditable(bool value)
{
    showEditable_ = value;
    showEditableIsSet_ = true;
}

bool IssueConfigFieldsResponseBody_result_config_fields::showEditableIsSet() const
{
    return showEditableIsSet_;
}

void IssueConfigFieldsResponseBody_result_config_fields::unsetshowEditable()
{
    showEditableIsSet_ = false;
}

bool IssueConfigFieldsResponseBody_result_config_fields::isOptional() const
{
    return optional_;
}

void IssueConfigFieldsResponseBody_result_config_fields::setOptional(bool value)
{
    optional_ = value;
    optionalIsSet_ = true;
}

bool IssueConfigFieldsResponseBody_result_config_fields::optionalIsSet() const
{
    return optionalIsSet_;
}

void IssueConfigFieldsResponseBody_result_config_fields::unsetoptional()
{
    optionalIsSet_ = false;
}

bool IssueConfigFieldsResponseBody_result_config_fields::isControlled() const
{
    return controlled_;
}

void IssueConfigFieldsResponseBody_result_config_fields::setControlled(bool value)
{
    controlled_ = value;
    controlledIsSet_ = true;
}

bool IssueConfigFieldsResponseBody_result_config_fields::controlledIsSet() const
{
    return controlledIsSet_;
}

void IssueConfigFieldsResponseBody_result_config_fields::unsetcontrolled()
{
    controlledIsSet_ = false;
}

std::vector<std::string>& IssueConfigFieldsResponseBody_result_config_fields::getIssueRoles()
{
    return issueRoles_;
}

void IssueConfigFieldsResponseBody_result_config_fields::setIssueRoles(const std::vector<std::string>& value)
{
    issueRoles_ = value;
    issueRolesIsSet_ = true;
}

bool IssueConfigFieldsResponseBody_result_config_fields::issueRolesIsSet() const
{
    return issueRolesIsSet_;
}

void IssueConfigFieldsResponseBody_result_config_fields::unsetissueRoles()
{
    issueRolesIsSet_ = false;
}

}
}
}
}
}


