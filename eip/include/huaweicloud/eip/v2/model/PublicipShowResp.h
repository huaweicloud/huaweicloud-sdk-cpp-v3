
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_PublicipShowResp_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_PublicipShowResp_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/eip/v2/model/ProfileResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 弹性公网IP列表返回体
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  PublicipShowResp
    : public ModelBase
{
public:
    PublicipShowResp();
    virtual ~PublicipShowResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PublicipShowResp members

    /// <summary>
    /// 弹性公网IP对应带宽ID
    /// </summary>

    std::string getBandwidthId() const;
    bool bandwidthIdIsSet() const;
    void unsetbandwidthId();
    void setBandwidthId(const std::string& value);

    /// <summary>
    /// 带宽名称
    /// </summary>

    std::string getBandwidthName() const;
    bool bandwidthNameIsSet() const;
    void unsetbandwidthName();
    void setBandwidthName(const std::string& value);

    /// <summary>
    /// 表示共享带宽或者独享带宽  取值范围：PER，WHOLE。  WHOLE表示共享带宽  PER表示独享带宽  约束：其中IPv6暂不支持WHOLE类型带宽。
    /// </summary>

    std::string getBandwidthShareType() const;
    bool bandwidthShareTypeIsSet() const;
    void unsetbandwidthShareType();
    void setBandwidthShareType(const std::string& value);

    /// <summary>
    /// 带宽大小，单位为Mbit/s。
    /// </summary>

    int32_t getBandwidthSize() const;
    bool bandwidthSizeIsSet() const;
    void unsetbandwidthSize();
    void setBandwidthSize(int32_t value);

    /// <summary>
    /// 弹性公网IP申请时间（UTC）
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 企业项目ID。最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。  创建弹性公网IP时，给弹性公网IP绑定企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 弹性公网IP唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：端口id。  约束：只有绑定了的弹性公网IP查询才会返回该参数
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 功能说明：绑定弹性公网IP的私有IP地址  约束：只有绑定了的弹性公网IP查询才会返回该参数
    /// </summary>

    std::string getPrivateIpAddress() const;
    bool privateIpAddressIsSet() const;
    void unsetprivateIpAddress();
    void setPrivateIpAddress(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProfileResp getProfile() const;
    bool profileIsSet() const;
    void unsetprofile();
    void setProfile(const ProfileResp& value);

    /// <summary>
    /// IPv4时是申请到的弹性公网IP地址，IPv6时是IPv6地址对应的IPv4地址
    /// </summary>

    std::string getPublicIpAddress() const;
    bool publicIpAddressIsSet() const;
    void unsetpublicIpAddress();
    void setPublicIpAddress(const std::string& value);

    /// <summary>
    /// 功能说明：弹性公网IP的状态  取值范围：冻结FREEZED，绑定失败BIND_ERROR，绑定中BINDING，释放中PENDING_DELETE， 创建中PENDING_CREATE，创建中NOTIFYING，释放中NOTIFY_DELETE，更新中PENDING_UPDATE， 未绑定DOWN ，绑定ACTIVE，绑定ELB，绑定VPN，失败ERROR。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 弹性公网IP的类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// IPv4时无此字段，IPv6时为申请到的弹性公网IP地址
    /// </summary>

    std::string getPublicIpv6Address() const;
    bool publicIpv6AddressIsSet() const;
    void unsetpublicIpv6Address();
    void setPublicIpv6Address(const std::string& value);

    /// <summary>
    /// IP版本信息，取值范围是4和6  4：表示IPv4  6：表示IPv6
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// 功能说明：表示中心站点资源或者边缘站点资源 取值范围： center、边缘站点名称 约束：publicip只能绑定该字段相同的资源
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// 功能说明：表示此publicip可以加入的共享带宽类型列表，如果为空列表，则表示该           publicip不能加入任何共享带宽 约束：publicip只能加入到有该带宽类型的共享带宽中
    /// </summary>

    std::vector<std::string>& getAllowShareBandwidthTypes();
    bool allowShareBandwidthTypesIsSet() const;
    void unsetallowShareBandwidthTypes();
    void setAllowShareBandwidthTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：弹性公网IP名称 取值范围：1-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);


protected:
    std::string bandwidthId_;
    bool bandwidthIdIsSet_;
    std::string bandwidthName_;
    bool bandwidthNameIsSet_;
    std::string bandwidthShareType_;
    bool bandwidthShareTypeIsSet_;
    int32_t bandwidthSize_;
    bool bandwidthSizeIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string privateIpAddress_;
    bool privateIpAddressIsSet_;
    ProfileResp profile_;
    bool profileIsSet_;
    std::string publicIpAddress_;
    bool publicIpAddressIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string publicIpv6Address_;
    bool publicIpv6AddressIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::vector<std::string> allowShareBandwidthTypes_;
    bool allowShareBandwidthTypesIsSet_;
    std::string alias_;
    bool aliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_PublicipShowResp_H_
