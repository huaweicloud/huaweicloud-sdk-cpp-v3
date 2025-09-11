

#include "huaweicloud/dbss/v1/model/BindDbEncryptEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BindDbEncryptEipResponse::BindDbEncryptEipResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

BindDbEncryptEipResponse::~BindDbEncryptEipResponse() = default;

void BindDbEncryptEipResponse::validate()
{
}

web::json::value BindDbEncryptEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool BindDbEncryptEipResponse::fromJson(const web::json::value& val)
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


std::string BindDbEncryptEipResponse::getResult() const
{
    return result_;
}

void BindDbEncryptEipResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BindDbEncryptEipResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BindDbEncryptEipResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


