
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowNodePoolConfigurationsRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowNodePoolConfigurationsRequest_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  ShowNodePoolConfigurationsRequest
    : public ModelBase
{
public:
    ShowNodePoolConfigurationsRequest();
    virtual ~ShowNodePoolConfigurationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNodePoolConfigurationsRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// **参数解释：** 节点池ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 **约束限制：** 不涉及 **取值范围：** - 节点池ID：修改指定节点池配置管理参数 - master：修改集群配置中心的配置管理参数  **默认取值：** 不涉及
    /// </summary>

    std::string getNodepoolId() const;
    bool nodepoolIdIsSet() const;
    void unsetnodepoolId();
    void setNodepoolId(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string nodepoolId_;
    bool nodepoolIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowNodePoolConfigurationsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowNodePoolConfigurationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowNodePoolConfigurationsRequest_H_
