
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobListResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobListResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ChildrenJobListResp.h>
#include <huaweicloud/drs/v5/model/JobActions.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务列表响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobListResp
    : public ModelBase
{
public:
    JobListResp();
    virtual ~JobListResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobListResp members

    /// <summary>
    /// **参数解释**：  任务ID，用于唯一标识一个数据复制任务。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务名称，用于标识数据复制任务。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务当前运行状态。  **约束限制**：  不涉及。  **取值范围**：  - CREATING：创建中 - CREATE_FAILED：创建失败 - CONFIGURATION：配置中 - STARTJOBING：启动中 - WAITING_FOR_START：等待启动中 - START_JOB_FAILED：启动失败 - FULL_TRANSFER_STARTED：全量开始，灾备场景下为初始化 - FULL_TRANSFER_FAILED：全量失败，灾备场景下为初始化失败 - FULL_TRANSFER_COMPLETE：全量完成，灾备场景下为初始化完成 - INCRE_TRANSFER_STARTED：增量开始，灾备场景下为灾备中 - INCRE_TRANSFER_FAILED：增量失败，灾备场景下为灾备异常 - RELEASE_RESOURCE_STARTED：结束任务中 - RELEASE_RESOURCE_FAILED：结束任务失败 - RELEASE_RESOURCE_COMPLETE：已结束 - CHANGE_JOB_STARTED：任务变更中 - CHANGE_JOB_FAILED：任务变更失败 - CHILD_TRANSFER_STARTING：子任务启动中 - CHILD_TRANSFER_STARTED：子任务迁移中 - CHILD_TRANSFER_COMPLETE：子任务迁移完成 - CHILD_TRANSFER_FAILED：子任务迁移失败 - RELEASE_CHILD_TRANSFER_STARTED：子任务结束中 - RELEASE_CHILD_TRANSFER_COMPLETE：子任务已结束  **默认取值**：  不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务的描述信息。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务的创建时间，表示任务首次被创建的时间戳。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  DRS任务引擎类型。  **约束限制**：  不涉及。  **取值范围**：  - oracle-to-gaussdbv5：Oracle同步到GaussDB分布式版，实时同步场景使用 - redis-to-gaussredis：Redis迁移到GeminiDB Redis，实时迁移场景使用 - rediscluster-to-gaussredis：Redis集群迁移到GeminiDB Redis，实时迁移场景使用  **默认取值**：  不涉及
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务使用的网络类型。  **约束限制**：  不涉及。  **取值范围**：  - eip：公网网络 - vpc：VPC网络，灾备场景不支持选择VPC网络 - vpn：VPN、专线网络  **默认取值**：  不涉及
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务的计费模式，指定数据复制任务的付费方式。  **约束限制**：  不涉及。  **取值范围**：  - period：包周期 - on_demand：按需  **默认取值**：  不涉及
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务的计费模式标识，用于标识该任务当前是否处于计费状态。  **约束限制**：  不涉及。  **取值范围**：  - true：计费中 - false：不计费  **默认取值**：  不涉及
    /// </summary>

    bool isBillingTag() const;
    bool billingTagIsSet() const;
    void unsetbillingTag();
    void setBillingTag(bool value);

    /// <summary>
    /// **参数解释**：  任务的迁移方向。  **约束限制**：  不涉及。  **取值范围**：  - up：入云，灾备场景时对应本云为备 - down：出云，灾备场景时对应本云为主 - non-dbs：自建  **默认取值**：  不涉及
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// **参数解释**：  DRS任务场景类型，用于区分不同的数据复制场景。  **约束限制**：  不涉及。  **取值范围**：  - migration：实时迁移 - sync：实时同步 - cloudDataGuard：实时灾备  **默认取值**：  不涉及
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务迁移模式，指定数据复制任务的执行方式。  **约束限制**：  不涉及。  **取值范围**：  - FULL_TRANS：全量迁移，仅迁移历史数据 - FULL_INCR_TRANS：全量+增量迁移，先迁移历史数据再持续同步增量 - INCR_TRANS：增量迁移，仅同步数据变更  **默认取值**：  不涉及
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// **参数解释**：  企业项目ID，用于按企业项目过滤查询结果。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务模式，指定数据复制任务的执行组织方式。  **约束限制**：  不涉及。  **取值范围**：  - single：单任务 - sync_child：同步子任务 - multi_to_single：多对一任务  **默认取值**：  不涉及
    /// </summary>

    std::string getJobMode() const;
    bool jobModeIsSet() const;
    void unsetjobMode();
    void setJobMode(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务角色，指定数据复制任务在多任务场景中的角色。  **约束限制**：  不涉及。  **取值范围**：  - parent：父任务 - child：子任务 - master：主任务 - slave：备任务  **默认取值**：  不涉及
    /// </summary>

    std::string getJobModeRole() const;
    bool jobModeRoleIsSet() const;
    void unsetjobModeRole();
    void setJobModeRole(const std::string& value);

    /// <summary>
    /// **参数解释**：  标识任务是否为跨可用区（AZ）部署的主备任务。  **约束限制**：  不涉及。  **取值范围**：  - true：跨AZ主备任务 - false：非跨AZ任务  **默认取值**：  不涉及
    /// </summary>

    bool isIsMultiAz() const;
    bool isMultiAzIsSet() const;
    void unsetisMultiAz();
    void setIsMultiAz(bool value);

    /// <summary>
    /// **参数解释**：  任务节点角色，标识任务在集群部署中的角色。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getNodeRole() const;
    bool nodeRoleIsSet() const;
    void unsetnodeRole();
    void setNodeRole(const std::string& value);

    /// <summary>
    /// **参数解释**：  标识任务是否使用新框架执行。  **约束限制**：  不涉及。  **取值范围**：  - true：使用新框架 - false：使用旧框架  **默认取值**：  不涉及
    /// </summary>

    bool isNodeNewFramework() const;
    bool nodeNewFrameworkIsSet() const;
    void unsetnodeNewFramework();
    void setNodeNewFramework(bool value);

    /// <summary>
    /// 
    /// </summary>

    JobActions getJobAction() const;
    bool jobActionIsSet() const;
    void unsetjobAction();
    void setJobAction(const JobActions& value);

    /// <summary>
    /// **参数解释**：  子任务列表信息体，包含当前任务下的所有子任务详情。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<ChildrenJobListResp>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<ChildrenJobListResp>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    bool billingTag_;
    bool billingTagIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string jobMode_;
    bool jobModeIsSet_;
    std::string jobModeRole_;
    bool jobModeRoleIsSet_;
    bool isMultiAz_;
    bool isMultiAzIsSet_;
    std::string nodeRole_;
    bool nodeRoleIsSet_;
    bool nodeNewFramework_;
    bool nodeNewFrameworkIsSet_;
    JobActions jobAction_;
    bool jobActionIsSet_;
    std::vector<ChildrenJobListResp> children_;
    bool childrenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobListResp_H_
