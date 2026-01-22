
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AdvancedIpsRuleVo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AdvancedIpsRuleVo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AdvancedIpsRuleVo
    : public ModelBase
{
public:
    AdvancedIpsRuleVo();
    virtual ~AdvancedIpsRuleVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdvancedIpsRuleVo members

    /// <summary>
    /// 动作：0表示仅记录日志、1表示拦截session、2表示拦截ip
    /// </summary>

    int32_t getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(int32_t value);

    /// <summary>
    /// 频率ips规则id
    /// </summary>

    std::string getIpsRuleId() const;
    bool ipsRuleIdIsSet() const;
    void unsetipsRuleId();
    void setIpsRuleId(const std::string& value);

    /// <summary>
    /// ips规则类型：0表示敏感目录扫描、1表示反弹shell
    /// </summary>

    int32_t getIpsRuleType() const;
    bool ipsRuleTypeIsSet() const;
    void unsetipsRuleType();
    void setIpsRuleType(int32_t value);

    /// <summary>
    /// 频率ips定义JSON字符串
    /// </summary>

    std::string getParam() const;
    bool paramIsSet() const;
    void unsetparam();
    void setParam(const std::string& value);

    /// <summary>
    /// 频率ips规则状态，0表示关闭，1表示开启
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    int32_t action_;
    bool actionIsSet_;
    std::string ipsRuleId_;
    bool ipsRuleIdIsSet_;
    int32_t ipsRuleType_;
    bool ipsRuleTypeIsSet_;
    std::string param_;
    bool paramIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AdvancedIpsRuleVo_H_
