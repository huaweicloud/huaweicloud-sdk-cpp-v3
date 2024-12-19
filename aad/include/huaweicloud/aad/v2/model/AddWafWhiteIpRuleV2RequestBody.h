
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_AddWafWhiteIpRuleV2RequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_AddWafWhiteIpRuleV2RequestBody_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  AddWafWhiteIpRuleV2RequestBody
    : public ModelBase
{
public:
    AddWafWhiteIpRuleV2RequestBody();
    virtual ~AddWafWhiteIpRuleV2RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddWafWhiteIpRuleV2RequestBody members

    /// <summary>
    /// 域名+端口组合，标准端口80/443无须加端口。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 待添加ip/ip段
    /// </summary>

    std::vector<std::string>& getIps();
    bool ipsIsSet() const;
    void unsetips();
    void setIps(const std::vector<std::string>& value);

    /// <summary>
    /// 防护区域,0-大陆,1-海外
    /// </summary>

    int32_t getOverseasType() const;
    bool overseasTypeIsSet() const;
    void unsetoverseasType();
    void setOverseasType(int32_t value);

    /// <summary>
    /// 0-黑名单，1-白名单
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::vector<std::string> ips_;
    bool ipsIsSet_;
    int32_t overseasType_;
    bool overseasTypeIsSet_;
    int32_t type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_AddWafWhiteIpRuleV2RequestBody_H_
