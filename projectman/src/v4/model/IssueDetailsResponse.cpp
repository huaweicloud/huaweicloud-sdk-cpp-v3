

#include "huaweicloud/projectman/v4/model/IssueDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueDetailsResponse::IssueDetailsResponse()
{
    id_ = "";
    idIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    stayDays_ = 0;
    stayDaysIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    securityLevelIsSet_ = false;
}

IssueDetailsResponse::~IssueDetailsResponse() = default;

void IssueDetailsResponse::validate()
{
}

web::json::value IssueDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(stayDaysIsSet_) {
        val[utility::conversions::to_string_t("stay_days")] = ModelBase::toJson(stayDays_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(securityLevelIsSet_) {
        val[utility::conversions::to_string_t("security_level")] = ModelBase::toJson(securityLevel_);
    }

    return val;
}
bool IssueDetailsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stay_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stay_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStayDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_level"));
        if(!fieldValue.is_null())
        {
            SecurityLevelResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityLevel(refVal);
        }
    }
    return ok;
}


std::string IssueDetailsResponse::getId() const
{
    return id_;
}

void IssueDetailsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueDetailsResponse::idIsSet() const
{
    return idIsSet_;
}

void IssueDetailsResponse::unsetid()
{
    idIsSet_ = false;
}

std::string IssueDetailsResponse::getNumber() const
{
    return number_;
}

void IssueDetailsResponse::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IssueDetailsResponse::numberIsSet() const
{
    return numberIsSet_;
}

void IssueDetailsResponse::unsetnumber()
{
    numberIsSet_ = false;
}

std::string IssueDetailsResponse::getType() const
{
    return type_;
}

void IssueDetailsResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IssueDetailsResponse::typeIsSet() const
{
    return typeIsSet_;
}

void IssueDetailsResponse::unsettype()
{
    typeIsSet_ = false;
}

int32_t IssueDetailsResponse::getStayDays() const
{
    return stayDays_;
}

void IssueDetailsResponse::setStayDays(int32_t value)
{
    stayDays_ = value;
    stayDaysIsSet_ = true;
}

bool IssueDetailsResponse::stayDaysIsSet() const
{
    return stayDaysIsSet_;
}

void IssueDetailsResponse::unsetstayDays()
{
    stayDaysIsSet_ = false;
}

std::string IssueDetailsResponse::getTenantId() const
{
    return tenantId_;
}

void IssueDetailsResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool IssueDetailsResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void IssueDetailsResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string IssueDetailsResponse::getCreatedDate() const
{
    return createdDate_;
}

void IssueDetailsResponse::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool IssueDetailsResponse::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void IssueDetailsResponse::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string IssueDetailsResponse::getTitle() const
{
    return title_;
}

void IssueDetailsResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool IssueDetailsResponse::titleIsSet() const
{
    return titleIsSet_;
}

void IssueDetailsResponse::unsettitle()
{
    titleIsSet_ = false;
}

SecurityLevelResult IssueDetailsResponse::getSecurityLevel() const
{
    return securityLevel_;
}

void IssueDetailsResponse::setSecurityLevel(const SecurityLevelResult& value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool IssueDetailsResponse::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void IssueDetailsResponse::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

}
}
}
}
}


