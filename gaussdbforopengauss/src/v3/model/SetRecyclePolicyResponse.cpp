

#include "huaweicloud/gaussdbforopengauss/v3/model/SetRecyclePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SetRecyclePolicyResponse::SetRecyclePolicyResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

SetRecyclePolicyResponse::~SetRecyclePolicyResponse() = default;

void SetRecyclePolicyResponse::validate()
{
}

web::json::value SetRecyclePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool SetRecyclePolicyResponse::fromJson(const web::json::value& val)
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


std::string SetRecyclePolicyResponse::getResult() const
{
    return result_;
}

void SetRecyclePolicyResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SetRecyclePolicyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SetRecyclePolicyResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


