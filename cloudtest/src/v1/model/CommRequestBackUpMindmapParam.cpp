

#include "huaweicloud/cloudtest/v1/model/CommRequestBackUpMindmapParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestBackUpMindmapParam::CommRequestBackUpMindmapParam()
{
    paramsIsSet_ = false;
}

CommRequestBackUpMindmapParam::~CommRequestBackUpMindmapParam() = default;

void CommRequestBackUpMindmapParam::validate()
{
}

web::json::value CommRequestBackUpMindmapParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestBackUpMindmapParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            BackUpMindmapParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


BackUpMindmapParam CommRequestBackUpMindmapParam::getParams() const
{
    return params_;
}

void CommRequestBackUpMindmapParam::setParams(const BackUpMindmapParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestBackUpMindmapParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestBackUpMindmapParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


