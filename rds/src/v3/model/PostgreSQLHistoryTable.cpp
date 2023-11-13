

#include "huaweicloud/rds/v3/model/PostgreSQLHistoryTable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLHistoryTable::PostgreSQLHistoryTable()
{
    name_ = "";
    nameIsSet_ = false;
}

PostgreSQLHistoryTable::~PostgreSQLHistoryTable() = default;

void PostgreSQLHistoryTable::validate()
{
}

web::json::value PostgreSQLHistoryTable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool PostgreSQLHistoryTable::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string PostgreSQLHistoryTable::getName() const
{
    return name_;
}

void PostgreSQLHistoryTable::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgreSQLHistoryTable::nameIsSet() const
{
    return nameIsSet_;
}

void PostgreSQLHistoryTable::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


