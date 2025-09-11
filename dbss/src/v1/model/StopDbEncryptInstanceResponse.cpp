

#include "huaweicloud/dbss/v1/model/StopDbEncryptInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StopDbEncryptInstanceResponse::StopDbEncryptInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

StopDbEncryptInstanceResponse::~StopDbEncryptInstanceResponse() = default;

void StopDbEncryptInstanceResponse::validate()
{
}

web::json::value StopDbEncryptInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StopDbEncryptInstanceResponse::fromJson(const web::json::value& val)
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


std::string StopDbEncryptInstanceResponse::getResult() const
{
    return result_;
}

void StopDbEncryptInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StopDbEncryptInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StopDbEncryptInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


