

#include "huaweicloud/gaussdb/v3/model/DeleteClickHouseDatabaseUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteClickHouseDatabaseUserResponse::DeleteClickHouseDatabaseUserResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteClickHouseDatabaseUserResponse::~DeleteClickHouseDatabaseUserResponse() = default;

void DeleteClickHouseDatabaseUserResponse::validate()
{
}

web::json::value DeleteClickHouseDatabaseUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteClickHouseDatabaseUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string DeleteClickHouseDatabaseUserResponse::getResult() const
{
    return result_;
}

void DeleteClickHouseDatabaseUserResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteClickHouseDatabaseUserResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteClickHouseDatabaseUserResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


