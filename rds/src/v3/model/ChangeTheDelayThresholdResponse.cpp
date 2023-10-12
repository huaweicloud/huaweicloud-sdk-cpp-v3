

#include "huaweicloud/rds/v3/model/ChangeTheDelayThresholdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ChangeTheDelayThresholdResponse::ChangeTheDelayThresholdResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

ChangeTheDelayThresholdResponse::~ChangeTheDelayThresholdResponse() = default;

void ChangeTheDelayThresholdResponse::validate()
{
}

web::json::value ChangeTheDelayThresholdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ChangeTheDelayThresholdResponse::fromJson(const web::json::value& val)
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


std::string ChangeTheDelayThresholdResponse::getResult() const
{
    return result_;
}

void ChangeTheDelayThresholdResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ChangeTheDelayThresholdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ChangeTheDelayThresholdResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


