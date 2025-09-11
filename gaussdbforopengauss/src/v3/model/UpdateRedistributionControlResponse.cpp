

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateRedistributionControlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateRedistributionControlResponse::UpdateRedistributionControlResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateRedistributionControlResponse::~UpdateRedistributionControlResponse() = default;

void UpdateRedistributionControlResponse::validate()
{
}

web::json::value UpdateRedistributionControlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateRedistributionControlResponse::fromJson(const web::json::value& val)
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


std::string UpdateRedistributionControlResponse::getResult() const
{
    return result_;
}

void UpdateRedistributionControlResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateRedistributionControlResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateRedistributionControlResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


