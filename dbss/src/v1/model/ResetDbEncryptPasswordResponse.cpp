

#include "huaweicloud/dbss/v1/model/ResetDbEncryptPasswordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResetDbEncryptPasswordResponse::ResetDbEncryptPasswordResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

ResetDbEncryptPasswordResponse::~ResetDbEncryptPasswordResponse() = default;

void ResetDbEncryptPasswordResponse::validate()
{
}

web::json::value ResetDbEncryptPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ResetDbEncryptPasswordResponse::fromJson(const web::json::value& val)
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


std::string ResetDbEncryptPasswordResponse::getResult() const
{
    return result_;
}

void ResetDbEncryptPasswordResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ResetDbEncryptPasswordResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ResetDbEncryptPasswordResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


