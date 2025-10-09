
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterEndpoints.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterStatus
    : public ModelBase
{
public:
    ClusterStatus();
    virtual ~ClusterStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterStatus members

    /// <summary>
    /// 集群状态，取值如下 - Available：可用，表示集群处于正常状态。 - Unavailable：不可用，表示集群异常，需手动删除。 - ScalingUp：扩容中，表示集群正处于扩容过程中。 - ScalingDown：缩容中，表示集群正处于缩容过程中。 - Creating：创建中，表示集群正处于创建过程中。 - Deleting：删除中，表示集群正处于删除过程中。 - Upgrading：升级中，表示集群正处于升级过程中。 - Resizing：规格变更中，表示集群正处于变更规格中。 - RollingBack：回滚中，表示集群正处于回滚过程中。 - RollbackFailed：回滚异常，表示集群回滚异常。 - Hibernating：休眠中，表示集群正处于休眠过程中。 - Hibernation：已休眠，表示集群正处于休眠状态。 - Awaking：唤醒中，表示集群正处于从休眠状态唤醒的过程中。 - Empty：集群无任何资源（已废弃） - Error：错误，表示集群资源异常，可尝试手动删除。
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务ID，集群当前状态关联的任务ID。当前支持: - 创建集群时返回关联的任务ID，可通过任务ID查询创建集群的附属任务信息； - 删除集群或者删除集群失败时返回关联的任务ID，此字段非空时，可通过任务ID查询删除集群的附属任务信息。  **约束限制：** 不涉及 **取值范围：** 不涉及  &gt; 任务信息具有一定时效性，仅用于短期跟踪任务进度，请勿用于集群状态判断等额外场景。 
    /// </summary>

    std::string getJobID() const;
    bool jobIDIsSet() const;
    void unsetjobID();
    void setJobID(const std::string& value);

    /// <summary>
    /// 集群变为当前状态的原因，在集群在非“Available”状态下时，会返回此参数。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 集群变为当前状态的原因的详细信息，在集群在非“Available”状态下时，会返回此参数。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 集群中 kube-apiserver 的访问地址。
    /// </summary>

    std::vector<ClusterEndpoints>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<ClusterEndpoints>& value);

    /// <summary>
    /// CBC资源锁定
    /// </summary>

    bool isIsLocked() const;
    bool isLockedIsSet() const;
    void unsetisLocked();
    void setIsLocked(bool value);

    /// <summary>
    /// CBC资源锁定场景
    /// </summary>

    std::string getLockScene() const;
    bool lockSceneIsSet() const;
    void unsetlockScene();
    void setLockScene(const std::string& value);

    /// <summary>
    /// 锁定资源
    /// </summary>

    std::string getLockSource() const;
    bool lockSourceIsSet() const;
    void unsetlockSource();
    void setLockSource(const std::string& value);

    /// <summary>
    /// 锁定的资源ID
    /// </summary>

    std::string getLockSourceId() const;
    bool lockSourceIdIsSet() const;
    void unsetlockSourceId();
    void setLockSourceId(const std::string& value);

    /// <summary>
    /// 删除配置状态（仅删除请求响应包含）
    /// </summary>

    Object getDeleteOption() const;
    bool deleteOptionIsSet() const;
    void unsetdeleteOption();
    void setDeleteOption(const Object& value);

    /// <summary>
    /// 删除状态信息（仅删除请求响应包含）
    /// </summary>

    Object getDeleteStatus() const;
    bool deleteStatusIsSet() const;
    void unsetdeleteStatus();
    void setDeleteStatus(const Object& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::string jobID_;
    bool jobIDIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<ClusterEndpoints> endpoints_;
    bool endpointsIsSet_;
    bool isLocked_;
    bool isLockedIsSet_;
    std::string lockScene_;
    bool lockSceneIsSet_;
    std::string lockSource_;
    bool lockSourceIsSet_;
    std::string lockSourceId_;
    bool lockSourceIdIsSet_;
    Object deleteOption_;
    bool deleteOptionIsSet_;
    Object deleteStatus_;
    bool deleteStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterStatus_H_
