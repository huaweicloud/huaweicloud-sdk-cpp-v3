

#include "huaweicloud/drs/v5/model/DeleteColumnInfoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteColumnInfoReq::DeleteColumnInfoReq()
{
    tableIdsIsSet_ = false;
    schemaIdsIsSet_ = false;
    dbIdsIsSet_ = false;
}

DeleteColumnInfoReq::~DeleteColumnInfoReq() = default;

void DeleteColumnInfoReq::validate()
{
}

web::json::value DeleteColumnInfoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableIdsIsSet_) {
        val[utility::conversions::to_string_t("table_ids")] = ModelBase::toJson(tableIds_);
    }
    if(schemaIdsIsSet_) {
        val[utility::conversions::to_string_t("schema_ids")] = ModelBase::toJson(schemaIds_);
    }
    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }

    return val;
}
bool DeleteColumnInfoReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaIds(refVal);
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
    return ok;
}


std::vector<std::string>& DeleteColumnInfoReq::getTableIds()
{
    return tableIds_;
}

void DeleteColumnInfoReq::setTableIds(const std::vector<std::string>& value)
{
    tableIds_ = value;
    tableIdsIsSet_ = true;
}

bool DeleteColumnInfoReq::tableIdsIsSet() const
{
    return tableIdsIsSet_;
}

void DeleteColumnInfoReq::unsettableIds()
{
    tableIdsIsSet_ = false;
}

std::vector<std::string>& DeleteColumnInfoReq::getSchemaIds()
{
    return schemaIds_;
}

void DeleteColumnInfoReq::setSchemaIds(const std::vector<std::string>& value)
{
    schemaIds_ = value;
    schemaIdsIsSet_ = true;
}

bool DeleteColumnInfoReq::schemaIdsIsSet() const
{
    return schemaIdsIsSet_;
}

void DeleteColumnInfoReq::unsetschemaIds()
{
    schemaIdsIsSet_ = false;
}

std::vector<std::string>& DeleteColumnInfoReq::getDbIds()
{
    return dbIds_;
}

void DeleteColumnInfoReq::setDbIds(const std::vector<std::string>& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool DeleteColumnInfoReq::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void DeleteColumnInfoReq::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

}
}
}
}
}


