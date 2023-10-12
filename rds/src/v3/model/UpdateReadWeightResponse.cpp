

#include "huaweicloud/rds/v3/model/UpdateReadWeightResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateReadWeightResponse::UpdateReadWeightResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateReadWeightResponse::~UpdateReadWeightResponse() = default;

void UpdateReadWeightResponse::validate()
{
}

web::json::value UpdateReadWeightResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateReadWeightResponse::fromJson(const web::json::value& val)
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


std::string UpdateReadWeightResponse::getResult() const
{
    return result_;
}

void UpdateReadWeightResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateReadWeightResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateReadWeightResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


