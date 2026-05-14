

#include "huaweicloud/vod/v1/model/CreateAssetEditTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetEditTaskResponse::CreateAssetEditTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
}

CreateAssetEditTaskResponse::~CreateAssetEditTaskResponse() = default;

void CreateAssetEditTaskResponse::validate()
{
}

web::json::value CreateAssetEditTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}
bool CreateAssetEditTaskResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    return ok;
}


std::string CreateAssetEditTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateAssetEditTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateAssetEditTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateAssetEditTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CreateAssetEditTaskResponse::getAssetId() const
{
    return assetId_;
}

void CreateAssetEditTaskResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CreateAssetEditTaskResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CreateAssetEditTaskResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


