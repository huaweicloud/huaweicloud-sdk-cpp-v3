

#include "huaweicloud/gaussdb/v3/model/ListStarRocksDbParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarRocksDbParametersResponse::ListStarRocksDbParametersResponse()
{
    dbParametersIsSet_ = false;
}

ListStarRocksDbParametersResponse::~ListStarRocksDbParametersResponse() = default;

void ListStarRocksDbParametersResponse::validate()
{
}

web::json::value ListStarRocksDbParametersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbParametersIsSet_) {
        val[utility::conversions::to_string_t("db_parameters")] = ModelBase::toJson(dbParameters_);
    }

    return val;
}
bool ListStarRocksDbParametersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<DbParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbParameters(refVal);
        }
    }
    return ok;
}


std::vector<DbParameter>& ListStarRocksDbParametersResponse::getDbParameters()
{
    return dbParameters_;
}

void ListStarRocksDbParametersResponse::setDbParameters(const std::vector<DbParameter>& value)
{
    dbParameters_ = value;
    dbParametersIsSet_ = true;
}

bool ListStarRocksDbParametersResponse::dbParametersIsSet() const
{
    return dbParametersIsSet_;
}

void ListStarRocksDbParametersResponse::unsetdbParameters()
{
    dbParametersIsSet_ = false;
}

}
}
}
}
}


