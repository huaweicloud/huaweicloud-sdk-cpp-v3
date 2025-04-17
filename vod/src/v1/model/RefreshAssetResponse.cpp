

#include "huaweicloud/vod/v1/model/RefreshAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




RefreshAssetResponse::RefreshAssetResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

RefreshAssetResponse::~RefreshAssetResponse() = default;

void RefreshAssetResponse::validate()
{
}

web::json::value RefreshAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool RefreshAssetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string RefreshAssetResponse::getTaskId() const
{
    return taskId_;
}

void RefreshAssetResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool RefreshAssetResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void RefreshAssetResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


