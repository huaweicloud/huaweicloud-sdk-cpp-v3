
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteAutopilotClusterRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteAutopilotClusterRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  DeleteAutopilotClusterRequest
    : public ModelBase
{
public:
    DeleteAutopilotClusterRequest();
    virtual ~DeleteAutopilotClusterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAutopilotClusterRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群状态兼容Error参数，用于API平滑切换。 兼容场景下，errorStatus为空则屏蔽Error状态为Deleting状态。
    /// </summary>

    std::string getErrorStatus() const;
    bool errorStatusIsSet() const;
    void unseterrorStatus();
    void setErrorStatus(const std::string& value);

    /// <summary>
    /// 是否删除SFS Turbo（极速文件存储卷）， 枚举取值： - true或block (执行删除流程，失败则阻塞后续流程) - try (执行删除流程，失败则忽略，并继续执行后续流程) - false或skip (跳过删除流程，默认选项)
    /// </summary>

    std::string getDeleteEfs() const;
    bool deleteEfsIsSet() const;
    void unsetdeleteEfs();
    void setDeleteEfs(const std::string& value);

    /// <summary>
    /// 是否删除eni ports（原生弹性网卡）， 枚举取值： - true或block (执行删除流程，失败则阻塞后续流程，默认选项) - try (执行删除流程，失败则忽略，并继续执行后续流程) - false或skip (跳过删除流程)
    /// </summary>

    std::string getDeleteEni() const;
    bool deleteEniIsSet() const;
    void unsetdeleteEni();
    void setDeleteEni(const std::string& value);

    /// <summary>
    /// 是否删除elb（弹性负载均衡）等集群Service/Ingress相关资源。 枚举取值： - true或block (执行删除流程，失败则阻塞后续流程，默认选项) - try (执行删除流程，失败则忽略，并继续执行后续流程) - false或skip (跳过删除流程)
    /// </summary>

    std::string getDeleteNet() const;
    bool deleteNetIsSet() const;
    void unsetdeleteNet();
    void setDeleteNet(const std::string& value);

    /// <summary>
    /// 是否删除obs（对象存储卷）， 枚举取值： - true或block (执行删除流程，失败则阻塞后续流程) - try (执行删除流程，失败则忽略，并继续执行后续流程) - false或skip (跳过删除流程，默认选项)
    /// </summary>

    std::string getDeleteObs() const;
    bool deleteObsIsSet() const;
    void unsetdeleteObs();
    void setDeleteObs(const std::string& value);

    /// <summary>
    /// 是否删除sfs3.0（文件存储卷3.0）， 枚举取值： - true或block (执行删除流程，失败则阻塞后续流程) - try (执行删除流程，失败则忽略，并继续执行后续流程) - false或skip (跳过删除流程，默认选项)
    /// </summary>

    std::string getDeleteSfs30() const;
    bool deleteSfs30IsSet() const;
    void unsetdeleteSfs30();
    void setDeleteSfs30(const std::string& value);

    /// <summary>
    /// 是否删除LTS资源（日志组/日志流）。 枚举取值： - Delete_Log_Group：删除日志组，失败则忽略，并继续执行后续流程。 - Delete_Master_Log_Stream：删除Master接入日志流，失败则忽略，并继续执行后续流程，默认选项。 - Retain：跳过删除流程。
    /// </summary>

    std::string getLtsReclaimPolicy() const;
    bool ltsReclaimPolicyIsSet() const;
    void unsetltsReclaimPolicy();
    void setLtsReclaimPolicy(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string errorStatus_;
    bool errorStatusIsSet_;
    std::string deleteEfs_;
    bool deleteEfsIsSet_;
    std::string deleteEni_;
    bool deleteEniIsSet_;
    std::string deleteNet_;
    bool deleteNetIsSet_;
    std::string deleteObs_;
    bool deleteObsIsSet_;
    std::string deleteSfs30_;
    bool deleteSfs30IsSet_;
    std::string ltsReclaimPolicy_;
    bool ltsReclaimPolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAutopilotClusterRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAutopilotClusterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteAutopilotClusterRequest_H_
