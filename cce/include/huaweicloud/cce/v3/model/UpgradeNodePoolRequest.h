
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeNodePoolRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeNodePoolRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/UpgradeNodePool.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeNodePoolRequest
    : public ModelBase
{
public:
    UpgradeNodePoolRequest();
    virtual ~UpgradeNodePoolRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeNodePoolRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// **参数解释**： 选择需要同步/升级的节点池 **约束限制**： 不涉及 **取值范围**： - 节点池ID：同步指定节点池中的配置，节点池ID获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 - DefaultPool：升级默认节点池的配置  **默认取值**： 不涉及 
    /// </summary>

    std::string getNodepoolId() const;
    bool nodepoolIdIsSet() const;
    void unsetnodepoolId();
    void setNodepoolId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeNodePool getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpgradeNodePool& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string nodepoolId_;
    bool nodepoolIdIsSet_;
    UpgradeNodePool body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpgradeNodePoolRequest& dereference_from_shared_ptr(std::shared_ptr<UpgradeNodePoolRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeNodePoolRequest_H_
