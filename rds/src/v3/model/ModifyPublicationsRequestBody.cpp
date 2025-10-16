

#include "huaweicloud/rds/v3/model/ModifyPublicationsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyPublicationsRequestBody::ModifyPublicationsRequestBody()
{
    subscriptionOptionsIsSet_ = false;
    jobScheduleIsSet_ = false;
    isSelectAllTable_ = false;
    isSelectAllTableIsSet_ = false;
    extendTablesIsSet_ = false;
    tablesIsSet_ = false;
}

ModifyPublicationsRequestBody::~ModifyPublicationsRequestBody() = default;

void ModifyPublicationsRequestBody::validate()
{
}

web::json::value ModifyPublicationsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionOptionsIsSet_) {
        val[utility::conversions::to_string_t("subscription_options")] = ModelBase::toJson(subscriptionOptions_);
    }
    if(jobScheduleIsSet_) {
        val[utility::conversions::to_string_t("job_schedule")] = ModelBase::toJson(jobSchedule_);
    }
    if(isSelectAllTableIsSet_) {
        val[utility::conversions::to_string_t("is_select_all_table")] = ModelBase::toJson(isSelectAllTable_);
    }
    if(extendTablesIsSet_) {
        val[utility::conversions::to_string_t("extend_tables")] = ModelBase::toJson(extendTables_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool ModifyPublicationsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscription_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_options"));
        if(!fieldValue.is_null())
        {
            SubscriptionOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_schedule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_schedule"));
        if(!fieldValue.is_null())
        {
            OperateUsedJobSchedule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobSchedule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_select_all_table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_select_all_table"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSelectAllTable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendTables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicationTableInfoRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


SubscriptionOption ModifyPublicationsRequestBody::getSubscriptionOptions() const
{
    return subscriptionOptions_;
}

void ModifyPublicationsRequestBody::setSubscriptionOptions(const SubscriptionOption& value)
{
    subscriptionOptions_ = value;
    subscriptionOptionsIsSet_ = true;
}

bool ModifyPublicationsRequestBody::subscriptionOptionsIsSet() const
{
    return subscriptionOptionsIsSet_;
}

void ModifyPublicationsRequestBody::unsetsubscriptionOptions()
{
    subscriptionOptionsIsSet_ = false;
}

OperateUsedJobSchedule ModifyPublicationsRequestBody::getJobSchedule() const
{
    return jobSchedule_;
}

void ModifyPublicationsRequestBody::setJobSchedule(const OperateUsedJobSchedule& value)
{
    jobSchedule_ = value;
    jobScheduleIsSet_ = true;
}

bool ModifyPublicationsRequestBody::jobScheduleIsSet() const
{
    return jobScheduleIsSet_;
}

void ModifyPublicationsRequestBody::unsetjobSchedule()
{
    jobScheduleIsSet_ = false;
}

bool ModifyPublicationsRequestBody::isIsSelectAllTable() const
{
    return isSelectAllTable_;
}

void ModifyPublicationsRequestBody::setIsSelectAllTable(bool value)
{
    isSelectAllTable_ = value;
    isSelectAllTableIsSet_ = true;
}

bool ModifyPublicationsRequestBody::isSelectAllTableIsSet() const
{
    return isSelectAllTableIsSet_;
}

void ModifyPublicationsRequestBody::unsetisSelectAllTable()
{
    isSelectAllTableIsSet_ = false;
}

std::vector<std::string>& ModifyPublicationsRequestBody::getExtendTables()
{
    return extendTables_;
}

void ModifyPublicationsRequestBody::setExtendTables(const std::vector<std::string>& value)
{
    extendTables_ = value;
    extendTablesIsSet_ = true;
}

bool ModifyPublicationsRequestBody::extendTablesIsSet() const
{
    return extendTablesIsSet_;
}

void ModifyPublicationsRequestBody::unsetextendTables()
{
    extendTablesIsSet_ = false;
}

std::vector<PublicationTableInfoRequest>& ModifyPublicationsRequestBody::getTables()
{
    return tables_;
}

void ModifyPublicationsRequestBody::setTables(const std::vector<PublicationTableInfoRequest>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool ModifyPublicationsRequestBody::tablesIsSet() const
{
    return tablesIsSet_;
}

void ModifyPublicationsRequestBody::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


