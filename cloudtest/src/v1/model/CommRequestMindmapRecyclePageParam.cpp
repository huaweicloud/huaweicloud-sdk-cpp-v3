

#include "huaweicloud/cloudtest/v1/model/CommRequestMindmapRecyclePageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestMindmapRecyclePageParam::CommRequestMindmapRecyclePageParam()
{
    paramsIsSet_ = false;
}

CommRequestMindmapRecyclePageParam::~CommRequestMindmapRecyclePageParam() = default;

void CommRequestMindmapRecyclePageParam::validate()
{
}

web::json::value CommRequestMindmapRecyclePageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestMindmapRecyclePageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            MindmapRecyclePageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


MindmapRecyclePageParam CommRequestMindmapRecyclePageParam::getParams() const
{
    return params_;
}

void CommRequestMindmapRecyclePageParam::setParams(const MindmapRecyclePageParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestMindmapRecyclePageParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestMindmapRecyclePageParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


