

#include "huaweicloud/cdn/v2/model/ShowChargeModesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowChargeModesResponse::ShowChargeModesResponse()
{
    resultIsSet_ = false;
}

ShowChargeModesResponse::~ShowChargeModesResponse() = default;

void ShowChargeModesResponse::validate()
{
}

web::json::value ShowChargeModesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowChargeModesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::vector<std::map<std::string, Object>>& ShowChargeModesResponse::getResult()
{
    return result_;
}

void ShowChargeModesResponse::setResult(const std::vector<std::map<std::string, Object>>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowChargeModesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowChargeModesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


