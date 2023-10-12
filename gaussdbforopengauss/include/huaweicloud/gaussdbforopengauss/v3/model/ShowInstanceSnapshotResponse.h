
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowInstanceSnapshotResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowInstanceSnapshotResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowInstanceSnapshotResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceSnapshotResponse();
    virtual ~ShowInstanceSnapshotResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceSnapshotResponse members

    /// <summary>
    /// 实例部署形态。集中式Ha(主备)、分布式Independent(独立部署)。
    /// </summary>

    std::string getClusterMode() const;
    bool clusterModeIsSet() const;
    void unsetclusterMode();
    void setClusterMode(const std::string& value);

    /// <summary>
    /// 实例模型，企业版enterprise，标准版standard，基础版basic。
    /// </summary>

    std::string getInstanceMode() const;
    bool instanceModeIsSet() const;
    void unsetinstanceMode();
    void setInstanceMode(const std::string& value);

    /// <summary>
    /// 磁盘大小，单位：GB。
    /// </summary>

    std::string getDataVolumeSize() const;
    bool dataVolumeSizeIsSet() const;
    void unsetdataVolumeSize();
    void setDataVolumeSize(const std::string& value);

    /// <summary>
    /// 解决方案模板类型。集中式Ha一般用triset，分布式Independent一般为空或者默认hws。  描述如下：  triset：高可用(1主2备)  hws：默认。
    /// </summary>

    std::string getSolution() const;
    bool solutionIsSet() const;
    void unsetsolution();
    void setSolution(const std::string& value);

    /// <summary>
    /// 节点数量。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// 协调节点数量。
    /// </summary>

    int32_t getCoordinatorNum() const;
    bool coordinatorNumIsSet() const;
    void unsetcoordinatorNum();
    void setCoordinatorNum(int32_t value);

    /// <summary>
    /// 分片数量。
    /// </summary>

    int32_t getShardingNum() const;
    bool shardingNumIsSet() const;
    void unsetshardingNum();
    void setShardingNum(int32_t value);

    /// <summary>
    /// 副本数量。
    /// </summary>

    int32_t getReplicaNum() const;
    bool replicaNumIsSet() const;
    void unsetreplicaNum();
    void setReplicaNum(int32_t value);

    /// <summary>
    /// 引擎版本。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);


protected:
    std::string clusterMode_;
    bool clusterModeIsSet_;
    std::string instanceMode_;
    bool instanceModeIsSet_;
    std::string dataVolumeSize_;
    bool dataVolumeSizeIsSet_;
    std::string solution_;
    bool solutionIsSet_;
    int32_t nodeNum_;
    bool nodeNumIsSet_;
    int32_t coordinatorNum_;
    bool coordinatorNumIsSet_;
    int32_t shardingNum_;
    bool shardingNumIsSet_;
    int32_t replicaNum_;
    bool replicaNumIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowInstanceSnapshotResponse_H_
