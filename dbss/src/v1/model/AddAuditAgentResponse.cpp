

#include "huaweicloud/dbss/v1/model/AddAuditAgentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddAuditAgentResponse::AddAuditAgentResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

AddAuditAgentResponse::~AddAuditAgentResponse() = default;

void AddAuditAgentResponse::validate()
{
}

web::json::value AddAuditAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool AddAuditAgentResponse::fromJson(const web::json::value& val)
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


std::string AddAuditAgentResponse::getResult() const
{
    return result_;
}

void AddAuditAgentResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddAuditAgentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddAuditAgentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


