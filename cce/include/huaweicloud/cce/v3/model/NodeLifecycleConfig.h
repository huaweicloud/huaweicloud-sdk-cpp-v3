
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeLifecycleConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeLifecycleConfig_H_


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
/// 节点自定义生命周期配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeLifecycleConfig
    : public ModelBase
{
public:
    NodeLifecycleConfig();
    virtual ~NodeLifecycleConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeLifecycleConfig members

    /// <summary>
    /// **参数解释**： 安装前执行脚本。安装前/后执行脚本统一计算字符，输入的值需要经过Base64编码，方法如下： &#x60;&#x60;&#x60; echo -n \&quot;待编码内容\&quot; | base64 &#x60;&#x60;&#x60;  **约束限制**： 长度不能超过10240字节。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getPreInstall() const;
    bool preInstallIsSet() const;
    void unsetpreInstall();
    void setPreInstall(const std::string& value);

    /// <summary>
    /// **参数解释**： 安装前执行脚本。安装前/后执行脚本统一计算字符，输入的值需要经过Base64编码，方法如下： &#x60;&#x60;&#x60; echo -n \&quot;待编码内容\&quot; | base64 &#x60;&#x60;&#x60;  **约束限制**： 长度不能超过10240字节。 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getPostInstall() const;
    bool postInstallIsSet() const;
    void unsetpostInstall();
    void setPostInstall(const std::string& value);

    /// <summary>
    /// **参数解释：** 该参数用于控制重置/纳管/批量重置节点时， **post-install脚本执行完成前允许节点调度** 的行为。当操作的节点属于节点池时，以节点池相关配置为准。当该参数未设置或者为false时，在kubernetes节点就绪时，容器即可被调度到可用节点。当该参数为true时，在kubernetes节点就绪时且post-install脚本执行完成时，容器才可被调度到可用节点。  **约束限制：** 不涉及  **取值范围：** - false：在kubernetes节点就绪时，容器即可被调度到可用节点。           - true：在kubernetes节点就绪时且post-install脚本执行完成时，容器才可被调度到可用节点。  **默认取值：** false
    /// </summary>

    bool isWaitPostInstallFinish() const;
    bool waitPostInstallFinishIsSet() const;
    void unsetwaitPostInstallFinish();
    void setWaitPostInstallFinish(bool value);


protected:
    std::string preInstall_;
    bool preInstallIsSet_;
    std::string postInstall_;
    bool postInstallIsSet_;
    bool waitPostInstallFinish_;
    bool waitPostInstallFinishIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeLifecycleConfig_H_
