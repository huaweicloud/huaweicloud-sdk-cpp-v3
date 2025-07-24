

#include "huaweicloud/cloudtest/v1/model/CommRequestUpdateAssetTreeParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestUpdateAssetTreeParam::CommRequestUpdateAssetTreeParam()
{
    paramsIsSet_ = false;
}

CommRequestUpdateAssetTreeParam::~CommRequestUpdateAssetTreeParam() = default;

void CommRequestUpdateAssetTreeParam::validate()
{
}

web::json::value CommRequestUpdateAssetTreeParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestUpdateAssetTreeParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            UpdateAssetTreeParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


UpdateAssetTreeParam CommRequestUpdateAssetTreeParam::getParams() const
{
    return params_;
}

void CommRequestUpdateAssetTreeParam::setParams(const UpdateAssetTreeParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestUpdateAssetTreeParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestUpdateAssetTreeParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


