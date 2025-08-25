
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteClusterRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteClusterRequest_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  DeleteClusterRequest
    : public ModelBase
{
public:
    DeleteClusterRequest();
    virtual ~DeleteClusterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteClusterRequest members

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
    /// 是否删除evs（云硬盘）， 枚举取值： - true或block (执行删除流程，失败则阻塞后续流程) - try (执行删除流程，失败则忽略，并继续执行后续流程) - false或skip (跳过删除流程，默认选项)
    /// </summary>

    std::string getDeleteEvs() const;
    bool deleteEvsIsSet() const;
    void unsetdeleteEvs();
    void setDeleteEvs(const std::string& value);

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
    /// 是否删除sfs（文件存储卷）， 枚举取值： - true或block (执行删除流程，失败则阻塞后续流程) - try (执行删除流程，失败则忽略，并继续执行后续流程) - false或skip (跳过删除流程，默认选项)
    /// </summary>

    std::string getDeleteSfs() const;
    bool deleteSfsIsSet() const;
    void unsetdeleteSfs();
    void setDeleteSfs(const std::string& value);

    /// <summary>
    /// 是否删除sfs3.0（文件存储卷3.0）， 枚举取值： - true或block (执行删除流程，失败则阻塞后续流程) - try (执行删除流程，失败则忽略，并继续执行后续流程) - false或skip (跳过删除流程，默认选项)
    /// </summary>

    std::string getDeleteSfs30() const;
    bool deleteSfs30IsSet() const;
    void unsetdeleteSfs30();
    void setDeleteSfs30(const std::string& value);

    /// <summary>
    /// 是否删除LTS LogStream（日志流）， 枚举取值： - true或block (执行删除流程，失败则阻塞后续流程) - try (执行删除流程，失败则忽略，并继续执行后续流程) - false或skip (跳过删除流程，默认选项)
    /// </summary>

    std::string getLtsReclaimPolicy() const;
    bool ltsReclaimPolicyIsSet() const;
    void unsetltsReclaimPolicy();
    void setLtsReclaimPolicy(const std::string& value);

    /// <summary>
    /// 是否使用包周期集群删除参数预置模式（仅对包周期集群生效）。  需要和其他删除选项参数一起使用，未指定的参数，则使用默认值。  使用该参数，集群不执行真正的删除，仅将本次请求的全部query参数都预置到集群数据库中，用于包周期集群退订时识别用户要删除的资源。  允许重复执行，覆盖预置的删除参数。  枚举取值： - true  (预置模式，仅预置query参数，不执行删除)
    /// </summary>

    std::string getTobedeleted() const;
    bool tobedeletedIsSet() const;
    void unsettobedeleted();
    void setTobedeleted(const std::string& value);

    /// <summary>
    /// 集群下所有按需节点处理策略， 枚举取值： - delete (删除服务器) - reset (保留服务器并重置服务器，数据不保留) - retain （保留服务器不重置服务器，数据保留）
    /// </summary>

    std::string getOndemandNodePolicy() const;
    bool ondemandNodePolicyIsSet() const;
    void unsetondemandNodePolicy();
    void setOndemandNodePolicy(const std::string& value);

    /// <summary>
    /// 集群下所有包周期节点处理策略， 枚举取值： - reset (保留服务器并重置服务器，数据不保留) - retain （保留服务器不重置服务器，数据保留）
    /// </summary>

    std::string getPeriodicNodePolicy() const;
    bool periodicNodePolicyIsSet() const;
    void unsetperiodicNodePolicy();
    void setPeriodicNodePolicy(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string errorStatus_;
    bool errorStatusIsSet_;
    std::string deleteEfs_;
    bool deleteEfsIsSet_;
    std::string deleteEni_;
    bool deleteEniIsSet_;
    std::string deleteEvs_;
    bool deleteEvsIsSet_;
    std::string deleteNet_;
    bool deleteNetIsSet_;
    std::string deleteObs_;
    bool deleteObsIsSet_;
    std::string deleteSfs_;
    bool deleteSfsIsSet_;
    std::string deleteSfs30_;
    bool deleteSfs30IsSet_;
    std::string ltsReclaimPolicy_;
    bool ltsReclaimPolicyIsSet_;
    std::string tobedeleted_;
    bool tobedeletedIsSet_;
    std::string ondemandNodePolicy_;
    bool ondemandNodePolicyIsSet_;
    std::string periodicNodePolicy_;
    bool periodicNodePolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteClusterRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteClusterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteClusterRequest_H_
