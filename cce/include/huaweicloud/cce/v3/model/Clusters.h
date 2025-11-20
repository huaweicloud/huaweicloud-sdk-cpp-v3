
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Clusters_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Clusters_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/ClusterCert.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  Clusters
    : public ModelBase
{
public:
    Clusters();
    virtual ~Clusters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Clusters members

    /// <summary>
    /// **参数解释**： 集群名字。 **约束限制**： 不涉及 **取值范围**： - internalCluster：私网访问的集群 - externalCluster：公网访问的集群  **默认取值**： - 若不存在publicIp（虚拟机弹性IP），则集群列表的集群数量为1，该字段值为“internalCluster”。 - 若存在publicIp，则集群列表的集群数量大于1，所有扩展的cluster的name的值为“externalCluster”。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ClusterCert getCluster() const;
    bool clusterIsSet() const;
    void unsetcluster();
    void setCluster(const ClusterCert& value);


protected:
    std::string name_;
    bool nameIsSet_;
    ClusterCert cluster_;
    bool clusterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Clusters_H_
