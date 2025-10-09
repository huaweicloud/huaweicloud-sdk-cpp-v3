
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpdateExtendParam_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpdateExtendParam_H_


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
/// **参数解释**： 节点池更新时支持的扩展参数。 **约束限制**： 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolUpdateExtendParam
    : public ModelBase
{
public:
    NodePoolUpdateExtendParam();
    virtual ~NodePoolUpdateExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolUpdateExtendParam members

    /// <summary>
    /// **参数解释**： 委托的名称。 委托是由租户管理员在统一身份认证服务（Identity and AccessManagement，IAM）上创建的，可以为CCE节点提供访问云服务器的临时凭证。 **约束限制**： 作为响应参数仅在创建节点传入时返回该字段。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// **参数解释**： 安装前执行脚本。 输入的值需要经过Base64编码，方法如下：   &#x60;&#x60;&#x60;   echo -n \&quot;待编码内容\&quot; | base64   &#x60;&#x60;&#x60;   **约束限制**：  安装前/后执行脚本统一计算字符，转码后的字符总数不能超过10240。  **取值范围：**  不涉及  **默认取值：**  不涉及
    /// </summary>

    std::string getAlphaCcePreInstall() const;
    bool alphaCcePreInstallIsSet() const;
    void unsetalphaCcePreInstall();
    void setAlphaCcePreInstall(const std::string& value);

    /// <summary>
    /// **参数解释**： 安装后执行脚本。 输入的值需要经过Base64编码，方法如下：   &#x60;&#x60;&#x60;   echo -n \&quot;待编码内容\&quot; | base64   &#x60;&#x60;&#x60;  **约束限制**： 安装前/后执行脚本统一计算字符，转码后的字符总数不能超过10240。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getAlphaCcePostInstall() const;
    bool alphaCcePostInstallIsSet() const;
    void unsetalphaCcePostInstall();
    void setAlphaCcePostInstall(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户愿意为竞价实例每小时支付的最高价格。 **约束限制**： - 仅billingMode&#x3D;0且marketType&#x3D;spot时，该参数设置后生效。 - 当billingMode&#x3D;0且marketType&#x3D;spot时，如果不传递spotPrice，默认使用按需购买的价格作为竞价。 - spotPrice需要小于等于按需价格并大于等于云服务器市场价格。  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getSpotPrice() const;
    bool spotPriceIsSet() const;
    void unsetspotPrice();
    void setSpotPrice(const std::string& value);

    /// <summary>
    /// **参数解释**： 指定节点安全加固类型，当前仅支持HCE2.0镜像等保2.0三级安全加固。 等保加固会对身份鉴别、访问控制、安全审计、入侵防范、恶意代码防范进行检查并加固。[详情请参见[Huawei Cloud EulerOS 2.0等保2.0三级版镜像概述](https://support.huaweicloud.com/productdesc-hce/hce_sec_0001.html)。](tag:hws) 若未指定此参数，则尝试用原有的值补全。如：原先HCE2.0镜像已配置安全加固，更新节点池时未指定此参数，则仍旧保持安全加固配置，若要取消，需显式指定参数值为\&quot;null\&quot;。 **约束限制**： 不涉及 **取值范围**： - 空值：表示不开启等保加固 - cybersecurity：表示开启等保加固  **默认取值**： 不涉及
    /// </summary>

    std::string getSecurityReinforcementType() const;
    bool securityReinforcementTypeIsSet() const;
    void unsetsecurityReinforcementType();
    void setSecurityReinforcementType(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点自定义镜像ID，从IMS控制台获取，需要使用自定义镜像时用此参数。 **约束限制**： 不涉及 [&gt; - 若指定了extendParam中的securityReinforcementType参数为cybersecurity，节点将开启安全等保加固功能，则节点的操作系统类型必须使用HCE2.0。](tag:hws)  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getAlphaCceNodeImageID() const;
    bool alphaCceNodeImageIDIsSet() const;
    void unsetalphaCceNodeImageID();
    void setAlphaCceNodeImageID(const std::string& value);


protected:
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::string alphaCcePreInstall_;
    bool alphaCcePreInstallIsSet_;
    std::string alphaCcePostInstall_;
    bool alphaCcePostInstallIsSet_;
    std::string spotPrice_;
    bool spotPriceIsSet_;
    std::string securityReinforcementType_;
    bool securityReinforcementTypeIsSet_;
    std::string alphaCceNodeImageID_;
    bool alphaCceNodeImageIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpdateExtendParam_H_
