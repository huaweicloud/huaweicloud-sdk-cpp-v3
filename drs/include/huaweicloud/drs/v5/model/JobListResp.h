
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
    /// 任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务状态。取值： - CREATING：创建中。 - CREATE_FAILED：创建失败。 - CONFIGURATION：配置中。 - STARTJOBING：启动中。 - WAITING_FOR_START：等待启动中。 - START_JOB_FAILED：任务启动失败。 - FULL_TRANSFER_STARTED：全量迁移中 灾备场景为初始化。 - FULL_TRANSFER_FAILED：全量迁移失败 灾备场景为初始化失败。 - FULL_TRANSFER_COMPLETE：全量迁移完成 灾备场景为初始化完成。 - INCRE_TRANSFER_STARTED：增量迁移中 灾备场景为灾备中。 - INCRE_TRANSFER_FAILED：增量迁移失败 灾备场景为灾备异常。 - RELEASE_RESOURCE_STARTED：结束任务中。 - RELEASE_RESOURCE_FAILED：结束任务失败。 - RELEASE_RESOURCE_COMPLETE：已结束。 - CHANGE_JOB_STARTED：任务变更中。 - CHANGE_JOB_FAILED：任务变更失败。 - CHILD_TRANSFER_STARTING：子任务启动中。 - CHILD_TRANSFER_STARTED：子任务迁移中。 - CHILD_TRANSFER_COMPLETE：子任务迁移完成。 - CHILD_TRANSFER_FAILED：子任务迁移失败。 - RELEASE_CHILD_TRANSFER_STARTED：子任务结束中。 - RELEASE_CHILD_TRANSFER_COMPLETE：子任务已结束。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 任务创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 引擎类型。取值： - oracle-to-gaussdbv5：Oracle同步到GaussDB分布式版，实时同步场景使用。
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 网络类型。取值： - eip：公网网络。 - vpc：VPC网络，灾备场景不支持选择VPC网络。 - vpn：VPN、专线网络。
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 计费模式。取值： - period：包周期。 - on_demand：按需。
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 是否计费。
    /// </summary>

    bool isBillingTag() const;
    bool billingTagIsSet() const;
    void unsetbillingTag();
    void setBillingTag(bool value);

    /// <summary>
    /// 任务方向。取值： - up：入云 ，灾备场景时对应本云为备。 - down：出云，灾备场景时对应本云为主。 - non-dbs：自建。
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 任务场景。取值： - migration：实时迁移。 - sync：实时同步。 - cloudDataGuard：实时灾备。
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 任务模式。取值： - FULL_TRANS ：全量。 - FULL_INCR_TRANS：全量+增量。 - INCR_TRANS：增量。
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 任务模式。取值： - single：单任务。 - sync_child：同步子任务。 - multi_to_single：多对一任务。
    /// </summary>

    std::string getJobMode() const;
    bool jobModeIsSet() const;
    void unsetjobMode();
    void setJobMode(const std::string& value);

    /// <summary>
    /// 任务角色。取值： - parent：父任务。 - child：子任务。 - master：主任务。 - slave：备任务。
    /// </summary>

    std::string getJobModeRole() const;
    bool jobModeRoleIsSet() const;
    void unsetjobModeRole();
    void setJobModeRole(const std::string& value);

    /// <summary>
    /// 是否跨AZ任务。
    /// </summary>

    bool isIsMultiAz() const;
    bool isMultiAzIsSet() const;
    void unsetisMultiAz();
    void setIsMultiAz(bool value);

    /// <summary>
    /// 任务节点角色。
    /// </summary>

    std::string getNodeRole() const;
    bool nodeRoleIsSet() const;
    void unsetnodeRole();
    void setNodeRole(const std::string& value);

    /// <summary>
    /// 是否新框架。
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
    /// 子任务列表信息体。
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
