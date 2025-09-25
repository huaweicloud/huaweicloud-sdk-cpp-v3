

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateExpansionParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateExpansionParametersResponse::UpdateExpansionParametersResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateExpansionParametersResponse::~UpdateExpansionParametersResponse() = default;

void UpdateExpansionParametersResponse::validate()
{
}

web::json::value UpdateExpansionParametersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateExpansionParametersResponse::fromJson(const web::json::value& val)
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


std::string UpdateExpansionParametersResponse::getResult() const
{
    return result_;
}

void UpdateExpansionParametersResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateExpansionParametersResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateExpansionParametersResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


