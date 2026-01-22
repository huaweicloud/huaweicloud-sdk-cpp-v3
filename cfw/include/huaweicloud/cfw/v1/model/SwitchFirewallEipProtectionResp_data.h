
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_SwitchFirewallEipProtectionResp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_SwitchFirewallEipProtectionResp_data_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 一键逃生/一键恢复返回数据
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  SwitchFirewallEipProtectionResp_data
    : public ModelBase
{
public:
    SwitchFirewallEipProtectionResp_data();
    virtual ~SwitchFirewallEipProtectionResp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchFirewallEipProtectionResp_data members

    /// <summary>
    /// **参数解释**： 防火墙防护状态，0: 正常状态, 1: bypass进行中, 2: bypass成功, 3: bypass失败, 4: 恢复中, 5: 恢复失败 **取值范围**： 不涉及
    /// </summary>

    int32_t getProtectionStatus() const;
    bool protectionStatusIsSet() const;
    void unsetprotectionStatus();
    void setProtectionStatus(int32_t value);

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 防护对象ID，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);


protected:
    int32_t protectionStatus_;
    bool protectionStatusIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_SwitchFirewallEipProtectionResp_data_H_
