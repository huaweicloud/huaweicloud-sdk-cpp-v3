

#include "huaweicloud/dbss/v1/model/CreateAuditDbAgentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateAuditDbAgentResponse::CreateAuditDbAgentResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

CreateAuditDbAgentResponse::~CreateAuditDbAgentResponse() = default;

void CreateAuditDbAgentResponse::validate()
{
}

web::json::value CreateAuditDbAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool CreateAuditDbAgentResponse::fromJson(const web::json::value& val)
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


std::string CreateAuditDbAgentResponse::getResult() const
{
    return result_;
}

void CreateAuditDbAgentResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateAuditDbAgentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateAuditDbAgentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


