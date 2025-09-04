

#include "huaweicloud/cdn/v2/model/SubscriptionTaskVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SubscriptionTaskVo::SubscriptionTaskVo()
{
    name_ = "";
    nameIsSet_ = false;
    periodType_ = 0;
    periodTypeIsSet_ = false;
    emails_ = "";
    emailsIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    reportType_ = "";
    reportTypeIsSet_ = false;
}

SubscriptionTaskVo::~SubscriptionTaskVo() = default;

void SubscriptionTaskVo::validate()
{
}

web::json::value SubscriptionTaskVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(emailsIsSet_) {
        val[utility::conversions::to_string_t("emails")] = ModelBase::toJson(emails_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(reportTypeIsSet_) {
        val[utility::conversions::to_string_t("report_type")] = ModelBase::toJson(reportType_);
    }

    return val;
}
bool SubscriptionTaskVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("period_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emails"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emails"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("report_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportType(refVal);
        }
    }
    return ok;
}


std::string SubscriptionTaskVo::getName() const
{
    return name_;
}

void SubscriptionTaskVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SubscriptionTaskVo::nameIsSet() const
{
    return nameIsSet_;
}

void SubscriptionTaskVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t SubscriptionTaskVo::getPeriodType() const
{
    return periodType_;
}

void SubscriptionTaskVo::setPeriodType(int32_t value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool SubscriptionTaskVo::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void SubscriptionTaskVo::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

std::string SubscriptionTaskVo::getEmails() const
{
    return emails_;
}

void SubscriptionTaskVo::setEmails(const std::string& value)
{
    emails_ = value;
    emailsIsSet_ = true;
}

bool SubscriptionTaskVo::emailsIsSet() const
{
    return emailsIsSet_;
}

void SubscriptionTaskVo::unsetemails()
{
    emailsIsSet_ = false;
}

std::string SubscriptionTaskVo::getDomainName() const
{
    return domainName_;
}

void SubscriptionTaskVo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool SubscriptionTaskVo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void SubscriptionTaskVo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string SubscriptionTaskVo::getReportType() const
{
    return reportType_;
}

void SubscriptionTaskVo::setReportType(const std::string& value)
{
    reportType_ = value;
    reportTypeIsSet_ = true;
}

bool SubscriptionTaskVo::reportTypeIsSet() const
{
    return reportTypeIsSet_;
}

void SubscriptionTaskVo::unsetreportType()
{
    reportTypeIsSet_ = false;
}

}
}
}
}
}


