
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_WorkItemVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_WorkItemVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  WorkItemVo
    : public ModelBase
{
public:
    WorkItemVo();
    virtual ~WorkItemVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemVo members

    /// <summary>
    /// 工作项名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 处理人
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 工作项路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 预计开始日期
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// 预计结束日期
    /// </summary>

    std::string getDueDate() const;
    bool dueDateIsSet() const;
    void unsetdueDate();
    void setDueDate(const std::string& value);

    /// <summary>
    /// 逻辑region，外部使用公有云实际区域，内部使用默认值
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdator() const;
    bool updatorIsSet() const;
    void unsetupdator();
    void setUpdator(const std::string& value);

    /// <summary>
    /// 项目ID，外部使用项目ID，内部使用默认值
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 工作项编号
    /// </summary>

    std::string getWorkItemId() const;
    bool workItemIdIsSet() const;
    void unsetworkItemId();
    void setWorkItemId(const std::string& value);

    /// <summary>
    /// 状态ID
    /// </summary>

    std::string getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatusName() const;
    bool statusNameIsSet() const;
    void unsetstatusName();
    void setStatusName(const std::string& value);

    /// <summary>
    /// 类型ID
    /// </summary>

    std::string getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getTrackerName() const;
    bool trackerNameIsSet() const;
    void unsettrackerName();
    void setTrackerName(const std::string& value);

    /// <summary>
    /// 迭代ID
    /// </summary>

    std::string getIterationId() const;
    bool iterationIdIsSet() const;
    void unsetiterationId();
    void setIterationId(const std::string& value);

    /// <summary>
    /// 模块ID
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 重要程度ID
    /// </summary>

    std::string getSeverityId() const;
    bool severityIdIsSet() const;
    void unsetseverityId();
    void setSeverityId(const std::string& value);

    /// <summary>
    /// 重要程度
    /// </summary>

    std::string getSeverityName() const;
    bool severityNameIsSet() const;
    void unsetseverityName();
    void setSeverityName(const std::string& value);

    /// <summary>
    /// 父工作项编号
    /// </summary>

    std::string getParentWorkitemId() const;
    bool parentWorkitemIdIsSet() const;
    void unsetparentWorkitemId();
    void setParentWorkitemId(const std::string& value);

    /// <summary>
    /// 看板ID
    /// </summary>

    std::string getBoardId() const;
    bool boardIdIsSet() const;
    void unsetboardId();
    void setBoardId(const std::string& value);

    /// <summary>
    /// 看板
    /// </summary>

    std::string getBoardName() const;
    bool boardNameIsSet() const;
    void unsetboardName();
    void setBoardName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 迭代名
    /// </summary>

    std::string getIterationName() const;
    bool iterationNameIsSet() const;
    void unsetiterationName();
    void setIterationName(const std::string& value);

    /// <summary>
    /// 模块名
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
    /// 处理人
    /// </summary>

    std::string getOwnerName() const;
    bool ownerNameIsSet() const;
    void unsetownerName();
    void setOwnerName(const std::string& value);

    /// <summary>
    /// 父工作项下是否有子工作项包含动态
    /// </summary>

    bool isHaveChildDynamic() const;
    bool haveChildDynamicIsSet() const;
    void unsethaveChildDynamic();
    void setHaveChildDynamic(bool value);

    /// <summary>
    /// 父工作项下是否有子工作项
    /// </summary>

    bool isHasChild() const;
    bool hasChildIsSet() const;
    void unsethasChild();
    void setHasChild(bool value);

    /// <summary>
    /// 需求动态数量
    /// </summary>

    int32_t getIssueDynamicCount() const;
    bool issueDynamicCountIsSet() const;
    void unsetissueDynamicCount();
    void setIssueDynamicCount(int32_t value);

    /// <summary>
    /// 用例数量
    /// </summary>

    int32_t getCaseCount() const;
    bool caseCountIsSet() const;
    void unsetcaseCount();
    void setCaseCount(int32_t value);

    /// <summary>
    /// xBoard项目工作项序列号
    /// </summary>

    std::string getSequenceId() const;
    bool sequenceIdIsSet() const;
    void unsetsequenceId();
    void setSequenceId(const std::string& value);

    /// <summary>
    /// pi的id，层级关系：pi -&gt; 迭代 -&gt; 需求
    /// </summary>

    std::string getPiId() const;
    bool piIdIsSet() const;
    void unsetpiId();
    void setPiId(const std::string& value);

    /// <summary>
    /// 迭代ID
    /// </summary>

    std::string getPiName() const;
    bool piNameIsSet() const;
    void unsetpiName();
    void setPiName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string startDate_;
    bool startDateIsSet_;
    std::string dueDate_;
    bool dueDateIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string updator_;
    bool updatorIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string workItemId_;
    bool workItemIdIsSet_;
    std::string statusId_;
    bool statusIdIsSet_;
    std::string statusName_;
    bool statusNameIsSet_;
    std::string trackerId_;
    bool trackerIdIsSet_;
    std::string trackerName_;
    bool trackerNameIsSet_;
    std::string iterationId_;
    bool iterationIdIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string severityId_;
    bool severityIdIsSet_;
    std::string severityName_;
    bool severityNameIsSet_;
    std::string parentWorkitemId_;
    bool parentWorkitemIdIsSet_;
    std::string boardId_;
    bool boardIdIsSet_;
    std::string boardName_;
    bool boardNameIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    std::string iterationName_;
    bool iterationNameIsSet_;
    std::string moduleName_;
    bool moduleNameIsSet_;
    std::string modulePath_;
    bool modulePathIsSet_;
    std::string modulePathName_;
    bool modulePathNameIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;
    bool haveChildDynamic_;
    bool haveChildDynamicIsSet_;
    bool hasChild_;
    bool hasChildIsSet_;
    int32_t issueDynamicCount_;
    bool issueDynamicCountIsSet_;
    int32_t caseCount_;
    bool caseCountIsSet_;
    std::string sequenceId_;
    bool sequenceIdIsSet_;
    std::string piId_;
    bool piIdIsSet_;
    std::string piName_;
    bool piNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_WorkItemVo_H_
