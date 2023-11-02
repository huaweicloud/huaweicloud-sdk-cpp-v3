

#include "huaweicloud/dbss/v1/model/SwitchAgentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchAgentResponse::SwitchAgentResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

SwitchAgentResponse::~SwitchAgentResponse() = default;

void SwitchAgentResponse::validate()
{
}

web::json::value SwitchAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool SwitchAgentResponse::fromJson(const web::json::value& val)
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


std::string SwitchAgentResponse::getResult() const
{
    return result_;
}

void SwitchAgentResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SwitchAgentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SwitchAgentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


