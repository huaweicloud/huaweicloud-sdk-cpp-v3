
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_JobInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_JobInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ChildrenJobInfo.h>
#include <huaweicloud/drs/v3/model/JobActionResp.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 在线迁移任务列表信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  JobInfo
    : public ModelBase
{
public:
    JobInfo();
    virtual ~JobInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobInfo members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务状态。 - CREATING：创建中 - CREATE_FAILED：创建失败 - CONFIGURATION：配置中 - STARTJOBING：启动中 - WAITING_FOR_START：等待启动中 - START_JOB_FAILED：启动失败 - PAUSING：已暂停 - FULL_TRANSFER_STARTED：全量开始，灾备场景下为初始化 - FULL_TRANSFER_FAILED：全量失败，灾备场景下为初始化失败 - FULL_TRANSFER_COMPLETE：全量完成，灾备场景下为初始化完成 - INCRE_TRANSFER_STARTED：增量开始，灾备场景下为灾备中 - INCRE_TRANSFER_FAILED：增量失败，灾备场景下为灾备异常 - RELEASE_RESOURCE_STARTED：结束任务中 - RELEASE_RESOURCE_FAILED：结束任务失败 - RELEASE_RESOURCE_COMPLETE：已结束 - REBUILD_NODE_STARTED：故障恢复中 - REBUILD_NODE_FAILED：故障恢复失败 - CHANGE_JOB_STARTED：任务变更中 - CHANGE_JOB_FAILED：任务变更失败 - DELETED：已删除 - CHILD_TRANSFER_STARTING：再编辑子任务启动中 - CHILD_TRANSFER_STARTED：再编辑子任务迁移中 - CHILD_TRANSFER_COMPLETE：再编辑子任务迁移完成 - CHILD_TRANSFER_FAILED：再编辑子任务迁移失败 - RELEASE_CHILD_TRANSFER_STARTED：再编辑子任务结束中 - RELEASE_CHILD_TRANSFER_COMPLETE：再编辑子任务已结束 - NODE_UPGRADE_START：升级开始 - NODE_UPGRADE_COMPLETE：升级完成 - NODE_UPGRADE_FAILED：升级失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 任务创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 引擎类型
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 网络类型
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 计费字段
    /// </summary>

    bool isBillingTag() const;
    bool billingTagIsSet() const;
    void unsetbillingTag();
    void setBillingTag(bool value);

    /// <summary>
    /// 迁移方向
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 迁移场景。 - migration:实时迁移 - sync:实时同步 - cloudDataGuard:实时灾备
    /// </summary>

    std::string getDbUseType() const;
    bool dbUseTypeIsSet() const;
    void unsetdbUseType();
    void setDbUseType(const std::string& value);

    /// <summary>
    /// 迁移模式。 - FULL_TRANS 全量 - FULL_INCR_TRANS 全量+增量 - INCR_TRANS 增量
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 子任务信息体
    /// </summary>

    std::vector<ChildrenJobInfo>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<ChildrenJobInfo>& value);

    /// <summary>
    /// 是否新框架
    /// </summary>

    bool isNodeNewFramework() const;
    bool nodeNewFrameworkIsSet() const;
    void unsetnodeNewFramework();
    void setNodeNewFramework(bool value);

    /// <summary>
    /// 
    /// </summary>

    JobActionResp getJobAction() const;
    bool jobActionIsSet() const;
    void unsetjobAction();
    void setJobAction(const JobActionResp& value);


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
    bool billingTag_;
    bool billingTagIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::string dbUseType_;
    bool dbUseTypeIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::vector<ChildrenJobInfo> children_;
    bool childrenIsSet_;
    bool nodeNewFramework_;
    bool nodeNewFrameworkIsSet_;
    JobActionResp jobAction_;
    bool jobActionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_JobInfo_H_
