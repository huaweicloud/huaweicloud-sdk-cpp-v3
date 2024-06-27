

#include "huaweicloud/gaussdb/v3/model/ListClickHouseDataBaseParameterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseDataBaseParameterResponse::ListClickHouseDataBaseParameterResponse()
{
    dbParametersIsSet_ = false;
}

ListClickHouseDataBaseParameterResponse::~ListClickHouseDataBaseParameterResponse() = default;

void ListClickHouseDataBaseParameterResponse::validate()
{
}

web::json::value ListClickHouseDataBaseParameterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbParametersIsSet_) {
        val[utility::conversions::to_string_t("db_parameters")] = ModelBase::toJson(dbParameters_);
    }

    return val;
}
bool ListClickHouseDataBaseParameterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<ChDatabaseParameterInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbParameters(refVal);
        }
    }
    return ok;
}


std::vector<ChDatabaseParameterInfo>& ListClickHouseDataBaseParameterResponse::getDbParameters()
{
    return dbParameters_;
}

void ListClickHouseDataBaseParameterResponse::setDbParameters(const std::vector<ChDatabaseParameterInfo>& value)
{
    dbParameters_ = value;
    dbParametersIsSet_ = true;
}

bool ListClickHouseDataBaseParameterResponse::dbParametersIsSet() const
{
    return dbParametersIsSet_;
}

void ListClickHouseDataBaseParameterResponse::unsetdbParameters()
{
    dbParametersIsSet_ = false;
}

}
}
}
}
}


