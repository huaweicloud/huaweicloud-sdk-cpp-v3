

#include "huaweicloud/dbss/v1/model/ResetDbOmPasswordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResetDbOmPasswordResponse::ResetDbOmPasswordResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

ResetDbOmPasswordResponse::~ResetDbOmPasswordResponse() = default;

void ResetDbOmPasswordResponse::validate()
{
}

web::json::value ResetDbOmPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ResetDbOmPasswordResponse::fromJson(const web::json::value& val)
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


std::string ResetDbOmPasswordResponse::getResult() const
{
    return result_;
}

void ResetDbOmPasswordResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ResetDbOmPasswordResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ResetDbOmPasswordResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


