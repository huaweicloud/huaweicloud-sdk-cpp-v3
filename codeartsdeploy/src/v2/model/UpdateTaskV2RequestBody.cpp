

#include "huaweicloud/codeartsdeploy/v2/model/UpdateTaskV2RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateTaskV2RequestBody::UpdateTaskV2RequestBody()
{
    id_ = "";
    idIsSet_ = false;
    deploySystem_ = "";
    deploySystemIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    operationListIsSet_ = false;
}

UpdateTaskV2RequestBody::~UpdateTaskV2RequestBody() = default;

void UpdateTaskV2RequestBody::validate()
{
}

web::json::value UpdateTaskV2RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(deploySystemIsSet_) {
        val[utility::conversions::to_string_t("deploy_system")] = ModelBase::toJson(deploySystem_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(operationListIsSet_) {
        val[utility::conversions::to_string_t("operation_list")] = ModelBase::toJson(operationList_);
    }

    return val;
}
bool UpdateTaskV2RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_system"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploySystem(refVal);
        }
    }
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


std::string UpdateTaskV2RequestBody::getId() const
{
    return id_;
}

void UpdateTaskV2RequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateTaskV2RequestBody::idIsSet() const
{
    return idIsSet_;
}

void UpdateTaskV2RequestBody::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateTaskV2RequestBody::getDeploySystem() const
{
    return deploySystem_;
}

void UpdateTaskV2RequestBody::setDeploySystem(const std::string& value)
{
    deploySystem_ = value;
    deploySystemIsSet_ = true;
}

bool UpdateTaskV2RequestBody::deploySystemIsSet() const
{
    return deploySystemIsSet_;
}

void UpdateTaskV2RequestBody::unsetdeploySystem()
{
    deploySystemIsSet_ = false;
}

std::string UpdateTaskV2RequestBody::getTemplateId() const
{
    return templateId_;
}

void UpdateTaskV2RequestBody::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateTaskV2RequestBody::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateTaskV2RequestBody::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::vector<DeployV2OperationsDO>& UpdateTaskV2RequestBody::getOperationList()
{
    return operationList_;
}

void UpdateTaskV2RequestBody::setOperationList(const std::vector<DeployV2OperationsDO>& value)
{
    operationList_ = value;
    operationListIsSet_ = true;
}

bool UpdateTaskV2RequestBody::operationListIsSet() const
{
    return operationListIsSet_;
}

void UpdateTaskV2RequestBody::unsetoperationList()
{
    operationListIsSet_ = false;
}

}
}
}
}
}


