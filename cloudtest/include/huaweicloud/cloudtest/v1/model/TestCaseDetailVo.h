
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseDetailVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseDetailVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/LabelVo.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/SimpleIssueVo.h>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/cloudtest/v1/model/NameAndIdVo.h>
#include <huaweicloud/cloudtest/v1/model/TestCaseStepVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseDetailVo
    : public ModelBase
{
public:
    TestCaseDetailVo();
    virtual ~TestCaseDetailVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseDetailVo members

    /// <summary>
    /// 资源URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 级别
    /// </summary>

    int32_t getRank() const;
    bool rankIsSet() const;
    void unsetrank();
    void setRank(int32_t value);

    /// <summary>
    /// 前置条件
    /// </summary>

    std::string getPreparation() const;
    bool preparationIsSet() const;
    void unsetpreparation();
    void setPreparation(const std::string& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// 测试阶段
    /// </summary>

    std::string getStage() const;
    bool stageIsSet() const;
    void unsetstage();
    void setStage(const std::string& value);

    /// <summary>
    /// 测试类型
    /// </summary>

    std::string getActivity() const;
    bool activityIsSet() const;
    void unsetactivity();
    void setActivity(const std::string& value);

    /// <summary>
    /// 关键词
    /// </summary>

    std::string getKeywords() const;
    bool keywordsIsSet() const;
    void unsetkeywords();
    void setKeywords(const std::string& value);

    /// <summary>
    /// apitest标记是否代码已提交
    /// </summary>

    std::string getMarket() const;
    bool marketIsSet() const;
    void unsetmarket();
    void setMarket(const std::string& value);

    /// <summary>
    /// 设计者
    /// </summary>

    std::string getDesigner() const;
    bool designerIsSet() const;
    void unsetdesigner();
    void setDesigner(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 执行参数
    /// </summary>

    std::string getExecuteParameter() const;
    bool executeParameterIsSet() const;
    void unsetexecuteParameter();
    void setExecuteParameter(const std::string& value);

    /// <summary>
    /// 逻辑region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 处理人id，IteratorTestCase字段
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleIssueVo getIssue() const;
    bool issueIsSet() const;
    void unsetissue();
    void setIssue(const SimpleIssueVo& value);

    /// <summary>
    /// 最后修改人
    /// </summary>

    std::string getLastModifier() const;
    bool lastModifierIsSet() const;
    void unsetlastModifier();
    void setLastModifier(const std::string& value);

    /// <summary>
    /// 最后修改时间
    /// </summary>

    utility::datetime getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const utility::datetime& value);

    /// <summary>
    /// 修改时间时间戳
    /// </summary>

    int64_t getLastModifiedTimestamp() const;
    bool lastModifiedTimestampIsSet() const;
    void unsetlastModifiedTimestamp();
    void setLastModifiedTimestamp(int64_t value);

    /// <summary>
    /// 最后变更时间
    /// </summary>

    utility::datetime getLastChangeTime() const;
    bool lastChangeTimeIsSet() const;
    void unsetlastChangeTime();
    void setLastChangeTime(const utility::datetime& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 源资源URI
    /// </summary>

    std::string getOriginUri() const;
    bool originUriIsSet() const;
    void unsetoriginUri();
    void setOriginUri(const std::string& value);

    /// <summary>
    /// 父资源URI
    /// </summary>

    std::string getParentUri() const;
    bool parentUriIsSet() const;
    void unsetparentUri();
    void setParentUri(const std::string& value);

    /// <summary>
    /// 父资源路径
    /// </summary>

    std::string getParentPath() const;
    bool parentPathIsSet() const;
    void unsetparentPath();
    void setParentPath(const std::string& value);

    /// <summary>
    /// 创建版本URI
    /// </summary>

    std::string getCreationVersionUri() const;
    bool creationVersionUriIsSet() const;
    void unsetcreationVersionUri();
    void setCreationVersionUri(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreationDate() const;
    bool creationDateIsSet() const;
    void unsetcreationDate();
    void setCreationDate(const utility::datetime& value);

    /// <summary>
    /// 创建时间时间戳
    /// </summary>

    int64_t getCreationDateTimestamp() const;
    bool creationDateTimestampIsSet() const;
    void unsetcreationDateTimestamp();
    void setCreationDateTimestamp(int64_t value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 用例类型
    /// </summary>

    int32_t getCaseType() const;
    bool caseTypeIsSet() const;
    void unsetcaseType();
    void setCaseType(int32_t value);

    /// <summary>
    /// 执行平台类型
    /// </summary>

    int32_t getPlatformType() const;
    bool platformTypeIsSet() const;
    void unsetplatformType();
    void setPlatformType(int32_t value);

    /// <summary>
    /// 服务类型
    /// </summary>

    int32_t getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(int32_t value);

    /// <summary>
    /// 服务类型名称
    /// </summary>

    std::string getServiceTypeName() const;
    bool serviceTypeNameIsSet() const;
    void unsetserviceTypeName();
    void setServiceTypeName(const std::string& value);

    /// <summary>
    /// 测试类型
    /// </summary>

    int32_t getTestType() const;
    bool testTypeIsSet() const;
    void unsettestType();
    void setTestType(int32_t value);

    /// <summary>
    /// 测试类型名称
    /// </summary>

    std::string getTestTypeName() const;
    bool testTypeNameIsSet() const;
    void unsettestTypeName();
    void setTestTypeName(const std::string& value);

    /// <summary>
    /// 设计描述
    /// </summary>

    std::string getDesignNote() const;
    bool designNoteIsSet() const;
    void unsetdesignNote();
    void setDesignNote(const std::string& value);

    /// <summary>
    /// 测试步骤
    /// </summary>

    std::string getTestStep() const;
    bool testStepIsSet() const;
    void unsettestStep();
    void setTestStep(const std::string& value);

    /// <summary>
    /// 期望结果
    /// </summary>

    std::string getExpectOutput() const;
    bool expectOutputIsSet() const;
    void unsetexpectOutput();
    void setExpectOutput(const std::string& value);

    /// <summary>
    /// 测试环境类型
    /// </summary>

    std::string getEnvType() const;
    bool envTypeIsSet() const;
    void unsetenvType();
    void setEnvType(const std::string& value);

    /// <summary>
    /// 执行平台
    /// </summary>

    std::string getExePlatform() const;
    bool exePlatformIsSet() const;
    void unsetexePlatform();
    void setExePlatform(const std::string& value);

    /// <summary>
    /// 测试工程
    /// </summary>

    std::string getTestcaseProject() const;
    bool testcaseProjectIsSet() const;
    void unsettestcaseProject();
    void setTestcaseProject(const std::string& value);

    /// <summary>
    /// 脚本路径
    /// </summary>

    std::string getSvnScriptPath() const;
    bool svnScriptPathIsSet() const;
    void unsetsvnScriptPath();
    void setSvnScriptPath(const std::string& value);

    /// <summary>
    /// 约束条件
    /// </summary>

    std::string getMapRestrict() const;
    bool mapRestrictIsSet() const;
    void unsetmapRestrict();
    void setMapRestrict(const std::string& value);

    /// <summary>
    /// 网络脚本名
    /// </summary>

    std::string getNetworkScriptName() const;
    bool networkScriptNameIsSet() const;
    void unsetnetworkScriptName();
    void setNetworkScriptName(const std::string& value);

    /// <summary>
    /// 自动化类型，非自动化:0, 是自动化:1
    /// </summary>

    int32_t getAutoType() const;
    bool autoTypeIsSet() const;
    void unsetautoType();
    void setAutoType(int32_t value);

    /// <summary>
    /// 被自动化执行
    /// </summary>

    int32_t getToBeAutoExec() const;
    bool toBeAutoExecIsSet() const;
    void unsettoBeAutoExec();
    void setToBeAutoExec(int32_t value);

    /// <summary>
    /// 最后一次结果
    /// </summary>

    std::string getLastResult() const;
    bool lastResultIsSet() const;
    void unsetlastResult();
    void setLastResult(const std::string& value);

    /// <summary>
    /// 最后一次结果Uri
    /// </summary>

    std::string getLastResultUri() const;
    bool lastResultUriIsSet() const;
    void unsetlastResultUri();
    void setLastResultUri(const std::string& value);

    /// <summary>
    /// 目录Uri
    /// </summary>

    std::string getFeatureUri() const;
    bool featureUriIsSet() const;
    void unsetfeatureUri();
    void setFeatureUri(const std::string& value);

    /// <summary>
    /// 目录名称
    /// </summary>

    std::string getFeatureName() const;
    bool featureNameIsSet() const;
    void unsetfeatureName();
    void setFeatureName(const std::string& value);

    /// <summary>
    /// 测试接口名
    /// </summary>

    std::string getInterfaceName() const;
    bool interfaceNameIsSet() const;
    void unsetinterfaceName();
    void setInterfaceName(const std::string& value);

    /// <summary>
    /// 网络问题ID
    /// </summary>

    std::string getSnpNo() const;
    bool snpNoIsSet() const;
    void unsetsnpNo();
    void setSnpNo(const std::string& value);

    /// <summary>
    /// 关联需求编号
    /// </summary>

    std::string getDrRelationId() const;
    bool drRelationIdIsSet() const;
    void unsetdrRelationId();
    void setDrRelationId(const std::string& value);

    /// <summary>
    /// 需求名称
    /// </summary>

    std::string getIssueName() const;
    bool issueNameIsSet() const;
    void unsetissueName();
    void setIssueName(const std::string& value);

    /// <summary>
    /// 测试基数
    /// </summary>

    std::string getTestBaseNum() const;
    bool testBaseNumIsSet() const;
    void unsettestBaseNum();
    void setTestBaseNum(const std::string& value);

    /// <summary>
    /// 是否被自动化执行
    /// </summary>

    int32_t getAutomaticallyExecuted() const;
    bool automaticallyExecutedIsSet() const;
    void unsetautomaticallyExecuted();
    void setAutomaticallyExecuted(int32_t value);

    /// <summary>
    /// 第一次执行时间
    /// </summary>

    utility::datetime getFirstExecuteTime() const;
    bool firstExecuteTimeIsSet() const;
    void unsetfirstExecuteTime();
    void setFirstExecuteTime(const utility::datetime& value);

    /// <summary>
    /// 检测类型
    /// </summary>

    std::string getDetectType() const;
    bool detectTypeIsSet() const;
    void unsetdetectType();
    void setDetectType(const std::string& value);

    /// <summary>
    /// 执行参数
    /// </summary>

    std::string getExecuteParam() const;
    bool executeParamIsSet() const;
    void unsetexecuteParam();
    void setExecuteParam(const std::string& value);

    /// <summary>
    /// 分析领域
    /// </summary>

    std::string getTestFeature() const;
    bool testFeatureIsSet() const;
    void unsettestFeature();
    void setTestFeature(const std::string& value);

    /// <summary>
    /// 是否是契约用例，0:表示非契约用例, 1：表示契约用例
    /// </summary>

    int32_t getIsContractTestcase() const;
    bool isContractTestcaseIsSet() const;
    void unsetisContractTestcase();
    void setIsContractTestcase(int32_t value);

    /// <summary>
    /// 总共耗时
    /// </summary>

    double getTimeCost() const;
    bool timeCostIsSet() const;
    void unsettimeCost();
    void setTimeCost(double value);

    /// <summary>
    /// 记录用例由非自动化变为自动化类型的时间
    /// </summary>

    utility::datetime getBeAutoTypeTime() const;
    bool beAutoTypeTimeIsSet() const;
    void unsetbeAutoTypeTime();
    void setBeAutoTypeTime(const utility::datetime& value);

    /// <summary>
    /// 配对用例编号
    /// </summary>

    std::string getCompareNumber() const;
    bool compareNumberIsSet() const;
    void unsetcompareNumber();
    void setCompareNumber(const std::string& value);

    /// <summary>
    /// 场景标识
    /// </summary>

    std::string getSceneFlag() const;
    bool sceneFlagIsSet() const;
    void unsetsceneFlag();
    void setSceneFlag(const std::string& value);

    /// <summary>
    /// 场景标识
    /// </summary>

    std::string getBaseFlag() const;
    bool baseFlagIsSet() const;
    void unsetbaseFlag();
    void setBaseFlag(const std::string& value);

    /// <summary>
    /// 区别是否从yaml中生成的用例，默认false
    /// </summary>

    std::string getParaValidator() const;
    bool paraValidatorIsSet() const;
    void unsetparaValidator();
    void setParaValidator(const std::string& value);

    /// <summary>
    /// knet节点id
    /// </summary>

    std::string getKnetNodeId() const;
    bool knetNodeIdIsSet() const;
    void unsetknetNodeId();
    void setKnetNodeId(const std::string& value);

    /// <summary>
    /// 最后一次执行用户
    /// </summary>

    std::string getLastExeAuthor() const;
    bool lastExeAuthorIsSet() const;
    void unsetlastExeAuthor();
    void setLastExeAuthor(const std::string& value);

    /// <summary>
    /// 运营商
    /// </summary>

    std::string getCloudCarrier() const;
    bool cloudCarrierIsSet() const;
    void unsetcloudCarrier();
    void setCloudCarrier(const std::string& value);

    /// <summary>
    /// 应用市场
    /// </summary>

    std::string getMarketPlace() const;
    bool marketPlaceIsSet() const;
    void unsetmarketPlace();
    void setMarketPlace(const std::string& value);

    /// <summary>
    /// 脑图id
    /// </summary>

    std::string getTestMindId() const;
    bool testMindIdIsSet() const;
    void unsettestMindId();
    void setTestMindId(const std::string& value);

    /// <summary>
    /// 脑图url
    /// </summary>

    std::string getTestMindUrl() const;
    bool testMindUrlIsSet() const;
    void unsettestMindUrl();
    void setTestMindUrl(const std::string& value);

    /// <summary>
    /// git提交url
    /// </summary>

    std::string getCommitUrl() const;
    bool commitUrlIsSet() const;
    void unsetcommitUrl();
    void setCommitUrl(const std::string& value);

    /// <summary>
    /// 测试模式编号
    /// </summary>

    std::string getTestPatternNumber() const;
    bool testPatternNumberIsSet() const;
    void unsettestPatternNumber();
    void setTestPatternNumber(const std::string& value);

    /// <summary>
    /// 测试因子编号
    /// </summary>

    std::string getTestFactorNumber() const;
    bool testFactorNumberIsSet() const;
    void unsettestFactorNumber();
    void setTestFactorNumber(const std::string& value);

    /// <summary>
    /// 状态Code
    /// </summary>

    std::string getStatusCode() const;
    bool statusCodeIsSet() const;
    void unsetstatusCode();
    void setStatusCode(const std::string& value);

    /// <summary>
    /// 结果Code
    /// </summary>

    std::string getResultCode() const;
    bool resultCodeIsSet() const;
    void unsetresultCode();
    void setResultCode(const std::string& value);

    /// <summary>
    /// 迭代ID
    /// </summary>

    std::string getReleaseId() const;
    bool releaseIdIsSet() const;
    void unsetreleaseId();
    void setReleaseId(const std::string& value);

    /// <summary>
    /// 标签ID
    /// </summary>

    std::string getLabelId() const;
    bool labelIdIsSet() const;
    void unsetlabelId();
    void setLabelId(const std::string& value);

    /// <summary>
    /// 用例标签名称列表
    /// </summary>

    std::vector<LabelVo>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<LabelVo>& value);

    /// <summary>
    /// 模块ID
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 模块名称
    /// </summary>

    std::string getModuleName() const;
    bool moduleNameIsSet() const;
    void unsetmoduleName();
    void setModuleName(const std::string& value);

    /// <summary>
    /// 模块path
    /// </summary>

    std::string getModulePath() const;
    bool modulePathIsSet() const;
    void unsetmodulePath();
    void setModulePath(const std::string& value);

    /// <summary>
    /// 模块路径名称
    /// </summary>

    std::string getModulePathName() const;
    bool modulePathNameIsSet() const;
    void unsetmodulePathName();
    void setModulePathName(const std::string& value);

    /// <summary>
    /// 最后执行时间
    /// </summary>

    utility::datetime getExecuteLatestTime() const;
    bool executeLatestTimeIsSet() const;
    void unsetexecuteLatestTime();
    void setExecuteLatestTime(const utility::datetime& value);

    /// <summary>
    /// 执行时长
    /// </summary>

    std::string getExecuteDuration() const;
    bool executeDurationIsSet() const;
    void unsetexecuteDuration();
    void setExecuteDuration(const std::string& value);

    /// <summary>
    /// 执行次数
    /// </summary>

    int32_t getExecuteTimes() const;
    bool executeTimesIsSet() const;
    void unsetexecuteTimes();
    void setExecuteTimes(int32_t value);

    /// <summary>
    /// 是否关键用例
    /// </summary>

    int32_t getIsKeyword() const;
    bool isKeywordIsSet() const;
    void unsetisKeyword();
    void setIsKeyword(int32_t value);

    /// <summary>
    /// 测试版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 是否用户新增用例
    /// </summary>

    std::string getNewCreated() const;
    bool newCreatedIsSet() const;
    void unsetnewCreated();
    void setNewCreated(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 创建版本名称，原逻辑marshall添加字段
    /// </summary>

    std::string getCreationVersionName() const;
    bool creationVersionNameIsSet() const;
    void unsetcreationVersionName();
    void setCreationVersionName(const std::string& value);

    /// <summary>
    /// 特性路径，原逻辑marshall添加字段
    /// </summary>

    std::string getFeaturePath() const;
    bool featurePathIsSet() const;
    void unsetfeaturePath();
    void setFeaturePath(const std::string& value);

    /// <summary>
    /// 实体用例Uri，IteratorTestCase字段
    /// </summary>

    std::string getTestcaseUri() const;
    bool testcaseUriIsSet() const;
    void unsettestcaseUri();
    void setTestcaseUri(const std::string& value);

    /// <summary>
    /// 处理人名称
    /// </summary>

    std::string getOwnerName() const;
    bool ownerNameIsSet() const;
    void unsetownerName();
    void setOwnerName(const std::string& value);

    /// <summary>
    /// 迭代用例Uri，IteratorTestCase字段
    /// </summary>

    std::string getIteratorCaseUri() const;
    bool iteratorCaseUriIsSet() const;
    void unsetiteratorCaseUri();
    void setIteratorCaseUri(const std::string& value);

    /// <summary>
    /// 脚本链接scriptLink
    /// </summary>

    std::string getScriptLink() const;
    bool scriptLinkIsSet() const;
    void unsetscriptLink();
    void setScriptLink(const std::string& value);

    /// <summary>
    /// 自定义字段1
    /// </summary>

    std::string getCustomField1() const;
    bool customField1IsSet() const;
    void unsetcustomField1();
    void setCustomField1(const std::string& value);

    /// <summary>
    /// 自定义字段2
    /// </summary>

    std::string getCustomField2() const;
    bool customField2IsSet() const;
    void unsetcustomField2();
    void setCustomField2(const std::string& value);

    /// <summary>
    /// 自定义字段3
    /// </summary>

    std::string getCustomField3() const;
    bool customField3IsSet() const;
    void unsetcustomField3();
    void setCustomField3(const std::string& value);

    /// <summary>
    /// 自定义字段4
    /// </summary>

    std::string getCustomField4() const;
    bool customField4IsSet() const;
    void unsetcustomField4();
    void setCustomField4(const std::string& value);

    /// <summary>
    /// 自定义字段5
    /// </summary>

    std::string getCustomField5() const;
    bool customField5IsSet() const;
    void unsetcustomField5();
    void setCustomField5(const std::string& value);

    /// <summary>
    /// 自定义字段6
    /// </summary>

    std::string getCustomField6() const;
    bool customField6IsSet() const;
    void unsetcustomField6();
    void setCustomField6(const std::string& value);

    /// <summary>
    /// 自定义字段7
    /// </summary>

    std::string getCustomField7() const;
    bool customField7IsSet() const;
    void unsetcustomField7();
    void setCustomField7(const std::string& value);

    /// <summary>
    /// 自定义字段8
    /// </summary>

    std::string getCustomField8() const;
    bool customField8IsSet() const;
    void unsetcustomField8();
    void setCustomField8(const std::string& value);

    /// <summary>
    /// 自定义字段9
    /// </summary>

    std::string getCustomField9() const;
    bool customField9IsSet() const;
    void unsetcustomField9();
    void setCustomField9(const std::string& value);

    /// <summary>
    /// 自定义字段10
    /// </summary>

    std::string getCustomField10() const;
    bool customField10IsSet() const;
    void unsetcustomField10();
    void setCustomField10(const std::string& value);

    /// <summary>
    /// 自定义字段11
    /// </summary>

    std::string getCustomField11() const;
    bool customField11IsSet() const;
    void unsetcustomField11();
    void setCustomField11(const std::string& value);

    /// <summary>
    /// 自定义字段12
    /// </summary>

    std::string getCustomField12() const;
    bool customField12IsSet() const;
    void unsetcustomField12();
    void setCustomField12(const std::string& value);

    /// <summary>
    /// 自定义字段13
    /// </summary>

    std::string getCustomField13() const;
    bool customField13IsSet() const;
    void unsetcustomField13();
    void setCustomField13(const std::string& value);

    /// <summary>
    /// 自定义字段14
    /// </summary>

    std::string getCustomField14() const;
    bool customField14IsSet() const;
    void unsetcustomField14();
    void setCustomField14(const std::string& value);

    /// <summary>
    /// 自定义字段15
    /// </summary>

    std::string getCustomField15() const;
    bool customField15IsSet() const;
    void unsetcustomField15();
    void setCustomField15(const std::string& value);

    /// <summary>
    /// 自定义字段16
    /// </summary>

    std::string getCustomField16() const;
    bool customField16IsSet() const;
    void unsetcustomField16();
    void setCustomField16(const std::string& value);

    /// <summary>
    /// 自定义字段17
    /// </summary>

    std::string getCustomField17() const;
    bool customField17IsSet() const;
    void unsetcustomField17();
    void setCustomField17(const std::string& value);

    /// <summary>
    /// 自定义字段18
    /// </summary>

    std::string getCustomField18() const;
    bool customField18IsSet() const;
    void unsetcustomField18();
    void setCustomField18(const std::string& value);

    /// <summary>
    /// 自定义字段19
    /// </summary>

    std::string getCustomField19() const;
    bool customField19IsSet() const;
    void unsetcustomField19();
    void setCustomField19(const std::string& value);

    /// <summary>
    /// 自定义字段20
    /// </summary>

    std::string getCustomField20() const;
    bool customField20IsSet() const;
    void unsetcustomField20();
    void setCustomField20(const std::string& value);

    /// <summary>
    /// 自定义字段21
    /// </summary>

    std::string getCustomField21() const;
    bool customField21IsSet() const;
    void unsetcustomField21();
    void setCustomField21(const std::string& value);

    /// <summary>
    /// 自定义字段22
    /// </summary>

    std::string getCustomField22() const;
    bool customField22IsSet() const;
    void unsetcustomField22();
    void setCustomField22(const std::string& value);

    /// <summary>
    /// 自定义字段23
    /// </summary>

    std::string getCustomField23() const;
    bool customField23IsSet() const;
    void unsetcustomField23();
    void setCustomField23(const std::string& value);

    /// <summary>
    /// 自定义字段24
    /// </summary>

    std::string getCustomField24() const;
    bool customField24IsSet() const;
    void unsetcustomField24();
    void setCustomField24(const std::string& value);

    /// <summary>
    /// 自定义字段25
    /// </summary>

    std::string getCustomField25() const;
    bool customField25IsSet() const;
    void unsetcustomField25();
    void setCustomField25(const std::string& value);

    /// <summary>
    /// 更新人名称
    /// </summary>

    std::string getLastModifierName() const;
    bool lastModifierNameIsSet() const;
    void unsetlastModifierName();
    void setLastModifierName(const std::string& value);

    /// <summary>
    /// 迭代
    /// </summary>

    std::string getVersionName() const;
    bool versionNameIsSet() const;
    void unsetversionName();
    void setVersionName(const std::string& value);

    /// <summary>
    /// 测试步骤
    /// </summary>

    std::vector<TestCaseStepVo>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<TestCaseStepVo>& value);

    /// <summary>
    /// 是否关联缺陷
    /// </summary>

    bool isAssociateDefect() const;
    bool associateDefectIsSet() const;
    void unsetassociateDefect();
    void setAssociateDefect(bool value);

    /// <summary>
    /// 是否关联需求
    /// </summary>

    bool isAssociateIssue() const;
    bool associateIssueIsSet() const;
    void unsetassociateIssue();
    void setAssociateIssue(bool value);

    /// <summary>
    /// 缺陷关联信息
    /// </summary>

    std::vector<NameAndIdVo>& getDefectList();
    bool defectListIsSet() const;
    void unsetdefectList();
    void setDefectList(const std::vector<NameAndIdVo>& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string author_;
    bool authorIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t rank_;
    bool rankIsSet_;
    std::string preparation_;
    bool preparationIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::string stage_;
    bool stageIsSet_;
    std::string activity_;
    bool activityIsSet_;
    std::string keywords_;
    bool keywordsIsSet_;
    std::string market_;
    bool marketIsSet_;
    std::string designer_;
    bool designerIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string executeParameter_;
    bool executeParameterIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    SimpleIssueVo issue_;
    bool issueIsSet_;
    std::string lastModifier_;
    bool lastModifierIsSet_;
    utility::datetime lastModified_;
    bool lastModifiedIsSet_;
    int64_t lastModifiedTimestamp_;
    bool lastModifiedTimestampIsSet_;
    utility::datetime lastChangeTime_;
    bool lastChangeTimeIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string originUri_;
    bool originUriIsSet_;
    std::string parentUri_;
    bool parentUriIsSet_;
    std::string parentPath_;
    bool parentPathIsSet_;
    std::string creationVersionUri_;
    bool creationVersionUriIsSet_;
    utility::datetime creationDate_;
    bool creationDateIsSet_;
    int64_t creationDateTimestamp_;
    bool creationDateTimestampIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string comment_;
    bool commentIsSet_;
    std::string number_;
    bool numberIsSet_;
    int32_t caseType_;
    bool caseTypeIsSet_;
    int32_t platformType_;
    bool platformTypeIsSet_;
    int32_t serviceType_;
    bool serviceTypeIsSet_;
    std::string serviceTypeName_;
    bool serviceTypeNameIsSet_;
    int32_t testType_;
    bool testTypeIsSet_;
    std::string testTypeName_;
    bool testTypeNameIsSet_;
    std::string designNote_;
    bool designNoteIsSet_;
    std::string testStep_;
    bool testStepIsSet_;
    std::string expectOutput_;
    bool expectOutputIsSet_;
    std::string envType_;
    bool envTypeIsSet_;
    std::string exePlatform_;
    bool exePlatformIsSet_;
    std::string testcaseProject_;
    bool testcaseProjectIsSet_;
    std::string svnScriptPath_;
    bool svnScriptPathIsSet_;
    std::string mapRestrict_;
    bool mapRestrictIsSet_;
    std::string networkScriptName_;
    bool networkScriptNameIsSet_;
    int32_t autoType_;
    bool autoTypeIsSet_;
    int32_t toBeAutoExec_;
    bool toBeAutoExecIsSet_;
    std::string lastResult_;
    bool lastResultIsSet_;
    std::string lastResultUri_;
    bool lastResultUriIsSet_;
    std::string featureUri_;
    bool featureUriIsSet_;
    std::string featureName_;
    bool featureNameIsSet_;
    std::string interfaceName_;
    bool interfaceNameIsSet_;
    std::string snpNo_;
    bool snpNoIsSet_;
    std::string drRelationId_;
    bool drRelationIdIsSet_;
    std::string issueName_;
    bool issueNameIsSet_;
    std::string testBaseNum_;
    bool testBaseNumIsSet_;
    int32_t automaticallyExecuted_;
    bool automaticallyExecutedIsSet_;
    utility::datetime firstExecuteTime_;
    bool firstExecuteTimeIsSet_;
    std::string detectType_;
    bool detectTypeIsSet_;
    std::string executeParam_;
    bool executeParamIsSet_;
    std::string testFeature_;
    bool testFeatureIsSet_;
    int32_t isContractTestcase_;
    bool isContractTestcaseIsSet_;
    double timeCost_;
    bool timeCostIsSet_;
    utility::datetime beAutoTypeTime_;
    bool beAutoTypeTimeIsSet_;
    std::string compareNumber_;
    bool compareNumberIsSet_;
    std::string sceneFlag_;
    bool sceneFlagIsSet_;
    std::string baseFlag_;
    bool baseFlagIsSet_;
    std::string paraValidator_;
    bool paraValidatorIsSet_;
    std::string knetNodeId_;
    bool knetNodeIdIsSet_;
    std::string lastExeAuthor_;
    bool lastExeAuthorIsSet_;
    std::string cloudCarrier_;
    bool cloudCarrierIsSet_;
    std::string marketPlace_;
    bool marketPlaceIsSet_;
    std::string testMindId_;
    bool testMindIdIsSet_;
    std::string testMindUrl_;
    bool testMindUrlIsSet_;
    std::string commitUrl_;
    bool commitUrlIsSet_;
    std::string testPatternNumber_;
    bool testPatternNumberIsSet_;
    std::string testFactorNumber_;
    bool testFactorNumberIsSet_;
    std::string statusCode_;
    bool statusCodeIsSet_;
    std::string resultCode_;
    bool resultCodeIsSet_;
    std::string releaseId_;
    bool releaseIdIsSet_;
    std::string labelId_;
    bool labelIdIsSet_;
    std::vector<LabelVo> labels_;
    bool labelsIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string moduleName_;
    bool moduleNameIsSet_;
    std::string modulePath_;
    bool modulePathIsSet_;
    std::string modulePathName_;
    bool modulePathNameIsSet_;
    utility::datetime executeLatestTime_;
    bool executeLatestTimeIsSet_;
    std::string executeDuration_;
    bool executeDurationIsSet_;
    int32_t executeTimes_;
    bool executeTimesIsSet_;
    int32_t isKeyword_;
    bool isKeywordIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string newCreated_;
    bool newCreatedIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string creationVersionName_;
    bool creationVersionNameIsSet_;
    std::string featurePath_;
    bool featurePathIsSet_;
    std::string testcaseUri_;
    bool testcaseUriIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;
    std::string iteratorCaseUri_;
    bool iteratorCaseUriIsSet_;
    std::string scriptLink_;
    bool scriptLinkIsSet_;
    std::string customField1_;
    bool customField1IsSet_;
    std::string customField2_;
    bool customField2IsSet_;
    std::string customField3_;
    bool customField3IsSet_;
    std::string customField4_;
    bool customField4IsSet_;
    std::string customField5_;
    bool customField5IsSet_;
    std::string customField6_;
    bool customField6IsSet_;
    std::string customField7_;
    bool customField7IsSet_;
    std::string customField8_;
    bool customField8IsSet_;
    std::string customField9_;
    bool customField9IsSet_;
    std::string customField10_;
    bool customField10IsSet_;
    std::string customField11_;
    bool customField11IsSet_;
    std::string customField12_;
    bool customField12IsSet_;
    std::string customField13_;
    bool customField13IsSet_;
    std::string customField14_;
    bool customField14IsSet_;
    std::string customField15_;
    bool customField15IsSet_;
    std::string customField16_;
    bool customField16IsSet_;
    std::string customField17_;
    bool customField17IsSet_;
    std::string customField18_;
    bool customField18IsSet_;
    std::string customField19_;
    bool customField19IsSet_;
    std::string customField20_;
    bool customField20IsSet_;
    std::string customField21_;
    bool customField21IsSet_;
    std::string customField22_;
    bool customField22IsSet_;
    std::string customField23_;
    bool customField23IsSet_;
    std::string customField24_;
    bool customField24IsSet_;
    std::string customField25_;
    bool customField25IsSet_;
    std::string lastModifierName_;
    bool lastModifierNameIsSet_;
    std::string versionName_;
    bool versionNameIsSet_;
    std::vector<TestCaseStepVo> steps_;
    bool stepsIsSet_;
    bool associateDefect_;
    bool associateDefectIsSet_;
    bool associateIssue_;
    bool associateIssueIsSet_;
    std::vector<NameAndIdVo> defectList_;
    bool defectListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseDetailVo_H_
