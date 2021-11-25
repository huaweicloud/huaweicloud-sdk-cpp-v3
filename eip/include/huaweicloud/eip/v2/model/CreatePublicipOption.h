
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipOption_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 创建弹性公网IP的IP对象
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  CreatePublicipOption
    : public ModelBase
{
public:
    CreatePublicipOption();
    virtual ~CreatePublicipOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePublicipOption members

    /// <summary>
    /// 功能说明：希望申请到的弹性公网IP的地址，不指定时由系统自动分配  约束：必须为IP地址格式，且必须在可用地址池范围内
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// 功能说明：弹性公网IP的类型  取值范围：5_telcom（电信），5_union（联通），5_bgp（全动态BGP），5_sbgp（静态BGP），5_ipv6  东北-大连：5_telcom、5_union  华南-广州：5_bgp、5_sbgp  华东-上海二：5_bgp、5_sbgp  华北-北京一：5_bgp、5_sbgp、5_ipv6  亚太-香港：5_bgp  亚太-曼谷：5_bgp  亚太-新加坡：5_bgp  非洲-约翰内斯堡：5_bgp  西南-贵阳一：5_bgp、5_sbgp  华北-北京四：5_bgp、5_sbgp  约束：必须是系统具体支持的类型。  publicip_id为IPv4端口，所以\&quot;publicip_type\&quot;字段未给定时，默认为5_bgp。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 功能说明：弹性IP弹性公网IP的版本  取值范围：4、6，分别表示创建ipv4和ipv6  约束：必须是系统具体支持的类型  不填或空字符串时，默认创建ipv4
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// 功能说明：弹性公网IP名称 取值范围：1-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);


protected:
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string alias_;
    bool aliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipOption_H_
