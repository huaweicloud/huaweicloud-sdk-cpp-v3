

#include "huaweicloud/lts/v2/model/UpdateSwitchResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateSwitchResponse::UpdateSwitchResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateSwitchResponse::~UpdateSwitchResponse() = default;

void UpdateSwitchResponse::validate()
{
}

web::json::value UpdateSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool UpdateSwitchResponse::fromJson(const web::json::value& val)
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

std::string UpdateSwitchResponse::getResult() const
{
    return result_;
}

void UpdateSwitchResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateSwitchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateSwitchResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


