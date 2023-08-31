

#include "huaweicloud/codeartsdeploy/v2/model/TaskV2RequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




TaskV2RequestBody::TaskV2RequestBody()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    operationListIsSet_ = false;
}

TaskV2RequestBody::~TaskV2RequestBody() = default;

void TaskV2RequestBody::validate()
{
}

web::json::value TaskV2RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(operationListIsSet_) {
        val[utility::conversions::to_string_t("operation_list")] = ModelBase::toJson(operationList_);
    }

    return val;
}

bool TaskV2RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DeployV2OperationsDO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationList(refVal);
        }
    }
    return ok;
}

std::string TaskV2RequestBody::getTemplateId() const
{
    return templateId_;
}

void TaskV2RequestBody::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool TaskV2RequestBody::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void TaskV2RequestBody::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::vector<DeployV2OperationsDO>& TaskV2RequestBody::getOperationList()
{
    return operationList_;
}

void TaskV2RequestBody::setOperationList(const std::vector<DeployV2OperationsDO>& value)
{
    operationList_ = value;
    operationListIsSet_ = true;
}

bool TaskV2RequestBody::operationListIsSet() const
{
    return operationListIsSet_;
}

void TaskV2RequestBody::unsetoperationList()
{
    operationListIsSet_ = false;
}

}
}
}
}
}


