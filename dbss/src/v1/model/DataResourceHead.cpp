

#include "huaweicloud/dbss/v1/model/DataResourceHead.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DataResourceHead::DataResourceHead()
{
    alias_ = "";
    aliasIsSet_ = false;
    datastoreIsSet_ = false;
    dbIp_ = "";
    dbIpIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    dbPort_ = "";
    dbPortIsSet_ = false;
    dbUserListIsSet_ = false;
    provider_ = "";
    providerIsSet_ = false;
    rdsId_ = "";
    rdsIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

DataResourceHead::~DataResourceHead() = default;

void DataResourceHead::validate()
{
}

web::json::value DataResourceHead::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(dbIpIsSet_) {
        val[utility::conversions::to_string_t("db_ip")] = ModelBase::toJson(dbIp_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(dbPortIsSet_) {
        val[utility::conversions::to_string_t("db_port")] = ModelBase::toJson(dbPort_);
    }
    if(dbUserListIsSet_) {
        val[utility::conversions::to_string_t("db_user_list")] = ModelBase::toJson(dbUserList_);
    }
    if(providerIsSet_) {
        val[utility::conversions::to_string_t("provider")] = ModelBase::toJson(provider_);
    }
    if(rdsIdIsSet_) {
        val[utility::conversions::to_string_t("rds_id")] = ModelBase::toJson(rdsId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool DataResourceHead::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            DbDataStore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_user_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DbUser> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUserList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rds_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rds_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRdsId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string DataResourceHead::getAlias() const
{
    return alias_;
}

void DataResourceHead::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool DataResourceHead::aliasIsSet() const
{
    return aliasIsSet_;
}

void DataResourceHead::unsetalias()
{
    aliasIsSet_ = false;
}

DbDataStore DataResourceHead::getDatastore() const
{
    return datastore_;
}

void DataResourceHead::setDatastore(const DbDataStore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool DataResourceHead::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void DataResourceHead::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string DataResourceHead::getDbIp() const
{
    return dbIp_;
}

void DataResourceHead::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool DataResourceHead::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void DataResourceHead::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string DataResourceHead::getDbName() const
{
    return dbName_;
}

void DataResourceHead::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DataResourceHead::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DataResourceHead::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string DataResourceHead::getDbPort() const
{
    return dbPort_;
}

void DataResourceHead::setDbPort(const std::string& value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool DataResourceHead::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void DataResourceHead::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::vector<DbUser>& DataResourceHead::getDbUserList()
{
    return dbUserList_;
}

void DataResourceHead::setDbUserList(const std::vector<DbUser>& value)
{
    dbUserList_ = value;
    dbUserListIsSet_ = true;
}

bool DataResourceHead::dbUserListIsSet() const
{
    return dbUserListIsSet_;
}

void DataResourceHead::unsetdbUserList()
{
    dbUserListIsSet_ = false;
}

std::string DataResourceHead::getProvider() const
{
    return provider_;
}

void DataResourceHead::setProvider(const std::string& value)
{
    provider_ = value;
    providerIsSet_ = true;
}

bool DataResourceHead::providerIsSet() const
{
    return providerIsSet_;
}

void DataResourceHead::unsetprovider()
{
    providerIsSet_ = false;
}

std::string DataResourceHead::getRdsId() const
{
    return rdsId_;
}

void DataResourceHead::setRdsId(const std::string& value)
{
    rdsId_ = value;
    rdsIdIsSet_ = true;
}

bool DataResourceHead::rdsIdIsSet() const
{
    return rdsIdIsSet_;
}

void DataResourceHead::unsetrdsId()
{
    rdsIdIsSet_ = false;
}

std::string DataResourceHead::getStatus() const
{
    return status_;
}

void DataResourceHead::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DataResourceHead::statusIsSet() const
{
    return statusIsSet_;
}

void DataResourceHead::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DataResourceHead::getType() const
{
    return type_;
}

void DataResourceHead::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DataResourceHead::typeIsSet() const
{
    return typeIsSet_;
}

void DataResourceHead::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


