

#include "huaweicloud/cloudtest/v1/model/CommRequestListFactorParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestListFactorParam::CommRequestListFactorParam()
{
    paramsIsSet_ = false;
}

CommRequestListFactorParam::~CommRequestListFactorParam() = default;

void CommRequestListFactorParam::validate()
{
}

web::json::value CommRequestListFactorParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestListFactorParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            ListFactorParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


ListFactorParam CommRequestListFactorParam::getParams() const
{
    return params_;
}

void CommRequestListFactorParam::setParams(const ListFactorParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestListFactorParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestListFactorParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


