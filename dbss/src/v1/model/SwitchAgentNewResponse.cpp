

#include "huaweicloud/dbss/v1/model/SwitchAgentNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchAgentNewResponse::SwitchAgentNewResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

SwitchAgentNewResponse::~SwitchAgentNewResponse() = default;

void SwitchAgentNewResponse::validate()
{
}

web::json::value SwitchAgentNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool SwitchAgentNewResponse::fromJson(const web::json::value& val)
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


std::string SwitchAgentNewResponse::getResult() const
{
    return result_;
}

void SwitchAgentNewResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SwitchAgentNewResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SwitchAgentNewResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


