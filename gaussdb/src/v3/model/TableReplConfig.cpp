

#include "huaweicloud/gaussdb/v3/model/TableReplConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TableReplConfig::TableReplConfig()
{
    replType_ = "";
    replTypeIsSet_ = false;
    replScope_ = "";
    replScopeIsSet_ = false;
    tablesIsSet_ = false;
}

TableReplConfig::~TableReplConfig() = default;

void TableReplConfig::validate()
{
}

web::json::value TableReplConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replTypeIsSet_) {
        val[utility::conversions::to_string_t("repl_type")] = ModelBase::toJson(replType_);
    }
    if(replScopeIsSet_) {
        val[utility::conversions::to_string_t("repl_scope")] = ModelBase::toJson(replScope_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool TableReplConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repl_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repl_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repl_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repl_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string TableReplConfig::getReplType() const
{
    return replType_;
}

void TableReplConfig::setReplType(const std::string& value)
{
    replType_ = value;
    replTypeIsSet_ = true;
}

bool TableReplConfig::replTypeIsSet() const
{
    return replTypeIsSet_;
}

void TableReplConfig::unsetreplType()
{
    replTypeIsSet_ = false;
}

std::string TableReplConfig::getReplScope() const
{
    return replScope_;
}

void TableReplConfig::setReplScope(const std::string& value)
{
    replScope_ = value;
    replScopeIsSet_ = true;
}

bool TableReplConfig::replScopeIsSet() const
{
    return replScopeIsSet_;
}

void TableReplConfig::unsetreplScope()
{
    replScopeIsSet_ = false;
}

std::vector<std::string>& TableReplConfig::getTables()
{
    return tables_;
}

void TableReplConfig::setTables(const std::vector<std::string>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool TableReplConfig::tablesIsSet() const
{
    return tablesIsSet_;
}

void TableReplConfig::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


