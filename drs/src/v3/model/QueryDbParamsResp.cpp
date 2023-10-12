

#include "huaweicloud/drs/v3/model/QueryDbParamsResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryDbParamsResp::QueryDbParamsResp()
{
    paramsIsSet_ = false;
}

QueryDbParamsResp::~QueryDbParamsResp() = default;

void QueryDbParamsResp::validate()
{
}

web::json::value QueryDbParamsResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool QueryDbParamsResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<Params> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::vector<Params>& QueryDbParamsResp::getParams()
{
    return params_;
}

void QueryDbParamsResp::setParams(const std::vector<Params>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool QueryDbParamsResp::paramsIsSet() const
{
    return paramsIsSet_;
}

void QueryDbParamsResp::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


