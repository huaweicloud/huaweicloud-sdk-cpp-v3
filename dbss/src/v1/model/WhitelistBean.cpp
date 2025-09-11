

#include "huaweicloud/dbss/v1/model/WhitelistBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




WhitelistBean::WhitelistBean()
{
    createTimestampMs_ = 0L;
    createTimestampMsIsSet_ = false;
    dbIdsIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    sql_ = "";
    sqlIsSet_ = false;
    updateTimestampMs_ = 0L;
    updateTimestampMsIsSet_ = false;
}

WhitelistBean::~WhitelistBean() = default;

void WhitelistBean::validate()
{
}

web::json::value WhitelistBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimestampMsIsSet_) {
        val[utility::conversions::to_string_t("create_timestamp_ms")] = ModelBase::toJson(createTimestampMs_);
    }
    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }
    if(updateTimestampMsIsSet_) {
        val[utility::conversions::to_string_t("update_timestamp_ms")] = ModelBase::toJson(updateTimestampMs_);
    }

    return val;
}
bool WhitelistBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_timestamp_ms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_timestamp_ms"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimestampMs(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_timestamp_ms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_timestamp_ms"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestampMs(refVal);
        }
    }
    return ok;
}


int64_t WhitelistBean::getCreateTimestampMs() const
{
    return createTimestampMs_;
}

void WhitelistBean::setCreateTimestampMs(int64_t value)
{
    createTimestampMs_ = value;
    createTimestampMsIsSet_ = true;
}

bool WhitelistBean::createTimestampMsIsSet() const
{
    return createTimestampMsIsSet_;
}

void WhitelistBean::unsetcreateTimestampMs()
{
    createTimestampMsIsSet_ = false;
}

std::vector<std::string>& WhitelistBean::getDbIds()
{
    return dbIds_;
}

void WhitelistBean::setDbIds(const std::vector<std::string>& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool WhitelistBean::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void WhitelistBean::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string WhitelistBean::getDesc() const
{
    return desc_;
}

void WhitelistBean::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool WhitelistBean::descIsSet() const
{
    return descIsSet_;
}

void WhitelistBean::unsetdesc()
{
    descIsSet_ = false;
}

bool WhitelistBean::isEnabled() const
{
    return enabled_;
}

void WhitelistBean::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool WhitelistBean::enabledIsSet() const
{
    return enabledIsSet_;
}

void WhitelistBean::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string WhitelistBean::getId() const
{
    return id_;
}

void WhitelistBean::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WhitelistBean::idIsSet() const
{
    return idIsSet_;
}

void WhitelistBean::unsetid()
{
    idIsSet_ = false;
}

std::string WhitelistBean::getSql() const
{
    return sql_;
}

void WhitelistBean::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool WhitelistBean::sqlIsSet() const
{
    return sqlIsSet_;
}

void WhitelistBean::unsetsql()
{
    sqlIsSet_ = false;
}

int64_t WhitelistBean::getUpdateTimestampMs() const
{
    return updateTimestampMs_;
}

void WhitelistBean::setUpdateTimestampMs(int64_t value)
{
    updateTimestampMs_ = value;
    updateTimestampMsIsSet_ = true;
}

bool WhitelistBean::updateTimestampMsIsSet() const
{
    return updateTimestampMsIsSet_;
}

void WhitelistBean::unsetupdateTimestampMs()
{
    updateTimestampMsIsSet_ = false;
}

}
}
}
}
}


