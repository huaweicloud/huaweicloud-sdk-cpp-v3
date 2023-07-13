

#include "huaweicloud/drs/v3/model/BatchShowParamsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchShowParamsResponse::BatchShowParamsResponse()
{
    paramsListIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchShowParamsResponse::~BatchShowParamsResponse() = default;

void BatchShowParamsResponse::validate()
{
}

web::json::value BatchShowParamsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsListIsSet_) {
        val[utility::conversions::to_string_t("params_list")] = ModelBase::toJson(paramsList_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}

bool BatchShowParamsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params_list"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDbParamsResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamsList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}

std::vector<QueryDbParamsResp>& BatchShowParamsResponse::getParamsList()
{
    return paramsList_;
}

void BatchShowParamsResponse::setParamsList(const std::vector<QueryDbParamsResp>& value)
{
    paramsList_ = value;
    paramsListIsSet_ = true;
}

bool BatchShowParamsResponse::paramsListIsSet() const
{
    return paramsListIsSet_;
}

void BatchShowParamsResponse::unsetparamsList()
{
    paramsListIsSet_ = false;
}

int32_t BatchShowParamsResponse::getCount() const
{
    return count_;
}

void BatchShowParamsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchShowParamsResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchShowParamsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


