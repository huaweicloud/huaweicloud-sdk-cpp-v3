

#include "huaweicloud/gaussdbforopengauss/v3/model/SchemaVolumeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SchemaVolumeResult::SchemaVolumeResult()
{
    schemaSize_ = "";
    schemaSizeIsSet_ = false;
    tableCount_ = "";
    tableCountIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    nspName_ = "";
    nspNameIsSet_ = false;
}

SchemaVolumeResult::~SchemaVolumeResult() = default;

void SchemaVolumeResult::validate()
{
}

web::json::value SchemaVolumeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schemaSizeIsSet_) {
        val[utility::conversions::to_string_t("schema_size")] = ModelBase::toJson(schemaSize_);
    }
    if(tableCountIsSet_) {
        val[utility::conversions::to_string_t("table_count")] = ModelBase::toJson(tableCount_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nspNameIsSet_) {
        val[utility::conversions::to_string_t("nsp_name")] = ModelBase::toJson(nspName_);
    }

    return val;
}
bool SchemaVolumeResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schema_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nsp_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nsp_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNspName(refVal);
        }
    }
    return ok;
}


std::string SchemaVolumeResult::getSchemaSize() const
{
    return schemaSize_;
}

void SchemaVolumeResult::setSchemaSize(const std::string& value)
{
    schemaSize_ = value;
    schemaSizeIsSet_ = true;
}

bool SchemaVolumeResult::schemaSizeIsSet() const
{
    return schemaSizeIsSet_;
}

void SchemaVolumeResult::unsetschemaSize()
{
    schemaSizeIsSet_ = false;
}

std::string SchemaVolumeResult::getTableCount() const
{
    return tableCount_;
}

void SchemaVolumeResult::setTableCount(const std::string& value)
{
    tableCount_ = value;
    tableCountIsSet_ = true;
}

bool SchemaVolumeResult::tableCountIsSet() const
{
    return tableCountIsSet_;
}

void SchemaVolumeResult::unsettableCount()
{
    tableCountIsSet_ = false;
}

std::string SchemaVolumeResult::getUserName() const
{
    return userName_;
}

void SchemaVolumeResult::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool SchemaVolumeResult::userNameIsSet() const
{
    return userNameIsSet_;
}

void SchemaVolumeResult::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string SchemaVolumeResult::getNspName() const
{
    return nspName_;
}

void SchemaVolumeResult::setNspName(const std::string& value)
{
    nspName_ = value;
    nspNameIsSet_ = true;
}

bool SchemaVolumeResult::nspNameIsSet() const
{
    return nspNameIsSet_;
}

void SchemaVolumeResult::unsetnspName()
{
    nspNameIsSet_ = false;
}

}
}
}
}
}


