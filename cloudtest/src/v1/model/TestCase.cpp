

#include "huaweicloud/cloudtest/v1/model/TestCase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCase::TestCase()
{
    autoType_ = "";
    autoTypeIsSet_ = false;
    caseDesignDesc_ = "";
    caseDesignDescIsSet_ = false;
    caseName_ = "";
    caseNameIsSet_ = false;
    caseNum_ = "";
    caseNumIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    creatorNum_ = "";
    creatorNumIsSet_ = false;
    deleted_ = "";
    deletedIsSet_ = false;
    expectedResults_ = "";
    expectedResultsIsSet_ = false;
    extraParam_ = "";
    extraParamIsSet_ = false;
    factorCombinationJson_ = "";
    factorCombinationJsonIsSet_ = false;
    operationAndExpectedResult_ = "";
    operationAndExpectedResultIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    isArchive_ = false;
    isArchiveIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    batchId_ = "";
    batchIdIsSet_ = false;
    branchId_ = "";
    branchIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    prerequisite_ = "";
    prerequisiteIsSet_ = false;
    testCaseLevel_ = "";
    testCaseLevelIsSet_ = false;
    testProcedure_ = "";
    testProcedureIsSet_ = false;
    updateName_ = "";
    updateNameIsSet_ = false;
    updateNum_ = "";
    updateNumIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
}

TestCase::~TestCase() = default;

void TestCase::validate()
{
}

web::json::value TestCase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoTypeIsSet_) {
        val[utility::conversions::to_string_t("auto_type")] = ModelBase::toJson(autoType_);
    }
    if(caseDesignDescIsSet_) {
        val[utility::conversions::to_string_t("case_design_desc")] = ModelBase::toJson(caseDesignDesc_);
    }
    if(caseNameIsSet_) {
        val[utility::conversions::to_string_t("case_name")] = ModelBase::toJson(caseName_);
    }
    if(caseNumIsSet_) {
        val[utility::conversions::to_string_t("case_num")] = ModelBase::toJson(caseNum_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(creatorNumIsSet_) {
        val[utility::conversions::to_string_t("creator_num")] = ModelBase::toJson(creatorNum_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(expectedResultsIsSet_) {
        val[utility::conversions::to_string_t("expected_results")] = ModelBase::toJson(expectedResults_);
    }
    if(extraParamIsSet_) {
        val[utility::conversions::to_string_t("extra_param")] = ModelBase::toJson(extraParam_);
    }
    if(factorCombinationJsonIsSet_) {
        val[utility::conversions::to_string_t("factor_combination_json")] = ModelBase::toJson(factorCombinationJson_);
    }
    if(operationAndExpectedResultIsSet_) {
        val[utility::conversions::to_string_t("operation_and_expected_result")] = ModelBase::toJson(operationAndExpectedResult_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isArchiveIsSet_) {
        val[utility::conversions::to_string_t("is_archive")] = ModelBase::toJson(isArchive_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(batchIdIsSet_) {
        val[utility::conversions::to_string_t("batch_id")] = ModelBase::toJson(batchId_);
    }
    if(branchIdIsSet_) {
        val[utility::conversions::to_string_t("branch_id")] = ModelBase::toJson(branchId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(prerequisiteIsSet_) {
        val[utility::conversions::to_string_t("prerequisite")] = ModelBase::toJson(prerequisite_);
    }
    if(testCaseLevelIsSet_) {
        val[utility::conversions::to_string_t("test_case_level")] = ModelBase::toJson(testCaseLevel_);
    }
    if(testProcedureIsSet_) {
        val[utility::conversions::to_string_t("test_procedure")] = ModelBase::toJson(testProcedure_);
    }
    if(updateNameIsSet_) {
        val[utility::conversions::to_string_t("update_name")] = ModelBase::toJson(updateName_);
    }
    if(updateNumIsSet_) {
        val[utility::conversions::to_string_t("update_num")] = ModelBase::toJson(updateNum_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }

    return val;
}
bool TestCase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_design_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_design_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseDesignDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expected_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expected_results"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectedResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("factor_combination_json"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("factor_combination_json"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFactorCombinationJson(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_and_expected_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_and_expected_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationAndExpectedResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_archive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_archive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsArchive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mindmap_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmapId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("batch_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prerequisite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prerequisite"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrerequisite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_procedure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_procedure"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestProcedure(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    return ok;
}


std::string TestCase::getAutoType() const
{
    return autoType_;
}

void TestCase::setAutoType(const std::string& value)
{
    autoType_ = value;
    autoTypeIsSet_ = true;
}

bool TestCase::autoTypeIsSet() const
{
    return autoTypeIsSet_;
}

void TestCase::unsetautoType()
{
    autoTypeIsSet_ = false;
}

std::string TestCase::getCaseDesignDesc() const
{
    return caseDesignDesc_;
}

void TestCase::setCaseDesignDesc(const std::string& value)
{
    caseDesignDesc_ = value;
    caseDesignDescIsSet_ = true;
}

bool TestCase::caseDesignDescIsSet() const
{
    return caseDesignDescIsSet_;
}

void TestCase::unsetcaseDesignDesc()
{
    caseDesignDescIsSet_ = false;
}

std::string TestCase::getCaseName() const
{
    return caseName_;
}

void TestCase::setCaseName(const std::string& value)
{
    caseName_ = value;
    caseNameIsSet_ = true;
}

bool TestCase::caseNameIsSet() const
{
    return caseNameIsSet_;
}

void TestCase::unsetcaseName()
{
    caseNameIsSet_ = false;
}

std::string TestCase::getCaseNum() const
{
    return caseNum_;
}

void TestCase::setCaseNum(const std::string& value)
{
    caseNum_ = value;
    caseNumIsSet_ = true;
}

bool TestCase::caseNumIsSet() const
{
    return caseNumIsSet_;
}

void TestCase::unsetcaseNum()
{
    caseNumIsSet_ = false;
}

utility::datetime TestCase::getCreateTime() const
{
    return createTime_;
}

void TestCase::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TestCase::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TestCase::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TestCase::getCreatorName() const
{
    return creatorName_;
}

void TestCase::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TestCase::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TestCase::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string TestCase::getCreatorNum() const
{
    return creatorNum_;
}

void TestCase::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool TestCase::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void TestCase::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string TestCase::getDeleted() const
{
    return deleted_;
}

void TestCase::setDeleted(const std::string& value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool TestCase::deletedIsSet() const
{
    return deletedIsSet_;
}

void TestCase::unsetdeleted()
{
    deletedIsSet_ = false;
}

std::string TestCase::getExpectedResults() const
{
    return expectedResults_;
}

void TestCase::setExpectedResults(const std::string& value)
{
    expectedResults_ = value;
    expectedResultsIsSet_ = true;
}

bool TestCase::expectedResultsIsSet() const
{
    return expectedResultsIsSet_;
}

void TestCase::unsetexpectedResults()
{
    expectedResultsIsSet_ = false;
}

std::string TestCase::getExtraParam() const
{
    return extraParam_;
}

void TestCase::setExtraParam(const std::string& value)
{
    extraParam_ = value;
    extraParamIsSet_ = true;
}

bool TestCase::extraParamIsSet() const
{
    return extraParamIsSet_;
}

void TestCase::unsetextraParam()
{
    extraParamIsSet_ = false;
}

std::string TestCase::getFactorCombinationJson() const
{
    return factorCombinationJson_;
}

void TestCase::setFactorCombinationJson(const std::string& value)
{
    factorCombinationJson_ = value;
    factorCombinationJsonIsSet_ = true;
}

bool TestCase::factorCombinationJsonIsSet() const
{
    return factorCombinationJsonIsSet_;
}

void TestCase::unsetfactorCombinationJson()
{
    factorCombinationJsonIsSet_ = false;
}

std::string TestCase::getOperationAndExpectedResult() const
{
    return operationAndExpectedResult_;
}

void TestCase::setOperationAndExpectedResult(const std::string& value)
{
    operationAndExpectedResult_ = value;
    operationAndExpectedResultIsSet_ = true;
}

bool TestCase::operationAndExpectedResultIsSet() const
{
    return operationAndExpectedResultIsSet_;
}

void TestCase::unsetoperationAndExpectedResult()
{
    operationAndExpectedResultIsSet_ = false;
}

std::string TestCase::getId() const
{
    return id_;
}

void TestCase::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TestCase::idIsSet() const
{
    return idIsSet_;
}

void TestCase::unsetid()
{
    idIsSet_ = false;
}

bool TestCase::isIsArchive() const
{
    return isArchive_;
}

void TestCase::setIsArchive(bool value)
{
    isArchive_ = value;
    isArchiveIsSet_ = true;
}

bool TestCase::isArchiveIsSet() const
{
    return isArchiveIsSet_;
}

void TestCase::unsetisArchive()
{
    isArchiveIsSet_ = false;
}

std::string TestCase::getMindmapId() const
{
    return mindmapId_;
}

void TestCase::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool TestCase::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void TestCase::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string TestCase::getNodeId() const
{
    return nodeId_;
}

void TestCase::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool TestCase::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void TestCase::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string TestCase::getBatchId() const
{
    return batchId_;
}

void TestCase::setBatchId(const std::string& value)
{
    batchId_ = value;
    batchIdIsSet_ = true;
}

bool TestCase::batchIdIsSet() const
{
    return batchIdIsSet_;
}

void TestCase::unsetbatchId()
{
    batchIdIsSet_ = false;
}

std::string TestCase::getBranchId() const
{
    return branchId_;
}

void TestCase::setBranchId(const std::string& value)
{
    branchId_ = value;
    branchIdIsSet_ = true;
}

bool TestCase::branchIdIsSet() const
{
    return branchIdIsSet_;
}

void TestCase::unsetbranchId()
{
    branchIdIsSet_ = false;
}

std::string TestCase::getPlanId() const
{
    return planId_;
}

void TestCase::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool TestCase::planIdIsSet() const
{
    return planIdIsSet_;
}

void TestCase::unsetplanId()
{
    planIdIsSet_ = false;
}

std::string TestCase::getPrerequisite() const
{
    return prerequisite_;
}

void TestCase::setPrerequisite(const std::string& value)
{
    prerequisite_ = value;
    prerequisiteIsSet_ = true;
}

bool TestCase::prerequisiteIsSet() const
{
    return prerequisiteIsSet_;
}

void TestCase::unsetprerequisite()
{
    prerequisiteIsSet_ = false;
}

std::string TestCase::getTestCaseLevel() const
{
    return testCaseLevel_;
}

void TestCase::setTestCaseLevel(const std::string& value)
{
    testCaseLevel_ = value;
    testCaseLevelIsSet_ = true;
}

bool TestCase::testCaseLevelIsSet() const
{
    return testCaseLevelIsSet_;
}

void TestCase::unsettestCaseLevel()
{
    testCaseLevelIsSet_ = false;
}

std::string TestCase::getTestProcedure() const
{
    return testProcedure_;
}

void TestCase::setTestProcedure(const std::string& value)
{
    testProcedure_ = value;
    testProcedureIsSet_ = true;
}

bool TestCase::testProcedureIsSet() const
{
    return testProcedureIsSet_;
}

void TestCase::unsettestProcedure()
{
    testProcedureIsSet_ = false;
}

std::string TestCase::getUpdateName() const
{
    return updateName_;
}

void TestCase::setUpdateName(const std::string& value)
{
    updateName_ = value;
    updateNameIsSet_ = true;
}

bool TestCase::updateNameIsSet() const
{
    return updateNameIsSet_;
}

void TestCase::unsetupdateName()
{
    updateNameIsSet_ = false;
}

std::string TestCase::getUpdateNum() const
{
    return updateNum_;
}

void TestCase::setUpdateNum(const std::string& value)
{
    updateNum_ = value;
    updateNumIsSet_ = true;
}

bool TestCase::updateNumIsSet() const
{
    return updateNumIsSet_;
}

void TestCase::unsetupdateNum()
{
    updateNumIsSet_ = false;
}

utility::datetime TestCase::getUpdateTime() const
{
    return updateTime_;
}

void TestCase::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TestCase::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TestCase::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string TestCase::getUrl() const
{
    return url_;
}

void TestCase::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool TestCase::urlIsSet() const
{
    return urlIsSet_;
}

void TestCase::unseturl()
{
    urlIsSet_ = false;
}

std::string TestCase::getUri() const
{
    return uri_;
}

void TestCase::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestCase::uriIsSet() const
{
    return uriIsSet_;
}

void TestCase::unseturi()
{
    uriIsSet_ = false;
}

std::string TestCase::getProjectId() const
{
    return projectId_;
}

void TestCase::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TestCase::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TestCase::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TestCase::getServiceId() const
{
    return serviceId_;
}

void TestCase::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool TestCase::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void TestCase::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

}
}
}
}
}


