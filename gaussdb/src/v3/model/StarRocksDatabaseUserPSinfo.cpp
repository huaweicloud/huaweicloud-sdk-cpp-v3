

#include "huaweicloud/gaussdb/v3/model/StarRocksDatabaseUserPSinfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksDatabaseUserPSinfo::StarRocksDatabaseUserPSinfo()
{
    userName_ = "";
    userNameIsSet_ = false;
    databasesIsSet_ = false;
    dml_ = 0;
    dmlIsSet_ = false;
    ddl_ = 0;
    ddlIsSet_ = false;
}

StarRocksDatabaseUserPSinfo::~StarRocksDatabaseUserPSinfo() = default;

void StarRocksDatabaseUserPSinfo::validate()
{
}

web::json::value StarRocksDatabaseUserPSinfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(dmlIsSet_) {
        val[utility::conversions::to_string_t("dml")] = ModelBase::toJson(dml_);
    }
    if(ddlIsSet_) {
        val[utility::conversions::to_string_t("ddl")] = ModelBase::toJson(ddl_);
    }

    return val;
}
bool StarRocksDatabaseUserPSinfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dml"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dml"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDml(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdl(refVal);
        }
    }
    return ok;
}


std::string StarRocksDatabaseUserPSinfo::getUserName() const
{
    return userName_;
}

void StarRocksDatabaseUserPSinfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool StarRocksDatabaseUserPSinfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void StarRocksDatabaseUserPSinfo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::vector<std::string>& StarRocksDatabaseUserPSinfo::getDatabases()
{
    return databases_;
}

void StarRocksDatabaseUserPSinfo::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool StarRocksDatabaseUserPSinfo::databasesIsSet() const
{
    return databasesIsSet_;
}

void StarRocksDatabaseUserPSinfo::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t StarRocksDatabaseUserPSinfo::getDml() const
{
    return dml_;
}

void StarRocksDatabaseUserPSinfo::setDml(int32_t value)
{
    dml_ = value;
    dmlIsSet_ = true;
}

bool StarRocksDatabaseUserPSinfo::dmlIsSet() const
{
    return dmlIsSet_;
}

void StarRocksDatabaseUserPSinfo::unsetdml()
{
    dmlIsSet_ = false;
}

int32_t StarRocksDatabaseUserPSinfo::getDdl() const
{
    return ddl_;
}

void StarRocksDatabaseUserPSinfo::setDdl(int32_t value)
{
    ddl_ = value;
    ddlIsSet_ = true;
}

bool StarRocksDatabaseUserPSinfo::ddlIsSet() const
{
    return ddlIsSet_;
}

void StarRocksDatabaseUserPSinfo::unsetddl()
{
    ddlIsSet_ = false;
}

}
}
}
}
}


