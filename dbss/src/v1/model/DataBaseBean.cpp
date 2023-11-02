

#include "huaweicloud/dbss/v1/model/DataBaseBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DataBaseBean::DataBaseBean()
{
    databaseIsSet_ = false;
}

DataBaseBean::~DataBaseBean() = default;

void DataBaseBean::validate()
{
}

web::json::value DataBaseBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }

    return val;
}
bool DataBaseBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            DataBase refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    return ok;
}


DataBase DataBaseBean::getDatabase() const
{
    return database_;
}

void DataBaseBean::setDatabase(const DataBase& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool DataBaseBean::databaseIsSet() const
{
    return databaseIsSet_;
}

void DataBaseBean::unsetdatabase()
{
    databaseIsSet_ = false;
}

}
}
}
}
}


