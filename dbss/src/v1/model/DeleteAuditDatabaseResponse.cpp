

#include "huaweicloud/dbss/v1/model/DeleteAuditDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditDatabaseResponse::DeleteAuditDatabaseResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteAuditDatabaseResponse::~DeleteAuditDatabaseResponse() = default;

void DeleteAuditDatabaseResponse::validate()
{
}

web::json::value DeleteAuditDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteAuditDatabaseResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditDatabaseResponse::getResult() const
{
    return result_;
}

void DeleteAuditDatabaseResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteAuditDatabaseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteAuditDatabaseResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


