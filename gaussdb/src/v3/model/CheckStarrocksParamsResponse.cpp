

#include "huaweicloud/gaussdb/v3/model/CheckStarrocksParamsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckStarrocksParamsResponse::CheckStarrocksParamsResponse()
{
    checkStarrocksParamsResponceIsSet_ = false;
}

CheckStarrocksParamsResponse::~CheckStarrocksParamsResponse() = default;

void CheckStarrocksParamsResponse::validate()
{
}

web::json::value CheckStarrocksParamsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkStarrocksParamsResponceIsSet_) {
        val[utility::conversions::to_string_t("check_starrocks_params_responce")] = ModelBase::toJson(checkStarrocksParamsResponce_);
    }

    return val;
}
bool CheckStarrocksParamsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("check_starrocks_params_responce"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_starrocks_params_responce"));
        if(!fieldValue.is_null())
        {
            std::vector<ParamGroupParameterDifferences> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckStarrocksParamsResponce(refVal);
        }
    }
    return ok;
}


std::vector<ParamGroupParameterDifferences>& CheckStarrocksParamsResponse::getCheckStarrocksParamsResponce()
{
    return checkStarrocksParamsResponce_;
}

void CheckStarrocksParamsResponse::setCheckStarrocksParamsResponce(const std::vector<ParamGroupParameterDifferences>& value)
{
    checkStarrocksParamsResponce_ = value;
    checkStarrocksParamsResponceIsSet_ = true;
}

bool CheckStarrocksParamsResponse::checkStarrocksParamsResponceIsSet() const
{
    return checkStarrocksParamsResponceIsSet_;
}

void CheckStarrocksParamsResponse::unsetcheckStarrocksParamsResponce()
{
    checkStarrocksParamsResponceIsSet_ = false;
}

}
}
}
}
}


