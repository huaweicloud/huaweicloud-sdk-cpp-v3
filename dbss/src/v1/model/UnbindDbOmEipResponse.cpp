

#include "huaweicloud/dbss/v1/model/UnbindDbOmEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UnbindDbOmEipResponse::UnbindDbOmEipResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UnbindDbOmEipResponse::~UnbindDbOmEipResponse() = default;

void UnbindDbOmEipResponse::validate()
{
}

web::json::value UnbindDbOmEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UnbindDbOmEipResponse::fromJson(const web::json::value& val)
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


std::string UnbindDbOmEipResponse::getResult() const
{
    return result_;
}

void UnbindDbOmEipResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UnbindDbOmEipResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UnbindDbOmEipResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


