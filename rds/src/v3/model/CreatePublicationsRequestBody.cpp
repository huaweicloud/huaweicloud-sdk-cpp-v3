

#include "huaweicloud/rds/v3/model/CreatePublicationsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreatePublicationsRequestBody::CreatePublicationsRequestBody()
{
    publicationName_ = "";
    publicationNameIsSet_ = false;
    publicationDatabase_ = "";
    publicationDatabaseIsSet_ = false;
    isCreateSnapshotImmediately_ = "";
    isCreateSnapshotImmediatelyIsSet_ = false;
    subscriptionOptionsIsSet_ = false;
    jobScheduleIsSet_ = false;
    isSelectAllTable_ = false;
    isSelectAllTableIsSet_ = false;
    extendTablesIsSet_ = false;
    tablesIsSet_ = false;
}

CreatePublicationsRequestBody::~CreatePublicationsRequestBody() = default;

void CreatePublicationsRequestBody::validate()
{
}

web::json::value CreatePublicationsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicationNameIsSet_) {
        val[utility::conversions::to_string_t("publication_name")] = ModelBase::toJson(publicationName_);
    }
    if(publicationDatabaseIsSet_) {
        val[utility::conversions::to_string_t("publication_database")] = ModelBase::toJson(publicationDatabase_);
    }
    if(isCreateSnapshotImmediatelyIsSet_) {
        val[utility::conversions::to_string_t("is_create_snapshot_immediately")] = ModelBase::toJson(isCreateSnapshotImmediately_);
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
bool CreatePublicationsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("is_create_snapshot_immediately"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_create_snapshot_immediately"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCreateSnapshotImmediately(refVal);
        }
    }
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


std::string CreatePublicationsRequestBody::getPublicationName() const
{
    return publicationName_;
}

void CreatePublicationsRequestBody::setPublicationName(const std::string& value)
{
    publicationName_ = value;
    publicationNameIsSet_ = true;
}

bool CreatePublicationsRequestBody::publicationNameIsSet() const
{
    return publicationNameIsSet_;
}

void CreatePublicationsRequestBody::unsetpublicationName()
{
    publicationNameIsSet_ = false;
}

std::string CreatePublicationsRequestBody::getPublicationDatabase() const
{
    return publicationDatabase_;
}

void CreatePublicationsRequestBody::setPublicationDatabase(const std::string& value)
{
    publicationDatabase_ = value;
    publicationDatabaseIsSet_ = true;
}

bool CreatePublicationsRequestBody::publicationDatabaseIsSet() const
{
    return publicationDatabaseIsSet_;
}

void CreatePublicationsRequestBody::unsetpublicationDatabase()
{
    publicationDatabaseIsSet_ = false;
}

std::string CreatePublicationsRequestBody::getIsCreateSnapshotImmediately() const
{
    return isCreateSnapshotImmediately_;
}

void CreatePublicationsRequestBody::setIsCreateSnapshotImmediately(const std::string& value)
{
    isCreateSnapshotImmediately_ = value;
    isCreateSnapshotImmediatelyIsSet_ = true;
}

bool CreatePublicationsRequestBody::isCreateSnapshotImmediatelyIsSet() const
{
    return isCreateSnapshotImmediatelyIsSet_;
}

void CreatePublicationsRequestBody::unsetisCreateSnapshotImmediately()
{
    isCreateSnapshotImmediatelyIsSet_ = false;
}

SubscriptionOption CreatePublicationsRequestBody::getSubscriptionOptions() const
{
    return subscriptionOptions_;
}

void CreatePublicationsRequestBody::setSubscriptionOptions(const SubscriptionOption& value)
{
    subscriptionOptions_ = value;
    subscriptionOptionsIsSet_ = true;
}

bool CreatePublicationsRequestBody::subscriptionOptionsIsSet() const
{
    return subscriptionOptionsIsSet_;
}

void CreatePublicationsRequestBody::unsetsubscriptionOptions()
{
    subscriptionOptionsIsSet_ = false;
}

OperateUsedJobSchedule CreatePublicationsRequestBody::getJobSchedule() const
{
    return jobSchedule_;
}

void CreatePublicationsRequestBody::setJobSchedule(const OperateUsedJobSchedule& value)
{
    jobSchedule_ = value;
    jobScheduleIsSet_ = true;
}

bool CreatePublicationsRequestBody::jobScheduleIsSet() const
{
    return jobScheduleIsSet_;
}

void CreatePublicationsRequestBody::unsetjobSchedule()
{
    jobScheduleIsSet_ = false;
}

bool CreatePublicationsRequestBody::isIsSelectAllTable() const
{
    return isSelectAllTable_;
}

void CreatePublicationsRequestBody::setIsSelectAllTable(bool value)
{
    isSelectAllTable_ = value;
    isSelectAllTableIsSet_ = true;
}

bool CreatePublicationsRequestBody::isSelectAllTableIsSet() const
{
    return isSelectAllTableIsSet_;
}

void CreatePublicationsRequestBody::unsetisSelectAllTable()
{
    isSelectAllTableIsSet_ = false;
}

std::vector<std::string>& CreatePublicationsRequestBody::getExtendTables()
{
    return extendTables_;
}

void CreatePublicationsRequestBody::setExtendTables(const std::vector<std::string>& value)
{
    extendTables_ = value;
    extendTablesIsSet_ = true;
}

bool CreatePublicationsRequestBody::extendTablesIsSet() const
{
    return extendTablesIsSet_;
}

void CreatePublicationsRequestBody::unsetextendTables()
{
    extendTablesIsSet_ = false;
}

std::vector<PublicationTableInfoRequest>& CreatePublicationsRequestBody::getTables()
{
    return tables_;
}

void CreatePublicationsRequestBody::setTables(const std::vector<PublicationTableInfoRequest>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool CreatePublicationsRequestBody::tablesIsSet() const
{
    return tablesIsSet_;
}

void CreatePublicationsRequestBody::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


