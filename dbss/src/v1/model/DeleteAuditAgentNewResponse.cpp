

#include "huaweicloud/dbss/v1/model/DeleteAuditAgentNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditAgentNewResponse::DeleteAuditAgentNewResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteAuditAgentNewResponse::~DeleteAuditAgentNewResponse() = default;

void DeleteAuditAgentNewResponse::validate()
{
}

web::json::value DeleteAuditAgentNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteAuditAgentNewResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditAgentNewResponse::getResult() const
{
    return result_;
}

void DeleteAuditAgentNewResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteAuditAgentNewResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteAuditAgentNewResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


