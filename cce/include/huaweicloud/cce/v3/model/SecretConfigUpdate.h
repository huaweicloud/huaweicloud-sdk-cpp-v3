
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_SecretConfigUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_SecretConfigUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CCE_V3_EXPORT  SecretConfigUpdate
    : public ModelBase
{
public:
    SecretConfigUpdate();
    virtual ~SecretConfigUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecretConfigUpdate members

    /// <summary>
    /// **参数解释：** 是否在集群中禁用默认插件凭证（paas.elb、paas.aksk secret）。该Secret的data内容是临时AK/SK数据，部分插件在未配置自定义委托时会使用它作为IAM凭证访问其他云服务。 [更多信息请参见[禁用集群中静态存储的临时凭据说明](https://support.huaweicloud.com/usermanual-cce/cce_10_1111.html)。](tag:hws) [更多信息请参见[禁用集群中静态存储的临时凭据说明](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_1111.html)。](tag:hws_hk) **约束限制：** 仅当集群中所有需要访问云服务的插件均已配置自定义委托后，才能禁用该Secret。 **取值范围：** - true: 禁用 - false: 启用  **默认取值：** 不涉及，未指定则不更新此参数。 
    /// </summary>

    bool isDisableDefaultAddonCredSecret() const;
    bool disableDefaultAddonCredSecretIsSet() const;
    void unsetdisableDefaultAddonCredSecret();
    void setDisableDefaultAddonCredSecret(bool value);

    /// <summary>
    /// **参数解释：** 是否在集群中禁用节点凭证（node-agency-cred secret）。该Secret的data内容是临时AK/SK数据，节点上安装的系统组件默认使用该凭证。 [更多信息请参见[禁用集群中静态存储的临时凭据说明](https://support.huaweicloud.com/usermanual-cce/cce_10_1111.html)。](tag:hws) [更多信息请参见[禁用集群中静态存储的临时凭据说明](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_1111.html)。](tag:hws_hk) **约束限制：** 需确保已为每个节点/节点池配置委托，且委托至少具备cce:node:get、cce::assumeAgencyForPodIdentity权限，否则禁用该Secret会导致节点安装、运行异常。 **取值范围：** - true: 禁用 - false: 启用  **默认取值：** false 
    /// </summary>

    bool isDisableNodeAgencyCredSecret() const;
    bool disableNodeAgencyCredSecretIsSet() const;
    void unsetdisableNodeAgencyCredSecret();
    void setDisableNodeAgencyCredSecret(bool value);

    /// <summary>
    /// **参数解释：** 是否在集群中禁用默认镜像访问凭证（default-secret secret）。该Secret的data内容是SWR临时登录指令，用于SWR的私有镜像拉取。 [更多信息请参见[禁用集群中静态存储的临时凭据说明](https://support.huaweicloud.com/usermanual-cce/cce_10_1111.html)。](tag:hws) [更多信息请参见[禁用集群中静态存储的临时凭据说明](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_1111.html)。](tag:hws_hk) **约束限制：** 需确保集群中的工作负载不使用default-secret作为镜像拉取凭证（配置了镜像免密下载或者使用自定义镜像拉取凭证），否则禁用该Secret后可能会导致镜像拉取失败。 **取值范围：** - true: 禁用 - false: 启用  **默认取值：** false 
    /// </summary>

    bool isDisableDefaultImagePullSecret() const;
    bool disableDefaultImagePullSecretIsSet() const;
    void unsetdisableDefaultImagePullSecret();
    void setDisableDefaultImagePullSecret(bool value);


protected:
    bool disableDefaultAddonCredSecret_;
    bool disableDefaultAddonCredSecretIsSet_;
    bool disableNodeAgencyCredSecret_;
    bool disableNodeAgencyCredSecretIsSet_;
    bool disableDefaultImagePullSecret_;
    bool disableDefaultImagePullSecretIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_SecretConfigUpdate_H_
