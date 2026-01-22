
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowConfigQuotaRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowConfigQuotaRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowConfigQuotaRequest
    : public ModelBase
{
public:
    ShowConfigQuotaRequest();
    virtual ~ShowConfigQuotaRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowConfigQuotaRequest members

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 防火墙配额类型 **约束限制**： 不涉及 **取值范围**：   ACL：ACL规则配额   DNS_DOMAIN_SET：网络域名组配额   DOMAIN：域名组域名成员配额   DOMAIN_DEVICE：域名设备配额   DNS_DOMAIN_SET_PARSE_IP：网络域名组解析IP配额   APPLICATION_DOMAIN_SET：应用域名组配额   APPLICATION_DOMAIN_SET_ITEM：应用域名组域名成员配额   APPLICATION_DOMAIN_SET_ITEM_DEVICE：应用域名组设备配额   ADDR_SET：地址组配额   ADDR_SET_ITEM：地址组IP地址成员配额   ADDR_SET_ITEM_DEVICE：地址组IP地址设备配额   SERV_SET：服务组配额   SERV_SET_ITEM：服务组服务成员配额   SERV_SET_ITEM_DEVICE：服务组服务设备配额   BLACKLIST：黑名单配额   WHITELIST：白名单配额   PRIVATE_NETWORK_SEGMENT：私网网段配额 **默认取值**： 不涉及
    /// </summary>

    std::string getConfigType() const;
    bool configTypeIsSet() const;
    void unsetconfigType();
    void setConfigType(const std::string& value);

    /// <summary>
    /// **参数解释**： 组Id，查询IP地址组地址成员配额，域名组域名成员配额，服务组服务成员配额时必传，地址组id，可通过查询地址组列表接口查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得，域名组id，可通过查询域名组列表接口查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得，服务组id，可通过获取服务组列表接口查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string configType_;
    bool configTypeIsSet_;
    std::string setId_;
    bool setIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowConfigQuotaRequest& dereference_from_shared_ptr(std::shared_ptr<ShowConfigQuotaRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowConfigQuotaRequest_H_
