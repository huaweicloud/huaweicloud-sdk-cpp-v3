

#include "huaweicloud/gaussdb/v3/model/ChDatabaseTableReplConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChDatabaseTableReplConfigInfo::ChDatabaseTableReplConfigInfo()
{
    replType_ = "";
    replTypeIsSet_ = false;
    tablesIsSet_ = false;
}

ChDatabaseTableReplConfigInfo::~ChDatabaseTableReplConfigInfo() = default;

void ChDatabaseTableReplConfigInfo::validate()
{
}

web::json::value ChDatabaseTableReplConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replTypeIsSet_) {
        val[utility::conversions::to_string_t("repl_type")] = ModelBase::toJson(replType_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool ChDatabaseTableReplConfigInfo::fromJson(const web::json::value& val)
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


std::string ChDatabaseTableReplConfigInfo::getReplType() const
{
    return replType_;
}

void ChDatabaseTableReplConfigInfo::setReplType(const std::string& value)
{
    replType_ = value;
    replTypeIsSet_ = true;
}

bool ChDatabaseTableReplConfigInfo::replTypeIsSet() const
{
    return replTypeIsSet_;
}

void ChDatabaseTableReplConfigInfo::unsetreplType()
{
    replTypeIsSet_ = false;
}

std::vector<std::string>& ChDatabaseTableReplConfigInfo::getTables()
{
    return tables_;
}

void ChDatabaseTableReplConfigInfo::setTables(const std::vector<std::string>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool ChDatabaseTableReplConfigInfo::tablesIsSet() const
{
    return tablesIsSet_;
}

void ChDatabaseTableReplConfigInfo::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


