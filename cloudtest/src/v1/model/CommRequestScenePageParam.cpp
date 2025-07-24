

#include "huaweicloud/cloudtest/v1/model/CommRequestScenePageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestScenePageParam::CommRequestScenePageParam()
{
    paramsIsSet_ = false;
}

CommRequestScenePageParam::~CommRequestScenePageParam() = default;

void CommRequestScenePageParam::validate()
{
}

web::json::value CommRequestScenePageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestScenePageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            ScenePageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


ScenePageParam CommRequestScenePageParam::getParams() const
{
    return params_;
}

void CommRequestScenePageParam::setParams(const ScenePageParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestScenePageParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestScenePageParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


