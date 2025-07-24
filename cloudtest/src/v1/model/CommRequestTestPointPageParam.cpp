

#include "huaweicloud/cloudtest/v1/model/CommRequestTestPointPageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestTestPointPageParam::CommRequestTestPointPageParam()
{
    paramsIsSet_ = false;
}

CommRequestTestPointPageParam::~CommRequestTestPointPageParam() = default;

void CommRequestTestPointPageParam::validate()
{
}

web::json::value CommRequestTestPointPageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestTestPointPageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            TestPointPageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


TestPointPageParam CommRequestTestPointPageParam::getParams() const
{
    return params_;
}

void CommRequestTestPointPageParam::setParams(const TestPointPageParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestTestPointPageParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestTestPointPageParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


