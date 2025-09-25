

#include "huaweicloud/codehub/v4/model/SendUserEmailVerifyCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




SendUserEmailVerifyCodeResponse::SendUserEmailVerifyCodeResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

SendUserEmailVerifyCodeResponse::~SendUserEmailVerifyCodeResponse() = default;

void SendUserEmailVerifyCodeResponse::validate()
{
}

web::json::value SendUserEmailVerifyCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool SendUserEmailVerifyCodeResponse::fromJson(const web::json::value& val)
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


std::string SendUserEmailVerifyCodeResponse::getResult() const
{
    return result_;
}

void SendUserEmailVerifyCodeResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SendUserEmailVerifyCodeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SendUserEmailVerifyCodeResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


