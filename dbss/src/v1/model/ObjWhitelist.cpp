

#include "huaweicloud/dbss/v1/model/ObjWhitelist.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ObjWhitelist::ObjWhitelist()
{
    dbIdsIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    sql_ = "";
    sqlIsSet_ = false;
}

ObjWhitelist::~ObjWhitelist() = default;

void ObjWhitelist::validate()
{
}

web::json::value ObjWhitelist::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }

    return val;
}
bool ObjWhitelist::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ObjWhitelist::getDbIds()
{
    return dbIds_;
}

void ObjWhitelist::setDbIds(const std::vector<std::string>& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool ObjWhitelist::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void ObjWhitelist::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string ObjWhitelist::getDesc() const
{
    return desc_;
}

void ObjWhitelist::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool ObjWhitelist::descIsSet() const
{
    return descIsSet_;
}

void ObjWhitelist::unsetdesc()
{
    descIsSet_ = false;
}

bool ObjWhitelist::isEnabled() const
{
    return enabled_;
}

void ObjWhitelist::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ObjWhitelist::enabledIsSet() const
{
    return enabledIsSet_;
}

void ObjWhitelist::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string ObjWhitelist::getSql() const
{
    return sql_;
}

void ObjWhitelist::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool ObjWhitelist::sqlIsSet() const
{
    return sqlIsSet_;
}

void ObjWhitelist::unsetsql()
{
    sqlIsSet_ = false;
}

}
}
}
}
}


