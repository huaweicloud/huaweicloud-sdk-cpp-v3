
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerNetworkUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerNetworkUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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

    /// <summary>
    /// **参数解释：** 容器网络网段列表。当集群网络类型为vpc-router时，支持添加或删除容器网段。支持的集群版本如下： - v1.28.15-r60及以上版本 - v1.29.15-r20及以上版本 - v1.30.14-r20及以上版本 - v1.31.10-r20及以上版本 - v1.32.6-r20及以上版本 - v1.33.5-r10及以上版本  支持修改集群容器网段的顺序，顺序在前的容器网段优先被使用。 **约束限制：** - 最多支持配置20个子网。 - 填写为空时，该字段不生效。  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::vector<std::string>& getContainercidrs();
    bool containercidrsIsSet() const;
    void unsetcontainercidrs();
    void setContainercidrs(const std::vector<std::string>& value);


protected:
    std::vector<ContainerCIDR> cidrs_;
    bool cidrsIsSet_;
    std::vector<std::string> containercidrs_;
    bool containercidrsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ContainerNetworkUpdate_H_
