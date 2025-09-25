

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineByTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineByTemplateResponse::CreatePipelineByTemplateResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreatePipelineByTemplateResponse::~CreatePipelineByTemplateResponse() = default;

void CreatePipelineByTemplateResponse::validate()
{
}

web::json::value CreatePipelineByTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreatePipelineByTemplateResponse::fromJson(const web::json::value& val)
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


std::string CreatePipelineByTemplateResponse::getTaskId() const
{
    return taskId_;
}

void CreatePipelineByTemplateResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreatePipelineByTemplateResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreatePipelineByTemplateResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


