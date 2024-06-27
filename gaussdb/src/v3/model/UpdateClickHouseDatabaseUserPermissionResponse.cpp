

#include "huaweicloud/gaussdb/v3/model/UpdateClickHouseDatabaseUserPermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateClickHouseDatabaseUserPermissionResponse::UpdateClickHouseDatabaseUserPermissionResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateClickHouseDatabaseUserPermissionResponse::~UpdateClickHouseDatabaseUserPermissionResponse() = default;

void UpdateClickHouseDatabaseUserPermissionResponse::validate()
{
}

web::json::value UpdateClickHouseDatabaseUserPermissionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateClickHouseDatabaseUserPermissionResponse::fromJson(const web::json::value& val)
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


std::string UpdateClickHouseDatabaseUserPermissionResponse::getResult() const
{
    return result_;
}

void UpdateClickHouseDatabaseUserPermissionResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateClickHouseDatabaseUserPermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateClickHouseDatabaseUserPermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


