

#include "huaweicloud/cloudtest/v1/model/CommRequestTestCasePageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestTestCasePageParam::CommRequestTestCasePageParam()
{
    paramsIsSet_ = false;
}

CommRequestTestCasePageParam::~CommRequestTestCasePageParam() = default;

void CommRequestTestCasePageParam::validate()
{
}

web::json::value CommRequestTestCasePageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestTestCasePageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            TestCasePageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


TestCasePageParam CommRequestTestCasePageParam::getParams() const
{
    return params_;
}

void CommRequestTestCasePageParam::setParams(const TestCasePageParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestTestCasePageParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestTestCasePageParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


