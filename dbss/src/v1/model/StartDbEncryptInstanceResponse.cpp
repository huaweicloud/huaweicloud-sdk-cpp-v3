

#include "huaweicloud/dbss/v1/model/StartDbEncryptInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StartDbEncryptInstanceResponse::StartDbEncryptInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

StartDbEncryptInstanceResponse::~StartDbEncryptInstanceResponse() = default;

void StartDbEncryptInstanceResponse::validate()
{
}

web::json::value StartDbEncryptInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StartDbEncryptInstanceResponse::fromJson(const web::json::value& val)
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


std::string StartDbEncryptInstanceResponse::getResult() const
{
    return result_;
}

void StartDbEncryptInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StartDbEncryptInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StartDbEncryptInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


