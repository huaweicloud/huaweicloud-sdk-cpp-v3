

#include "huaweicloud/vod/v1/model/TaskResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TaskResult::TaskResult()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

TaskResult::~TaskResult() = default;

void TaskResult::validate()
{
}

web::json::value TaskResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool TaskResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string TaskResult::getAssetId() const
{
    return assetId_;
}

void TaskResult::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool TaskResult::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void TaskResult::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string TaskResult::getStatus() const
{
    return status_;
}

void TaskResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TaskResult::statusIsSet() const
{
    return statusIsSet_;
}

void TaskResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


