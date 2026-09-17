
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceMigrateNodeExtendParam_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceMigrateNodeExtendParam_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  InPlaceMigrateNodeExtendParam
    : public ModelBase
{
public:
    InPlaceMigrateNodeExtendParam();
    virtual ~InPlaceMigrateNodeExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InPlaceMigrateNodeExtendParam members

    /// <summary>
    /// **参数解释**： 安装前执行脚本。 **约束限制**： 安装前/后执行脚本统一计算字符，转码后的字符总数不能超过10240。 输入的值需要经过Base64编码，方法如下：   &#x60;&#x60;&#x60;   echo -n \&quot;待编码内容\&quot; | base64   &#x60;&#x60;&#x60;  **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getAlphaCcePreInstall() const;
    bool alphaCcePreInstallIsSet() const;
    void unsetalphaCcePreInstall();
    void setAlphaCcePreInstall(const std::string& value);

    /// <summary>
    /// **参数解释**： 安装后执行脚本。 **约束限制**： 安装前/后执行脚本统一计算字符，转码后的字符总数不能超过10240。 输入的值需要经过Base64编码，方法如下：   &#x60;&#x60;&#x60;   echo -n \&quot;待编码内容\&quot; | base64   &#x60;&#x60;&#x60;  **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getAlphaCcePostInstall() const;
    bool alphaCcePostInstallIsSet() const;
    void unsetalphaCcePostInstall();
    void setAlphaCcePostInstall(const std::string& value);

    /// <summary>
    /// **参数解释：** 该参数用于控制腾挪节点时， **post-install脚本执行完成前允许节点调度** 的行为。当该参数未设置或者为false时，在kubernetes节点就绪时，容器即可被调度到可用节点。当该参数为true时，在kubernetes节点就绪时且post-install脚本执行完成时，容器才可被调度到可用节点。 **约束限制：** 不涉及 **取值范围：** - false：在kubernetes节点就绪时，容器即可被调度到可用节点。           - true：在kubernetes节点就绪时且post-install脚本执行完成时，容器才可被调度到可用节点。  **默认取值：** false
    /// </summary>

    bool isWaitPostInstallFinish() const;
    bool waitPostInstallFinishIsSet() const;
    void unsetwaitPostInstallFinish();
    void setWaitPostInstallFinish(bool value);


protected:
    std::string alphaCcePreInstall_;
    bool alphaCcePreInstallIsSet_;
    std::string alphaCcePostInstall_;
    bool alphaCcePostInstallIsSet_;
    bool waitPostInstallFinish_;
    bool waitPostInstallFinishIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceMigrateNodeExtendParam_H_
