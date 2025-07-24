

#include "huaweicloud/cloudtest/v1/model/ShowMindmapByPageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindmapByPageResponse::ShowMindmapByPageResponse()
{
    paramsIsSet_ = false;
}

ShowMindmapByPageResponse::~ShowMindmapByPageResponse() = default;

void ShowMindmapByPageResponse::validate()
{
}

web::json::value ShowMindmapByPageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool ShowMindmapByPageResponse::fromJson(const web::json::value& val)
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


MindmapPageParamV3 ShowMindmapByPageResponse::getParams() const
{
    return params_;
}

void ShowMindmapByPageResponse::setParams(const MindmapPageParamV3& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool ShowMindmapByPageResponse::paramsIsSet() const
{
    return paramsIsSet_;
}

void ShowMindmapByPageResponse::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


