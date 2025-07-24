

#include "huaweicloud/cloudtest/v1/model/ExternalTestCaseVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExternalTestCaseVo::ExternalTestCaseVo()
{
    name_ = "";
    nameIsSet_ = false;
    ownerIsSet_ = false;
    statusIsSet_ = false;
    resultIsSet_ = false;
    moduleIsSet_ = false;
    iterationIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    rankId_ = "";
    rankIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    executionTypeIsSet_ = false;
    testTypeIsSet_ = false;
    createInfoIsSet_ = false;
    executeInfoIsSet_ = false;
    associateIssueInfoIsSet_ = false;
    associateDefectInfoIsSet_ = false;
}

ExternalTestCaseVo::~ExternalTestCaseVo() = default;

void ExternalTestCaseVo::validate()
{
}

web::json::value ExternalTestCaseVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(iterationIsSet_) {
        val[utility::conversions::to_string_t("iteration")] = ModelBase::toJson(iteration_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(rankIdIsSet_) {
        val[utility::conversions::to_string_t("rank_id")] = ModelBase::toJson(rankId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(executionTypeIsSet_) {
        val[utility::conversions::to_string_t("execution_type")] = ModelBase::toJson(executionType_);
    }
    if(testTypeIsSet_) {
        val[utility::conversions::to_string_t("test_type")] = ModelBase::toJson(testType_);
    }
    if(createInfoIsSet_) {
        val[utility::conversions::to_string_t("create_info")] = ModelBase::toJson(createInfo_);
    }
    if(executeInfoIsSet_) {
        val[utility::conversions::to_string_t("execute_info")] = ModelBase::toJson(executeInfo_);
    }
    if(associateIssueInfoIsSet_) {
        val[utility::conversions::to_string_t("associate_issue_info")] = ModelBase::toJson(associateIssueInfo_);
    }
    if(associateDefectInfoIsSet_) {
        val[utility::conversions::to_string_t("associate_defect_info")] = ModelBase::toJson(associateDefectInfo_);
    }

    return val;
}
bool ExternalTestCaseVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRankId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_type"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_type"));
        if(!fieldValue.is_null())
        {
            IntegerIdAndNameVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_info"));
        if(!fieldValue.is_null())
        {
            CreateInfoVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_info"));
        if(!fieldValue.is_null())
        {
            ExecuteInfoVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_issue_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_issue_info"));
        if(!fieldValue.is_null())
        {
            AssociateIssueInfoVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateIssueInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_defect_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_defect_info"));
        if(!fieldValue.is_null())
        {
            AssociateDefectInfoVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateDefectInfo(refVal);
        }
    }
    return ok;
}


std::string ExternalTestCaseVo::getName() const
{
    return name_;
}

void ExternalTestCaseVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExternalTestCaseVo::nameIsSet() const
{
    return nameIsSet_;
}

void ExternalTestCaseVo::unsetname()
{
    nameIsSet_ = false;
}

NameAndIdVo ExternalTestCaseVo::getOwner() const
{
    return owner_;
}

void ExternalTestCaseVo::setOwner(const NameAndIdVo& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ExternalTestCaseVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void ExternalTestCaseVo::unsetowner()
{
    ownerIsSet_ = false;
}

NameAndIdVo ExternalTestCaseVo::getStatus() const
{
    return status_;
}

void ExternalTestCaseVo::setStatus(const NameAndIdVo& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ExternalTestCaseVo::statusIsSet() const
{
    return statusIsSet_;
}

void ExternalTestCaseVo::unsetstatus()
{
    statusIsSet_ = false;
}

NameAndIdVo ExternalTestCaseVo::getResult() const
{
    return result_;
}

void ExternalTestCaseVo::setResult(const NameAndIdVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ExternalTestCaseVo::resultIsSet() const
{
    return resultIsSet_;
}

void ExternalTestCaseVo::unsetresult()
{
    resultIsSet_ = false;
}

NameAndIdVo ExternalTestCaseVo::getModule() const
{
    return module_;
}

void ExternalTestCaseVo::setModule(const NameAndIdVo& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool ExternalTestCaseVo::moduleIsSet() const
{
    return moduleIsSet_;
}

void ExternalTestCaseVo::unsetmodule()
{
    moduleIsSet_ = false;
}

NameAndIdVo ExternalTestCaseVo::getIteration() const
{
    return iteration_;
}

void ExternalTestCaseVo::setIteration(const NameAndIdVo& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool ExternalTestCaseVo::iterationIsSet() const
{
    return iterationIsSet_;
}

void ExternalTestCaseVo::unsetiteration()
{
    iterationIsSet_ = false;
}

std::string ExternalTestCaseVo::getId() const
{
    return id_;
}

void ExternalTestCaseVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ExternalTestCaseVo::idIsSet() const
{
    return idIsSet_;
}

void ExternalTestCaseVo::unsetid()
{
    idIsSet_ = false;
}

std::string ExternalTestCaseVo::getNumber() const
{
    return number_;
}

void ExternalTestCaseVo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ExternalTestCaseVo::numberIsSet() const
{
    return numberIsSet_;
}

void ExternalTestCaseVo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string ExternalTestCaseVo::getDescription() const
{
    return description_;
}

void ExternalTestCaseVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExternalTestCaseVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExternalTestCaseVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ExternalTestCaseVo::getRankId() const
{
    return rankId_;
}

void ExternalTestCaseVo::setRankId(const std::string& value)
{
    rankId_ = value;
    rankIdIsSet_ = true;
}

bool ExternalTestCaseVo::rankIdIsSet() const
{
    return rankIdIsSet_;
}

void ExternalTestCaseVo::unsetrankId()
{
    rankIdIsSet_ = false;
}

std::string ExternalTestCaseVo::getProjectId() const
{
    return projectId_;
}

void ExternalTestCaseVo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ExternalTestCaseVo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ExternalTestCaseVo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

NameAndIdVo ExternalTestCaseVo::getExecutionType() const
{
    return executionType_;
}

void ExternalTestCaseVo::setExecutionType(const NameAndIdVo& value)
{
    executionType_ = value;
    executionTypeIsSet_ = true;
}

bool ExternalTestCaseVo::executionTypeIsSet() const
{
    return executionTypeIsSet_;
}

void ExternalTestCaseVo::unsetexecutionType()
{
    executionTypeIsSet_ = false;
}

IntegerIdAndNameVo ExternalTestCaseVo::getTestType() const
{
    return testType_;
}

void ExternalTestCaseVo::setTestType(const IntegerIdAndNameVo& value)
{
    testType_ = value;
    testTypeIsSet_ = true;
}

bool ExternalTestCaseVo::testTypeIsSet() const
{
    return testTypeIsSet_;
}

void ExternalTestCaseVo::unsettestType()
{
    testTypeIsSet_ = false;
}

CreateInfoVo ExternalTestCaseVo::getCreateInfo() const
{
    return createInfo_;
}

void ExternalTestCaseVo::setCreateInfo(const CreateInfoVo& value)
{
    createInfo_ = value;
    createInfoIsSet_ = true;
}

bool ExternalTestCaseVo::createInfoIsSet() const
{
    return createInfoIsSet_;
}

void ExternalTestCaseVo::unsetcreateInfo()
{
    createInfoIsSet_ = false;
}

ExecuteInfoVo ExternalTestCaseVo::getExecuteInfo() const
{
    return executeInfo_;
}

void ExternalTestCaseVo::setExecuteInfo(const ExecuteInfoVo& value)
{
    executeInfo_ = value;
    executeInfoIsSet_ = true;
}

bool ExternalTestCaseVo::executeInfoIsSet() const
{
    return executeInfoIsSet_;
}

void ExternalTestCaseVo::unsetexecuteInfo()
{
    executeInfoIsSet_ = false;
}

AssociateIssueInfoVo ExternalTestCaseVo::getAssociateIssueInfo() const
{
    return associateIssueInfo_;
}

void ExternalTestCaseVo::setAssociateIssueInfo(const AssociateIssueInfoVo& value)
{
    associateIssueInfo_ = value;
    associateIssueInfoIsSet_ = true;
}

bool ExternalTestCaseVo::associateIssueInfoIsSet() const
{
    return associateIssueInfoIsSet_;
}

void ExternalTestCaseVo::unsetassociateIssueInfo()
{
    associateIssueInfoIsSet_ = false;
}

AssociateDefectInfoVo ExternalTestCaseVo::getAssociateDefectInfo() const
{
    return associateDefectInfo_;
}

void ExternalTestCaseVo::setAssociateDefectInfo(const AssociateDefectInfoVo& value)
{
    associateDefectInfo_ = value;
    associateDefectInfoIsSet_ = true;
}

bool ExternalTestCaseVo::associateDefectInfoIsSet() const
{
    return associateDefectInfoIsSet_;
}

void ExternalTestCaseVo::unsetassociateDefectInfo()
{
    associateDefectInfoIsSet_ = false;
}

}
}
}
}
}


