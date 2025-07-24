

#include "huaweicloud/cloudtest/v1/model/TestCaseListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseListVo::TestCaseListVo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    ownerIsSet_ = false;
    statusIsSet_ = false;
    resultIsSet_ = false;
    moduleIsSet_ = false;
    iterationIsSet_ = false;
    exeplatform_ = "";
    exeplatformIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    rankId_ = "";
    rankIdIsSet_ = false;
    featureUri_ = "";
    featureUriIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    isKeyword_ = false;
    isKeywordIsSet_ = false;
    scriptUrl_ = "";
    scriptUrlIsSet_ = false;
    reportUrl_ = "";
    reportUrlIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    serviceTypeIsSet_ = false;
    testTypeIsSet_ = false;
    createInfoIsSet_ = false;
    executeInfoIsSet_ = false;
    associateIssueInfoIsSet_ = false;
    associateDefectInfoIsSet_ = false;
    caseType_ = 0;
    caseTypeIsSet_ = false;
    labelsIsSet_ = false;
    customFieldInfoIsSet_ = false;
    isTestDesign_ = false;
    isTestDesignIsSet_ = false;
    lastModified_ = 0L;
    lastModifiedIsSet_ = false;
    reviewStatus_ = 0;
    reviewStatusIsSet_ = false;
}

TestCaseListVo::~TestCaseListVo() = default;

void TestCaseListVo::validate()
{
}

web::json::value TestCaseListVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
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
    if(exeplatformIsSet_) {
        val[utility::conversions::to_string_t("exeplatform")] = ModelBase::toJson(exeplatform_);
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
    if(featureUriIsSet_) {
        val[utility::conversions::to_string_t("feature_uri")] = ModelBase::toJson(featureUri_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(isKeywordIsSet_) {
        val[utility::conversions::to_string_t("is_keyword")] = ModelBase::toJson(isKeyword_);
    }
    if(scriptUrlIsSet_) {
        val[utility::conversions::to_string_t("script_url")] = ModelBase::toJson(scriptUrl_);
    }
    if(reportUrlIsSet_) {
        val[utility::conversions::to_string_t("report_url")] = ModelBase::toJson(reportUrl_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
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
    if(caseTypeIsSet_) {
        val[utility::conversions::to_string_t("case_type")] = ModelBase::toJson(caseType_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(customFieldInfoIsSet_) {
        val[utility::conversions::to_string_t("custom_field_info")] = ModelBase::toJson(customFieldInfo_);
    }
    if(isTestDesignIsSet_) {
        val[utility::conversions::to_string_t("is_test_design")] = ModelBase::toJson(isTestDesign_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(reviewStatusIsSet_) {
        val[utility::conversions::to_string_t("review_status")] = ModelBase::toJson(reviewStatus_);
    }

    return val;
}
bool TestCaseListVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("exeplatform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exeplatform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExeplatform(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("feature_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_keyword"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsKeyword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("report_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("case_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::vector<LabelVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_info"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomFieldVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFieldInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_test_design"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_test_design"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTestDesign(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewStatus(refVal);
        }
    }
    return ok;
}


std::string TestCaseListVo::getUri() const
{
    return uri_;
}

void TestCaseListVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestCaseListVo::uriIsSet() const
{
    return uriIsSet_;
}

void TestCaseListVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TestCaseListVo::getName() const
{
    return name_;
}

void TestCaseListVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestCaseListVo::nameIsSet() const
{
    return nameIsSet_;
}

void TestCaseListVo::unsetname()
{
    nameIsSet_ = false;
}

NameAndIdVo TestCaseListVo::getOwner() const
{
    return owner_;
}

void TestCaseListVo::setOwner(const NameAndIdVo& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TestCaseListVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void TestCaseListVo::unsetowner()
{
    ownerIsSet_ = false;
}

NameAndIdVo TestCaseListVo::getStatus() const
{
    return status_;
}

void TestCaseListVo::setStatus(const NameAndIdVo& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TestCaseListVo::statusIsSet() const
{
    return statusIsSet_;
}

void TestCaseListVo::unsetstatus()
{
    statusIsSet_ = false;
}

NameAndIdVo TestCaseListVo::getResult() const
{
    return result_;
}

void TestCaseListVo::setResult(const NameAndIdVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool TestCaseListVo::resultIsSet() const
{
    return resultIsSet_;
}

void TestCaseListVo::unsetresult()
{
    resultIsSet_ = false;
}

NameAndIdVo TestCaseListVo::getModule() const
{
    return module_;
}

void TestCaseListVo::setModule(const NameAndIdVo& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool TestCaseListVo::moduleIsSet() const
{
    return moduleIsSet_;
}

void TestCaseListVo::unsetmodule()
{
    moduleIsSet_ = false;
}

NameAndIdVo TestCaseListVo::getIteration() const
{
    return iteration_;
}

void TestCaseListVo::setIteration(const NameAndIdVo& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool TestCaseListVo::iterationIsSet() const
{
    return iterationIsSet_;
}

void TestCaseListVo::unsetiteration()
{
    iterationIsSet_ = false;
}

std::string TestCaseListVo::getExeplatform() const
{
    return exeplatform_;
}

void TestCaseListVo::setExeplatform(const std::string& value)
{
    exeplatform_ = value;
    exeplatformIsSet_ = true;
}

bool TestCaseListVo::exeplatformIsSet() const
{
    return exeplatformIsSet_;
}

void TestCaseListVo::unsetexeplatform()
{
    exeplatformIsSet_ = false;
}

std::string TestCaseListVo::getNumber() const
{
    return number_;
}

void TestCaseListVo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TestCaseListVo::numberIsSet() const
{
    return numberIsSet_;
}

void TestCaseListVo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string TestCaseListVo::getDescription() const
{
    return description_;
}

void TestCaseListVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TestCaseListVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TestCaseListVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TestCaseListVo::getRankId() const
{
    return rankId_;
}

void TestCaseListVo::setRankId(const std::string& value)
{
    rankId_ = value;
    rankIdIsSet_ = true;
}

bool TestCaseListVo::rankIdIsSet() const
{
    return rankIdIsSet_;
}

void TestCaseListVo::unsetrankId()
{
    rankIdIsSet_ = false;
}

std::string TestCaseListVo::getFeatureUri() const
{
    return featureUri_;
}

void TestCaseListVo::setFeatureUri(const std::string& value)
{
    featureUri_ = value;
    featureUriIsSet_ = true;
}

bool TestCaseListVo::featureUriIsSet() const
{
    return featureUriIsSet_;
}

void TestCaseListVo::unsetfeatureUri()
{
    featureUriIsSet_ = false;
}

std::string TestCaseListVo::getReleaseDev() const
{
    return releaseDev_;
}

void TestCaseListVo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool TestCaseListVo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void TestCaseListVo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

bool TestCaseListVo::isIsKeyword() const
{
    return isKeyword_;
}

void TestCaseListVo::setIsKeyword(bool value)
{
    isKeyword_ = value;
    isKeywordIsSet_ = true;
}

bool TestCaseListVo::isKeywordIsSet() const
{
    return isKeywordIsSet_;
}

void TestCaseListVo::unsetisKeyword()
{
    isKeywordIsSet_ = false;
}

std::string TestCaseListVo::getScriptUrl() const
{
    return scriptUrl_;
}

void TestCaseListVo::setScriptUrl(const std::string& value)
{
    scriptUrl_ = value;
    scriptUrlIsSet_ = true;
}

bool TestCaseListVo::scriptUrlIsSet() const
{
    return scriptUrlIsSet_;
}

void TestCaseListVo::unsetscriptUrl()
{
    scriptUrlIsSet_ = false;
}

std::string TestCaseListVo::getReportUrl() const
{
    return reportUrl_;
}

void TestCaseListVo::setReportUrl(const std::string& value)
{
    reportUrl_ = value;
    reportUrlIsSet_ = true;
}

bool TestCaseListVo::reportUrlIsSet() const
{
    return reportUrlIsSet_;
}

void TestCaseListVo::unsetreportUrl()
{
    reportUrlIsSet_ = false;
}

std::string TestCaseListVo::getProjectUuid() const
{
    return projectUuid_;
}

void TestCaseListVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool TestCaseListVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void TestCaseListVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

NameAndIdVo TestCaseListVo::getServiceType() const
{
    return serviceType_;
}

void TestCaseListVo::setServiceType(const NameAndIdVo& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool TestCaseListVo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void TestCaseListVo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

IntegerIdAndNameVo TestCaseListVo::getTestType() const
{
    return testType_;
}

void TestCaseListVo::setTestType(const IntegerIdAndNameVo& value)
{
    testType_ = value;
    testTypeIsSet_ = true;
}

bool TestCaseListVo::testTypeIsSet() const
{
    return testTypeIsSet_;
}

void TestCaseListVo::unsettestType()
{
    testTypeIsSet_ = false;
}

CreateInfoVo TestCaseListVo::getCreateInfo() const
{
    return createInfo_;
}

void TestCaseListVo::setCreateInfo(const CreateInfoVo& value)
{
    createInfo_ = value;
    createInfoIsSet_ = true;
}

bool TestCaseListVo::createInfoIsSet() const
{
    return createInfoIsSet_;
}

void TestCaseListVo::unsetcreateInfo()
{
    createInfoIsSet_ = false;
}

ExecuteInfoVo TestCaseListVo::getExecuteInfo() const
{
    return executeInfo_;
}

void TestCaseListVo::setExecuteInfo(const ExecuteInfoVo& value)
{
    executeInfo_ = value;
    executeInfoIsSet_ = true;
}

bool TestCaseListVo::executeInfoIsSet() const
{
    return executeInfoIsSet_;
}

void TestCaseListVo::unsetexecuteInfo()
{
    executeInfoIsSet_ = false;
}

AssociateIssueInfoVo TestCaseListVo::getAssociateIssueInfo() const
{
    return associateIssueInfo_;
}

void TestCaseListVo::setAssociateIssueInfo(const AssociateIssueInfoVo& value)
{
    associateIssueInfo_ = value;
    associateIssueInfoIsSet_ = true;
}

bool TestCaseListVo::associateIssueInfoIsSet() const
{
    return associateIssueInfoIsSet_;
}

void TestCaseListVo::unsetassociateIssueInfo()
{
    associateIssueInfoIsSet_ = false;
}

AssociateDefectInfoVo TestCaseListVo::getAssociateDefectInfo() const
{
    return associateDefectInfo_;
}

void TestCaseListVo::setAssociateDefectInfo(const AssociateDefectInfoVo& value)
{
    associateDefectInfo_ = value;
    associateDefectInfoIsSet_ = true;
}

bool TestCaseListVo::associateDefectInfoIsSet() const
{
    return associateDefectInfoIsSet_;
}

void TestCaseListVo::unsetassociateDefectInfo()
{
    associateDefectInfoIsSet_ = false;
}

int32_t TestCaseListVo::getCaseType() const
{
    return caseType_;
}

void TestCaseListVo::setCaseType(int32_t value)
{
    caseType_ = value;
    caseTypeIsSet_ = true;
}

bool TestCaseListVo::caseTypeIsSet() const
{
    return caseTypeIsSet_;
}

void TestCaseListVo::unsetcaseType()
{
    caseTypeIsSet_ = false;
}

std::vector<LabelVo>& TestCaseListVo::getLabels()
{
    return labels_;
}

void TestCaseListVo::setLabels(const std::vector<LabelVo>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool TestCaseListVo::labelsIsSet() const
{
    return labelsIsSet_;
}

void TestCaseListVo::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<CustomFieldVo>& TestCaseListVo::getCustomFieldInfo()
{
    return customFieldInfo_;
}

void TestCaseListVo::setCustomFieldInfo(const std::vector<CustomFieldVo>& value)
{
    customFieldInfo_ = value;
    customFieldInfoIsSet_ = true;
}

bool TestCaseListVo::customFieldInfoIsSet() const
{
    return customFieldInfoIsSet_;
}

void TestCaseListVo::unsetcustomFieldInfo()
{
    customFieldInfoIsSet_ = false;
}

bool TestCaseListVo::isIsTestDesign() const
{
    return isTestDesign_;
}

void TestCaseListVo::setIsTestDesign(bool value)
{
    isTestDesign_ = value;
    isTestDesignIsSet_ = true;
}

bool TestCaseListVo::isTestDesignIsSet() const
{
    return isTestDesignIsSet_;
}

void TestCaseListVo::unsetisTestDesign()
{
    isTestDesignIsSet_ = false;
}

int64_t TestCaseListVo::getLastModified() const
{
    return lastModified_;
}

void TestCaseListVo::setLastModified(int64_t value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool TestCaseListVo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void TestCaseListVo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int32_t TestCaseListVo::getReviewStatus() const
{
    return reviewStatus_;
}

void TestCaseListVo::setReviewStatus(int32_t value)
{
    reviewStatus_ = value;
    reviewStatusIsSet_ = true;
}

bool TestCaseListVo::reviewStatusIsSet() const
{
    return reviewStatusIsSet_;
}

void TestCaseListVo::unsetreviewStatus()
{
    reviewStatusIsSet_ = false;
}

}
}
}
}
}


