

#include "huaweicloud/dbss/v1/model/UnbindDbEncryptEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UnbindDbEncryptEipResponse::UnbindDbEncryptEipResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UnbindDbEncryptEipResponse::~UnbindDbEncryptEipResponse() = default;

void UnbindDbEncryptEipResponse::validate()
{
}

web::json::value UnbindDbEncryptEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UnbindDbEncryptEipResponse::fromJson(const web::json::value& val)
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


std::string UnbindDbEncryptEipResponse::getResult() const
{
    return result_;
}

void UnbindDbEncryptEipResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UnbindDbEncryptEipResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UnbindDbEncryptEipResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


