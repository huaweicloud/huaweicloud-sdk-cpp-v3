

#include "huaweicloud/cloudtest/v1/model/CommRequestMindmapBackupPageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestMindmapBackupPageParam::CommRequestMindmapBackupPageParam()
{
    paramsIsSet_ = false;
}

CommRequestMindmapBackupPageParam::~CommRequestMindmapBackupPageParam() = default;

void CommRequestMindmapBackupPageParam::validate()
{
}

web::json::value CommRequestMindmapBackupPageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestMindmapBackupPageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            MindmapBackupPageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


MindmapBackupPageParam CommRequestMindmapBackupPageParam::getParams() const
{
    return params_;
}

void CommRequestMindmapBackupPageParam::setParams(const MindmapBackupPageParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestMindmapBackupPageParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestMindmapBackupPageParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


