

#include "huaweicloud/rds/v3/model/StartRecyclePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartRecyclePolicyResponse::StartRecyclePolicyResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

StartRecyclePolicyResponse::~StartRecyclePolicyResponse() = default;

void StartRecyclePolicyResponse::validate()
{
}

web::json::value StartRecyclePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StartRecyclePolicyResponse::fromJson(const web::json::value& val)
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


std::string StartRecyclePolicyResponse::getResult() const
{
    return result_;
}

void StartRecyclePolicyResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StartRecyclePolicyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StartRecyclePolicyResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


