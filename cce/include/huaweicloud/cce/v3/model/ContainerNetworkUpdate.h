
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerNetworkUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerNetworkUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cce/v3/model/ContainerCIDR.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ContainerNetworkUpdate
    : public ModelBase
{
public:
    ContainerNetworkUpdate();
    virtual ~ContainerNetworkUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ContainerNetworkUpdate members

    /// <summary>
    /// 容器网络网段列表。1.21及新版本集群，当集群网络类型为vpc-router时，支持增量添加容器网段，最多配置20个。  此参数在集群更新后不可更改，请谨慎选择。
    /// </summary>

    std::vector<ContainerCIDR>& getCidrs();
    bool cidrsIsSet() const;
    void unsetcidrs();
    void setCidrs(const std::vector<ContainerCIDR>& value);


protected:
    std::vector<ContainerCIDR> cidrs_;
    bool cidrsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerNetworkUpdate_H_
