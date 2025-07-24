
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/CaseOperationVo.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/NameAndValueAndCodeVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 测试任务集合
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskVo
    : public ModelBase
{
public:
    TaskVo();
    virtual ~TaskVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskVo members

    /// <summary>
    /// 测试任务URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 测试任务名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 测试阶段
    /// </summary>

    std::string getStage() const;
    bool stageIsSet() const;
    void unsetstage();
    void setStage(const std::string& value);

    /// <summary>
    /// 编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 创建人ID
    /// </summary>

    std::string getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(const std::string& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 责任人ID
    /// </summary>

    std::string getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(const std::string& value);

    /// <summary>
    /// 责任人名称
    /// </summary>

    std::string getOwnerName() const;
    bool ownerNameIsSet() const;
    void unsetownerName();
    void setOwnerName(const std::string& value);

    /// <summary>
    /// 父任务URI
    /// </summary>

    std::string getParentUri() const;
    bool parentUriIsSet() const;
    void unsetparentUri();
    void setParentUri(const std::string& value);

    /// <summary>
    /// 父任务路径
    /// </summary>

    std::string getParentPath() const;
    bool parentPathIsSet() const;
    void unsetparentPath();
    void setParentPath(const std::string& value);

    /// <summary>
    /// 源任务URI
    /// </summary>

    std::string getOriginUri() const;
    bool originUriIsSet() const;
    void unsetoriginUri();
    void setOriginUri(const std::string& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 分支URI
    /// </summary>

    std::string getBranchUri() const;
    bool branchUriIsSet() const;
    void unsetbranchUri();
    void setBranchUri(const std::string& value);

    /// <summary>
    /// 版本名称
    /// </summary>

    std::string getVersionName() const;
    bool versionNameIsSet() const;
    void unsetversionName();
    void setVersionName(const std::string& value);

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

    int64_t getCreateDateTimestamp() const;
    bool createDateTimestampIsSet() const;
    void unsetcreateDateTimestamp();
    void setCreateDateTimestamp(int64_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 更新时间时间戳
    /// </summary>

    int64_t getUpdateTimeTimestamp() const;
    bool updateTimeTimestampIsSet() const;
    void unsetupdateTimeTimestamp();
    void setUpdateTimeTimestamp(int64_t value);

    /// <summary>
    /// 关联关系修改时时间
    /// </summary>

    utility::datetime getRelationChangeTime() const;
    bool relationChangeTimeIsSet() const;
    void unsetrelationChangeTime();
    void setRelationChangeTime(const utility::datetime& value);

    /// <summary>
    /// 关联关系修改时间时间戳
    /// </summary>

    int64_t getRelationChangeTimeTimestamp() const;
    bool relationChangeTimeTimestampIsSet() const;
    void unsetrelationChangeTimeTimestamp();
    void setRelationChangeTimeTimestamp(int64_t value);

    /// <summary>
    /// 动态任务用例过滤条件
    /// </summary>

    std::string getTestCaseCondition() const;
    bool testCaseConditionIsSet() const;
    void unsettestCaseCondition();
    void setTestCaseCondition(const std::string& value);

    /// <summary>
    /// 修改人Id
    /// </summary>

    std::string getUpdatorId() const;
    bool updatorIdIsSet() const;
    void unsetupdatorId();
    void setUpdatorId(const std::string& value);

    /// <summary>
    /// 修改人名称
    /// </summary>

    std::string getUpdatorName() const;
    bool updatorNameIsSet() const;
    void unsetupdatorName();
    void setUpdatorName(const std::string& value);

    /// <summary>
    /// 关联关系修改人Id
    /// </summary>

    std::string getRelationChangerId() const;
    bool relationChangerIdIsSet() const;
    void unsetrelationChangerId();
    void setRelationChangerId(const std::string& value);

    /// <summary>
    /// 服务类型ID
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
    /// 标签名称集合
    /// </summary>

    std::vector<std::string>& getTagList();
    bool tagListIsSet() const;
    void unsettagList();
    void setTagList(const std::vector<std::string>& value);

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
    /// 发布版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 扩展参数
    /// </summary>

    std::string getExtParam() const;
    bool extParamIsSet() const;
    void unsetextParam();
    void setExtParam(const std::string& value);

    /// <summary>
    /// 执行方式（1：串行，2：并行）
    /// </summary>

    int32_t getExecuteWay() const;
    bool executeWayIsSet() const;
    void unsetexecuteWay();
    void setExecuteWay(int32_t value);

    /// <summary>
    /// 执行类型（0：冒烟，1：定时）
    /// </summary>

    int32_t getExecuteType() const;
    bool executeTypeIsSet() const;
    void unsetexecuteType();
    void setExecuteType(int32_t value);

    /// <summary>
    /// 生命周期状态Code
    /// </summary>

    int32_t getStatusCode() const;
    bool statusCodeIsSet() const;
    void unsetstatusCode();
    void setStatusCode(int32_t value);

    /// <summary>
    /// 生命周期状态名称
    /// </summary>

    std::string getStatusName() const;
    bool statusNameIsSet() const;
    void unsetstatusName();
    void setStatusName(const std::string& value);

    /// <summary>
    /// 执行结果Code
    /// </summary>

    int32_t getResultCode() const;
    bool resultCodeIsSet() const;
    void unsetresultCode();
    void setResultCode(int32_t value);

    /// <summary>
    /// 执行状态名称
    /// </summary>

    std::string getResultName() const;
    bool resultNameIsSet() const;
    void unsetresultName();
    void setResultName(const std::string& value);

    /// <summary>
    /// Echo执行状态Code
    /// </summary>

    int32_t getExecuteStatusCode() const;
    bool executeStatusCodeIsSet() const;
    void unsetexecuteStatusCode();
    void setExecuteStatusCode(int32_t value);

    /// <summary>
    /// Echo执行状态名称
    /// </summary>

    std::string getExecuteStatusName() const;
    bool executeStatusNameIsSet() const;
    void unsetexecuteStatusName();
    void setExecuteStatusName(const std::string& value);

    /// <summary>
    /// 执行人ID
    /// </summary>

    std::string getExecutorId() const;
    bool executorIdIsSet() const;
    void unsetexecutorId();
    void setExecutorId(const std::string& value);

    /// <summary>
    /// 执行人名称
    /// </summary>

    std::string getExecutorName() const;
    bool executorNameIsSet() const;
    void unsetexecutorName();
    void setExecutorName(const std::string& value);

    /// <summary>
    /// 最近执行时间
    /// </summary>

    utility::datetime getExecuteLatestTime() const;
    bool executeLatestTimeIsSet() const;
    void unsetexecuteLatestTime();
    void setExecuteLatestTime(const utility::datetime& value);

    /// <summary>
    /// 最近执行时间时间戳
    /// </summary>

    int64_t getExecuteLatestTimeTimestamp() const;
    bool executeLatestTimeTimestampIsSet() const;
    void unsetexecuteLatestTimeTimestamp();
    void setExecuteLatestTimeTimestamp(int64_t value);

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
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CaseOperationVo getCaseOperationInfo() const;
    bool caseOperationInfoIsSet() const;
    void unsetcaseOperationInfo();
    void setCaseOperationInfo(const CaseOperationVo& value);

    /// <summary>
    /// 关联用例数
    /// </summary>

    int32_t getAssignCaseNum() const;
    bool assignCaseNumIsSet() const;
    void unsetassignCaseNum();
    void setAssignCaseNum(int32_t value);

    /// <summary>
    /// 已完成用例数量
    /// </summary>

    int32_t getFinishCaseNum() const;
    bool finishCaseNumIsSet() const;
    void unsetfinishCaseNum();
    void setFinishCaseNum(int32_t value);

    /// <summary>
    /// 关联缺陷数量
    /// </summary>

    int32_t getAssignDefectNum() const;
    bool assignDefectNumIsSet() const;
    void unsetassignDefectNum();
    void setAssignDefectNum(int32_t value);

    /// <summary>
    /// 任务关联用例变更提示信息
    /// </summary>

    std::string getTaskAssignMsg() const;
    bool taskAssignMsgIsSet() const;
    void unsettaskAssignMsg();
    void setTaskAssignMsg(const std::string& value);

    /// <summary>
    /// 测试套所属迭代uri，非迭代下创建的测试套返回null
    /// </summary>

    std::string getIteratorVersionUri() const;
    bool iteratorVersionUriIsSet() const;
    void unsetiteratorVersionUri();
    void setIteratorVersionUri(const std::string& value);

    /// <summary>
    /// 用户自定义结果对应的用例数目
    /// </summary>

    std::vector<NameAndValueAndCodeVo>& getResultNumberList();
    bool resultNumberListIsSet() const;
    void unsetresultNumberList();
    void setResultNumberList(const std::vector<NameAndValueAndCodeVo>& value);

    /// <summary>
    /// 测试套完成时间
    /// </summary>

    utility::datetime getFinishDate() const;
    bool finishDateIsSet() const;
    void unsetfinishDate();
    void setFinishDate(const utility::datetime& value);

    /// <summary>
    /// 测试套完成时间戳
    /// </summary>

    int64_t getFinishDateTimestamp() const;
    bool finishDateTimestampIsSet() const;
    void unsetfinishDateTimestamp();
    void setFinishDateTimestamp(int64_t value);

    /// <summary>
    /// 计划开始时间
    /// </summary>

    utility::datetime getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const utility::datetime& value);

    /// <summary>
    /// 计划开始时间戳
    /// </summary>

    int64_t getPlanStartTimestamp() const;
    bool planStartTimestampIsSet() const;
    void unsetplanStartTimestamp();
    void setPlanStartTimestamp(int64_t value);

    /// <summary>
    /// 计划结束时间
    /// </summary>

    utility::datetime getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const utility::datetime& value);

    /// <summary>
    /// 计划结束时间戳
    /// </summary>

    int64_t getPlanEndTimestamp() const;
    bool planEndTimestampIsSet() const;
    void unsetplanEndTimestamp();
    void setPlanEndTimestamp(int64_t value);

    /// <summary>
    /// 测试套超期状态值，分别为：无状态(null)、未超期(0)、即将超期(1)、已超期(2)、延期完成(3)、按期完成(4)
    /// </summary>

    int32_t getExpirationStatus() const;
    bool expirationStatusIsSet() const;
    void unsetexpirationStatus();
    void setExpirationStatus(int32_t value);

    /// <summary>
    /// 测试套超期状态名称，分别为：无状态(不显示状态)、未超期(Unexpired)、即将超期(About to expire)、已超期(Expired)、延期完成(Delayed completion)、按期完成(On schedule completion)
    /// </summary>

    std::string getExpirationStatusName() const;
    bool expirationStatusNameIsSet() const;
    void unsetexpirationStatusName();
    void setExpirationStatusName(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string stage_;
    bool stageIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string authorId_;
    bool authorIdIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string ownerId_;
    bool ownerIdIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;
    std::string parentUri_;
    bool parentUriIsSet_;
    std::string parentPath_;
    bool parentPathIsSet_;
    std::string originUri_;
    bool originUriIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string branchUri_;
    bool branchUriIsSet_;
    std::string versionName_;
    bool versionNameIsSet_;
    utility::datetime creationDate_;
    bool creationDateIsSet_;
    int64_t createDateTimestamp_;
    bool createDateTimestampIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimeTimestamp_;
    bool updateTimeTimestampIsSet_;
    utility::datetime relationChangeTime_;
    bool relationChangeTimeIsSet_;
    int64_t relationChangeTimeTimestamp_;
    bool relationChangeTimeTimestampIsSet_;
    std::string testCaseCondition_;
    bool testCaseConditionIsSet_;
    std::string updatorId_;
    bool updatorIdIsSet_;
    std::string updatorName_;
    bool updatorNameIsSet_;
    std::string relationChangerId_;
    bool relationChangerIdIsSet_;
    int32_t serviceType_;
    bool serviceTypeIsSet_;
    std::string serviceTypeName_;
    bool serviceTypeNameIsSet_;
    std::vector<std::string> tagList_;
    bool tagListIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string moduleName_;
    bool moduleNameIsSet_;
    std::string modulePath_;
    bool modulePathIsSet_;
    std::string modulePathName_;
    bool modulePathNameIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string extParam_;
    bool extParamIsSet_;
    int32_t executeWay_;
    bool executeWayIsSet_;
    int32_t executeType_;
    bool executeTypeIsSet_;
    int32_t statusCode_;
    bool statusCodeIsSet_;
    std::string statusName_;
    bool statusNameIsSet_;
    int32_t resultCode_;
    bool resultCodeIsSet_;
    std::string resultName_;
    bool resultNameIsSet_;
    int32_t executeStatusCode_;
    bool executeStatusCodeIsSet_;
    std::string executeStatusName_;
    bool executeStatusNameIsSet_;
    std::string executorId_;
    bool executorIdIsSet_;
    std::string executorName_;
    bool executorNameIsSet_;
    utility::datetime executeLatestTime_;
    bool executeLatestTimeIsSet_;
    int64_t executeLatestTimeTimestamp_;
    bool executeLatestTimeTimestampIsSet_;
    std::string executeDuration_;
    bool executeDurationIsSet_;
    int32_t executeTimes_;
    bool executeTimesIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    CaseOperationVo caseOperationInfo_;
    bool caseOperationInfoIsSet_;
    int32_t assignCaseNum_;
    bool assignCaseNumIsSet_;
    int32_t finishCaseNum_;
    bool finishCaseNumIsSet_;
    int32_t assignDefectNum_;
    bool assignDefectNumIsSet_;
    std::string taskAssignMsg_;
    bool taskAssignMsgIsSet_;
    std::string iteratorVersionUri_;
    bool iteratorVersionUriIsSet_;
    std::vector<NameAndValueAndCodeVo> resultNumberList_;
    bool resultNumberListIsSet_;
    utility::datetime finishDate_;
    bool finishDateIsSet_;
    int64_t finishDateTimestamp_;
    bool finishDateTimestampIsSet_;
    utility::datetime planStartDate_;
    bool planStartDateIsSet_;
    int64_t planStartTimestamp_;
    bool planStartTimestampIsSet_;
    utility::datetime planEndDate_;
    bool planEndDateIsSet_;
    int64_t planEndTimestamp_;
    bool planEndTimestampIsSet_;
    int32_t expirationStatus_;
    bool expirationStatusIsSet_;
    std::string expirationStatusName_;
    bool expirationStatusNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskVo_H_
