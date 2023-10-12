

#include "huaweicloud/cdn/v1/model/ShowDomainStatsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowDomainStatsResponse::ShowDomainStatsResponse()
{
    resultIsSet_ = false;
}

ShowDomainStatsResponse::~ShowDomainStatsResponse() = default;

void ShowDomainStatsResponse::validate()
{
}

web::json::value ShowDomainStatsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowDomainStatsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::map<std::string, Object>& ShowDomainStatsResponse::getResult()
{
    return result_;
}

void ShowDomainStatsResponse::setResult(const std::map<std::string, Object>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDomainStatsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDomainStatsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


