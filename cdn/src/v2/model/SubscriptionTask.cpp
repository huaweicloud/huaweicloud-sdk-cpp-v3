

#include "huaweicloud/cdn/v2/model/SubscriptionTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SubscriptionTask::SubscriptionTask()
{
    id_ = 0L;
    idIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
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

SubscriptionTask::~SubscriptionTask() = default;

void SubscriptionTask::validate()
{
}

web::json::value SubscriptionTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
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
bool SubscriptionTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
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


int64_t SubscriptionTask::getId() const
{
    return id_;
}

void SubscriptionTask::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SubscriptionTask::idIsSet() const
{
    return idIsSet_;
}

void SubscriptionTask::unsetid()
{
    idIsSet_ = false;
}

int64_t SubscriptionTask::getCreateTime() const
{
    return createTime_;
}

void SubscriptionTask::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SubscriptionTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SubscriptionTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t SubscriptionTask::getUpdateTime() const
{
    return updateTime_;
}

void SubscriptionTask::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool SubscriptionTask::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void SubscriptionTask::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string SubscriptionTask::getName() const
{
    return name_;
}

void SubscriptionTask::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SubscriptionTask::nameIsSet() const
{
    return nameIsSet_;
}

void SubscriptionTask::unsetname()
{
    nameIsSet_ = false;
}

int32_t SubscriptionTask::getPeriodType() const
{
    return periodType_;
}

void SubscriptionTask::setPeriodType(int32_t value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool SubscriptionTask::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void SubscriptionTask::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

std::string SubscriptionTask::getEmails() const
{
    return emails_;
}

void SubscriptionTask::setEmails(const std::string& value)
{
    emails_ = value;
    emailsIsSet_ = true;
}

bool SubscriptionTask::emailsIsSet() const
{
    return emailsIsSet_;
}

void SubscriptionTask::unsetemails()
{
    emailsIsSet_ = false;
}

std::string SubscriptionTask::getDomainName() const
{
    return domainName_;
}

void SubscriptionTask::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool SubscriptionTask::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void SubscriptionTask::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string SubscriptionTask::getReportType() const
{
    return reportType_;
}

void SubscriptionTask::setReportType(const std::string& value)
{
    reportType_ = value;
    reportTypeIsSet_ = true;
}

bool SubscriptionTask::reportTypeIsSet() const
{
    return reportTypeIsSet_;
}

void SubscriptionTask::unsetreportType()
{
    reportTypeIsSet_ = false;
}

}
}
}
}
}


