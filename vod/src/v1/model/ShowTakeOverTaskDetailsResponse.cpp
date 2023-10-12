

#include "huaweicloud/vod/v1/model/ShowTakeOverTaskDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowTakeOverTaskDetailsResponse::ShowTakeOverTaskDetailsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskStatus_ = "";
    taskStatusIsSet_ = false;
    assetsIsSet_ = false;
}

ShowTakeOverTaskDetailsResponse::~ShowTakeOverTaskDetailsResponse() = default;

void ShowTakeOverTaskDetailsResponse::validate()
{
}

web::json::value ShowTakeOverTaskDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }
    if(assetsIsSet_) {
        val[utility::conversions::to_string_t("assets")] = ModelBase::toJson(assets_);
    }

    return val;
}
bool ShowTakeOverTaskDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assets"));
        if(!fieldValue.is_null())
        {
            std::vector<AssetDetails> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssets(refVal);
        }
    }
    return ok;
}


int32_t ShowTakeOverTaskDetailsResponse::getTotal() const
{
    return total_;
}

void ShowTakeOverTaskDetailsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowTakeOverTaskDetailsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowTakeOverTaskDetailsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ShowTakeOverTaskDetailsResponse::getTaskId() const
{
    return taskId_;
}

void ShowTakeOverTaskDetailsResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTakeOverTaskDetailsResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTakeOverTaskDetailsResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowTakeOverTaskDetailsResponse::getTaskStatus() const
{
    return taskStatus_;
}

void ShowTakeOverTaskDetailsResponse::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool ShowTakeOverTaskDetailsResponse::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void ShowTakeOverTaskDetailsResponse::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

std::vector<AssetDetails>& ShowTakeOverTaskDetailsResponse::getAssets()
{
    return assets_;
}

void ShowTakeOverTaskDetailsResponse::setAssets(const std::vector<AssetDetails>& value)
{
    assets_ = value;
    assetsIsSet_ = true;
}

bool ShowTakeOverTaskDetailsResponse::assetsIsSet() const
{
    return assetsIsSet_;
}

void ShowTakeOverTaskDetailsResponse::unsetassets()
{
    assetsIsSet_ = false;
}

}
}
}
}
}


