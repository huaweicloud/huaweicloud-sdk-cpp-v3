

#include "huaweicloud/gaussdb/v3/model/QueryTableRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




QueryTableRequestV3::QueryTableRequestV3()
{
    databaseTablesIsSet_ = false;
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    selectedTablesIsSet_ = false;
    filterType_ = "";
    filterTypeIsSet_ = false;
}

QueryTableRequestV3::~QueryTableRequestV3() = default;

void QueryTableRequestV3::validate()
{
}

web::json::value QueryTableRequestV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseTablesIsSet_) {
        val[utility::conversions::to_string_t("database_tables")] = ModelBase::toJson(databaseTables_);
    }
    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(selectedTablesIsSet_) {
        val[utility::conversions::to_string_t("selected_tables")] = ModelBase::toJson(selectedTables_);
    }
    if(filterTypeIsSet_) {
        val[utility::conversions::to_string_t("filter_type")] = ModelBase::toJson(filterType_);
    }

    return val;
}
bool QueryTableRequestV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseTablesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseTables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("selected_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selected_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseTablesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelectedTables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterType(refVal);
        }
    }
    return ok;
}


std::vector<DatabaseTablesInfo>& QueryTableRequestV3::getDatabaseTables()
{
    return databaseTables_;
}

void QueryTableRequestV3::setDatabaseTables(const std::vector<DatabaseTablesInfo>& value)
{
    databaseTables_ = value;
    databaseTablesIsSet_ = true;
}

bool QueryTableRequestV3::databaseTablesIsSet() const
{
    return databaseTablesIsSet_;
}

void QueryTableRequestV3::unsetdatabaseTables()
{
    databaseTablesIsSet_ = false;
}

std::string QueryTableRequestV3::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void QueryTableRequestV3::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool QueryTableRequestV3::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void QueryTableRequestV3::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::vector<DatabaseTablesInfo>& QueryTableRequestV3::getSelectedTables()
{
    return selectedTables_;
}

void QueryTableRequestV3::setSelectedTables(const std::vector<DatabaseTablesInfo>& value)
{
    selectedTables_ = value;
    selectedTablesIsSet_ = true;
}

bool QueryTableRequestV3::selectedTablesIsSet() const
{
    return selectedTablesIsSet_;
}

void QueryTableRequestV3::unsetselectedTables()
{
    selectedTablesIsSet_ = false;
}

std::string QueryTableRequestV3::getFilterType() const
{
    return filterType_;
}

void QueryTableRequestV3::setFilterType(const std::string& value)
{
    filterType_ = value;
    filterTypeIsSet_ = true;
}

bool QueryTableRequestV3::filterTypeIsSet() const
{
    return filterTypeIsSet_;
}

void QueryTableRequestV3::unsetfilterType()
{
    filterTypeIsSet_ = false;
}

}
}
}
}
}


