

#include "huaweicloud/cloudtest/v1/model/CommRequestMindmapPageParamV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestMindmapPageParamV3::CommRequestMindmapPageParamV3()
{
    paramsIsSet_ = false;
}

CommRequestMindmapPageParamV3::~CommRequestMindmapPageParamV3() = default;

void CommRequestMindmapPageParamV3::validate()
{
}

web::json::value CommRequestMindmapPageParamV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestMindmapPageParamV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            MindmapPageParamV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


MindmapPageParamV3 CommRequestMindmapPageParamV3::getParams() const
{
    return params_;
}

void CommRequestMindmapPageParamV3::setParams(const MindmapPageParamV3& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestMindmapPageParamV3::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestMindmapPageParamV3::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


