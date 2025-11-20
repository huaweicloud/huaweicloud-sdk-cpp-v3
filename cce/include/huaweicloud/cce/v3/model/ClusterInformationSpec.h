
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformationSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformationSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterInformationSpec_hostNetwork.h>
#include <huaweicloud/cce/v3/model/EniNetworkUpdate.h>
#include <string>
#include <vector>
#include <huaweicloud/cce/v3/model/ContainerNetworkUpdate.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterInformationSpec
    : public ModelBase
{
public:
    ClusterInformationSpec();
    virtual ~ClusterInformationSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterInformationSpec members

    /// <summary>
    /// **参数解释：** 指定集群使用的委托。该委托用于生成集群中组件使用的临时访问凭证，在集群中自动创建其他相关云服务的资源时会使用该委托权限。当不传或为空时，集群将自动选择使用CCE的系统委托cce_admin_trust或cce_cluster_agency。  [ &gt; 关于CCE系统委托的说明详情参见[系统委托说明](https://support.huaweicloud.com/usermanual-cce/cce_10_0556.html)](tag:hws) [ &gt; 关于CCE系统委托的说明详情参见[系统委托说明](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_0556.html)](tag:hws_hk)  **约束限制：** 仅1.27及以上版本集群支持该参数  **取值范围：** 不涉及 **默认取值：** 空 
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群的描述信息。 **约束限制：** 仅运行和扩容状态（Available、ScalingUp、ScalingDown）的集群允许修改。 **取值范围：** 字符取值范围[0,200]。不包含~$%^&amp;*&lt;&gt;[]{}()&#39;\&quot;#\\等特殊字符。 **默认取值：** 无
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 集群的API Server服务端证书中的自定义SAN（Subject Alternative Name）字段，遵从SSL标准X509定义的格式规范。  1. 不允许出现同名重复。 2. 格式符合IP和域名格式。  示例: &#x60;&#x60;&#x60; SAN 1: DNS Name&#x3D;example.com SAN 2: DNS Name&#x3D;www.example.com SAN 3: DNS Name&#x3D;example.net SAN 4: IP Address&#x3D;93.184.216.34 &#x60;&#x60;&#x60;
    /// </summary>

    std::vector<std::string>& getCustomSan();
    bool customSanIsSet() const;
    void unsetcustomSan();
    void setCustomSan(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ContainerNetworkUpdate getContainerNetwork() const;
    bool containerNetworkIsSet() const;
    void unsetcontainerNetwork();
    void setContainerNetwork(const ContainerNetworkUpdate& value);

    /// <summary>
    /// 
    /// </summary>

    EniNetworkUpdate getEniNetwork() const;
    bool eniNetworkIsSet() const;
    void unseteniNetwork();
    void setEniNetwork(const EniNetworkUpdate& value);

    /// <summary>
    /// 
    /// </summary>

    ClusterInformationSpec_hostNetwork getHostNetwork() const;
    bool hostNetworkIsSet() const;
    void unsethostNetwork();
    void setHostNetwork(const ClusterInformationSpec_hostNetwork& value);

    /// <summary>
    /// **参数解释：** 集群删除保护，如果开启后用户将无法删除该集群。 **约束限制：** 不涉及 **取值范围：** - true: 开启集群删除保护 - false: 关闭集群删除保护  **默认取值：** 默认false
    /// </summary>

    bool isDeletionProtection() const;
    bool deletionProtectionIsSet() const;
    void unsetdeletionProtection();
    void setDeletionProtection(bool value);

    /// <summary>
    /// **参数解释：** 配置参数后，配置CCE Standard/Turbo集群是否启用自动升配功能。 **约束限制：** 当前集群自动升配功能受限开放。 集群支持范围： - 版本范围：v1.27及以上 - 规格范围：cce.s2.*规格的集群支持启用自动升配  **取值范围：** - true: 启用自动升配能力 - false: 禁用自动升配能力  **默认取值：** 默认false，未指定则不更新此参数 
    /// </summary>

    bool isEnableAutoResizing() const;
    bool enableAutoResizingIsSet() const;
    void unsetenableAutoResizing();
    void setEnableAutoResizing(bool value);


protected:
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> customSan_;
    bool customSanIsSet_;
    ContainerNetworkUpdate containerNetwork_;
    bool containerNetworkIsSet_;
    EniNetworkUpdate eniNetwork_;
    bool eniNetworkIsSet_;
    ClusterInformationSpec_hostNetwork hostNetwork_;
    bool hostNetworkIsSet_;
    bool deletionProtection_;
    bool deletionProtectionIsSet_;
    bool enableAutoResizing_;
    bool enableAutoResizingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformationSpec_H_
