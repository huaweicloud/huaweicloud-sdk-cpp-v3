

#include "huaweicloud/dbss/v1/model/AddDatabaseSslKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddDatabaseSslKeyResponse::AddDatabaseSslKeyResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

AddDatabaseSslKeyResponse::~AddDatabaseSslKeyResponse() = default;

void AddDatabaseSslKeyResponse::validate()
{
}

web::json::value AddDatabaseSslKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool AddDatabaseSslKeyResponse::fromJson(const web::json::value& val)
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


std::string AddDatabaseSslKeyResponse::getResult() const
{
    return result_;
}

void AddDatabaseSslKeyResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddDatabaseSslKeyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddDatabaseSslKeyResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


