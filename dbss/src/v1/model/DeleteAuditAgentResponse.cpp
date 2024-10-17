

#include "huaweicloud/dbss/v1/model/DeleteAuditAgentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditAgentResponse::DeleteAuditAgentResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteAuditAgentResponse::~DeleteAuditAgentResponse() = default;

void DeleteAuditAgentResponse::validate()
{
}

web::json::value DeleteAuditAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteAuditAgentResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditAgentResponse::getResult() const
{
    return result_;
}

void DeleteAuditAgentResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteAuditAgentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteAuditAgentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


