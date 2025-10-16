

#include "huaweicloud/rds/v3/model/QueryPublicationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




QueryPublicationInfo::QueryPublicationInfo()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    publicationName_ = "";
    publicationNameIsSet_ = false;
    publicationDatabase_ = "";
    publicationDatabaseIsSet_ = false;
    subscriptionCount_ = 0;
    subscriptionCountIsSet_ = false;
    subscriptionOptionsIsSet_ = false;
    jobScheduleIsSet_ = false;
    isSelectAllTable_ = false;
    isSelectAllTableIsSet_ = false;
    extendTablesIsSet_ = false;
    tablesIsSet_ = false;
}

QueryPublicationInfo::~QueryPublicationInfo() = default;

void QueryPublicationInfo::validate()
{
}

web::json::value QueryPublicationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(publicationNameIsSet_) {
        val[utility::conversions::to_string_t("publication_name")] = ModelBase::toJson(publicationName_);
    }
    if(publicationDatabaseIsSet_) {
        val[utility::conversions::to_string_t("publication_database")] = ModelBase::toJson(publicationDatabase_);
    }
    if(subscriptionCountIsSet_) {
        val[utility::conversions::to_string_t("subscription_count")] = ModelBase::toJson(subscriptionCount_);
    }
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
bool QueryPublicationInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_options"));
        if(!fieldValue.is_null())
        {
            SubscriptionOptionsResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_schedule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_schedule"));
        if(!fieldValue.is_null())
        {
            UsedJobSchedule refVal;
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
            std::vector<PublicationTableInfoResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string QueryPublicationInfo::getId() const
{
    return id_;
}

void QueryPublicationInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryPublicationInfo::idIsSet() const
{
    return idIsSet_;
}

void QueryPublicationInfo::unsetid()
{
    idIsSet_ = false;
}

std::string QueryPublicationInfo::getStatus() const
{
    return status_;
}

void QueryPublicationInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryPublicationInfo::statusIsSet() const
{
    return statusIsSet_;
}

void QueryPublicationInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryPublicationInfo::getPublicationName() const
{
    return publicationName_;
}

void QueryPublicationInfo::setPublicationName(const std::string& value)
{
    publicationName_ = value;
    publicationNameIsSet_ = true;
}

bool QueryPublicationInfo::publicationNameIsSet() const
{
    return publicationNameIsSet_;
}

void QueryPublicationInfo::unsetpublicationName()
{
    publicationNameIsSet_ = false;
}

std::string QueryPublicationInfo::getPublicationDatabase() const
{
    return publicationDatabase_;
}

void QueryPublicationInfo::setPublicationDatabase(const std::string& value)
{
    publicationDatabase_ = value;
    publicationDatabaseIsSet_ = true;
}

bool QueryPublicationInfo::publicationDatabaseIsSet() const
{
    return publicationDatabaseIsSet_;
}

void QueryPublicationInfo::unsetpublicationDatabase()
{
    publicationDatabaseIsSet_ = false;
}

int32_t QueryPublicationInfo::getSubscriptionCount() const
{
    return subscriptionCount_;
}

void QueryPublicationInfo::setSubscriptionCount(int32_t value)
{
    subscriptionCount_ = value;
    subscriptionCountIsSet_ = true;
}

bool QueryPublicationInfo::subscriptionCountIsSet() const
{
    return subscriptionCountIsSet_;
}

void QueryPublicationInfo::unsetsubscriptionCount()
{
    subscriptionCountIsSet_ = false;
}

SubscriptionOptionsResult QueryPublicationInfo::getSubscriptionOptions() const
{
    return subscriptionOptions_;
}

void QueryPublicationInfo::setSubscriptionOptions(const SubscriptionOptionsResult& value)
{
    subscriptionOptions_ = value;
    subscriptionOptionsIsSet_ = true;
}

bool QueryPublicationInfo::subscriptionOptionsIsSet() const
{
    return subscriptionOptionsIsSet_;
}

void QueryPublicationInfo::unsetsubscriptionOptions()
{
    subscriptionOptionsIsSet_ = false;
}

UsedJobSchedule QueryPublicationInfo::getJobSchedule() const
{
    return jobSchedule_;
}

void QueryPublicationInfo::setJobSchedule(const UsedJobSchedule& value)
{
    jobSchedule_ = value;
    jobScheduleIsSet_ = true;
}

bool QueryPublicationInfo::jobScheduleIsSet() const
{
    return jobScheduleIsSet_;
}

void QueryPublicationInfo::unsetjobSchedule()
{
    jobScheduleIsSet_ = false;
}

bool QueryPublicationInfo::isIsSelectAllTable() const
{
    return isSelectAllTable_;
}

void QueryPublicationInfo::setIsSelectAllTable(bool value)
{
    isSelectAllTable_ = value;
    isSelectAllTableIsSet_ = true;
}

bool QueryPublicationInfo::isSelectAllTableIsSet() const
{
    return isSelectAllTableIsSet_;
}

void QueryPublicationInfo::unsetisSelectAllTable()
{
    isSelectAllTableIsSet_ = false;
}

std::vector<std::string>& QueryPublicationInfo::getExtendTables()
{
    return extendTables_;
}

void QueryPublicationInfo::setExtendTables(const std::vector<std::string>& value)
{
    extendTables_ = value;
    extendTablesIsSet_ = true;
}

bool QueryPublicationInfo::extendTablesIsSet() const
{
    return extendTablesIsSet_;
}

void QueryPublicationInfo::unsetextendTables()
{
    extendTablesIsSet_ = false;
}

std::vector<PublicationTableInfoResponse>& QueryPublicationInfo::getTables()
{
    return tables_;
}

void QueryPublicationInfo::setTables(const std::vector<PublicationTableInfoResponse>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool QueryPublicationInfo::tablesIsSet() const
{
    return tablesIsSet_;
}

void QueryPublicationInfo::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


