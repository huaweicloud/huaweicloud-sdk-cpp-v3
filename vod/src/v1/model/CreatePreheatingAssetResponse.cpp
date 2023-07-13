

#include "huaweicloud/vod/v1/model/CreatePreheatingAssetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreatePreheatingAssetResponse::CreatePreheatingAssetResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreatePreheatingAssetResponse::~CreatePreheatingAssetResponse() = default;

void CreatePreheatingAssetResponse::validate()
{
}

web::json::value CreatePreheatingAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool CreatePreheatingAssetResponse::fromJson(const web::json::value& val)
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

std::string CreatePreheatingAssetResponse::getTaskId() const
{
    return taskId_;
}

void CreatePreheatingAssetResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreatePreheatingAssetResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreatePreheatingAssetResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


