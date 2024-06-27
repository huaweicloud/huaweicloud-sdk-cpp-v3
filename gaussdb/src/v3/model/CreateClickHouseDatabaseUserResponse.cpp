

#include "huaweicloud/gaussdb/v3/model/CreateClickHouseDatabaseUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateClickHouseDatabaseUserResponse::CreateClickHouseDatabaseUserResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

CreateClickHouseDatabaseUserResponse::~CreateClickHouseDatabaseUserResponse() = default;

void CreateClickHouseDatabaseUserResponse::validate()
{
}

web::json::value CreateClickHouseDatabaseUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool CreateClickHouseDatabaseUserResponse::fromJson(const web::json::value& val)
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


std::string CreateClickHouseDatabaseUserResponse::getResult() const
{
    return result_;
}

void CreateClickHouseDatabaseUserResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateClickHouseDatabaseUserResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateClickHouseDatabaseUserResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


