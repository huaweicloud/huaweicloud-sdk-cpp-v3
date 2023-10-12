
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicipsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicipsRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ListPublicipsRequest
    : public ModelBase
{
public:
    ListPublicipsRequest();
    virtual ~ListPublicipsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPublicipsRequest members

    /// <summary>
    /// 分页查询起始的资源ID，为空时为查询第一页
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 分页查询起始的资源序号
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页返回的个数取值范围：0~[2000]，其中2000为局点差异项，具体取值由局点决定
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;owner&amp;...\&quot;  支持字段：id/project_id/ip_version/type/public_ip_address/public_ipv6_address/network_type/status/description/created_at/updated_at/vnic/bandwidth/associate_instance_type/associate_instance_id/lock_status/billing_info/tags/enterprise_project_id/allow_share_bandwidth_types/public_border_group/alias/publicip_pool_name/publicip_pool_id
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);

    /// <summary>
    /// 排序，形式为\&quot;sort_key&#x3D;id\&quot;  支持字段：id/public_ip_address/public_ipv6_address/ip_version/created_at/updated_at/public_border_group
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 排序方向  取值范围：asc、desc
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 根据id过滤
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据ip_version过滤  取值范围：4、6
    /// </summary>

    std::vector<int32_t>& getIpVersion();
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(std::vector<int32_t> value);

    /// <summary>
    /// 根据public_ip_address过滤
    /// </summary>

    std::vector<std::string>& getPublicIpAddress();
    bool publicIpAddressIsSet() const;
    void unsetpublicIpAddress();
    void setPublicIpAddress(const std::vector<std::string>& value);

    /// <summary>
    /// 根据public_ip_address过滤，模糊搜索
    /// </summary>

    std::string getPublicIpAddressLike() const;
    bool publicIpAddressLikeIsSet() const;
    void unsetpublicIpAddressLike();
    void setPublicIpAddressLike(const std::string& value);

    /// <summary>
    /// 根据public_ipv6_address过滤
    /// </summary>

    std::vector<std::string>& getPublicIpv6Address();
    bool publicIpv6AddressIsSet() const;
    void unsetpublicIpv6Address();
    void setPublicIpv6Address(const std::vector<std::string>& value);

    /// <summary>
    /// 根据public_ipv6_address过滤，模糊搜索
    /// </summary>

    std::string getPublicIpv6AddressLike() const;
    bool publicIpv6AddressLikeIsSet() const;
    void unsetpublicIpv6AddressLike();
    void setPublicIpv6AddressLike(const std::string& value);

    /// <summary>
    /// 根据type过滤  取值范围：EIP、DUALSTACK、DUALSTACK_SUBNET  EIP: 弹性公网IP   DUALSTACK: 双栈IPV6   DUALSTACK_SUBNET: 双栈子网
    /// </summary>

    std::vector<std::string>& getType();
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::vector<std::string>& value);

    /// <summary>
    /// 根据network_type过滤  取值范围：5_telcom、5_union、5_bgp、5_sbgp、5_ipv6、5_graybgp
    /// </summary>

    std::vector<std::string>& getNetworkType();
    bool networkTypeIsSet() const;
    void unsetnetworkType();
    void setNetworkType(const std::vector<std::string>& value);

    /// <summary>
    /// 根据publicip_pool_name过滤  取值范围：5_telcom、5_union、5_bgp、5_sbgp、5_ipv6、5_graybgp、专属池名称等
    /// </summary>

    std::vector<std::string>& getPublicipPoolName();
    bool publicipPoolNameIsSet() const;
    void unsetpublicipPoolName();
    void setPublicipPoolName(const std::vector<std::string>& value);

    /// <summary>
    /// 根据status过滤  取值范围：FREEZED、DOWN、ACTIVE、ERROR
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 根据alias模糊搜索
    /// </summary>

    std::string getAliasLike() const;
    bool aliasLikeIsSet() const;
    void unsetaliasLike();
    void setAliasLike(const std::string& value);

    /// <summary>
    /// 根据alias过滤
    /// </summary>

    std::vector<std::string>& getAlias();
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::vector<std::string>& value);

    /// <summary>
    /// 根据description过滤
    /// </summary>

    std::vector<std::string>& getDescription();
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::vector<std::string>& value);

    /// <summary>
    /// 根据private_ip_address过滤
    /// </summary>

    std::vector<std::string>& getVnicPrivateIpAddress();
    bool vnicPrivateIpAddressIsSet() const;
    void unsetvnicPrivateIpAddress();
    void setVnicPrivateIpAddress(const std::vector<std::string>& value);

    /// <summary>
    /// 根据private_ip_address模糊搜索
    /// </summary>

    std::string getVnicPrivateIpAddressLike() const;
    bool vnicPrivateIpAddressLikeIsSet() const;
    void unsetvnicPrivateIpAddressLike();
    void setVnicPrivateIpAddressLike(const std::string& value);

    /// <summary>
    /// 根据device_id过滤
    /// </summary>

    std::vector<std::string>& getVnicDeviceId();
    bool vnicDeviceIdIsSet() const;
    void unsetvnicDeviceId();
    void setVnicDeviceId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据device_owner过滤
    /// </summary>

    std::vector<std::string>& getVnicDeviceOwner();
    bool vnicDeviceOwnerIsSet() const;
    void unsetvnicDeviceOwner();
    void setVnicDeviceOwner(const std::vector<std::string>& value);

    /// <summary>
    /// 根据vpc_id过滤
    /// </summary>

    std::vector<std::string>& getVnicVpcId();
    bool vnicVpcIdIsSet() const;
    void unsetvnicVpcId();
    void setVnicVpcId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据port_id过滤
    /// </summary>

    std::vector<std::string>& getVnicPortId();
    bool vnicPortIdIsSet() const;
    void unsetvnicPortId();
    void setVnicPortId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据device_owner_prefixlike模糊搜索
    /// </summary>

    std::string getVnicDeviceOwnerPrefixlike() const;
    bool vnicDeviceOwnerPrefixlikeIsSet() const;
    void unsetvnicDeviceOwnerPrefixlike();
    void setVnicDeviceOwnerPrefixlike(const std::string& value);

    /// <summary>
    /// 根据instance_type过滤
    /// </summary>

    std::vector<std::string>& getVnicInstanceType();
    bool vnicInstanceTypeIsSet() const;
    void unsetvnicInstanceType();
    void setVnicInstanceType(const std::vector<std::string>& value);

    /// <summary>
    /// 根据instance_id过滤
    /// </summary>

    std::vector<std::string>& getVnicInstanceId();
    bool vnicInstanceIdIsSet() const;
    void unsetvnicInstanceId();
    void setVnicInstanceId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据id过滤
    /// </summary>

    std::vector<std::string>& getBandwidthId();
    bool bandwidthIdIsSet() const;
    void unsetbandwidthId();
    void setBandwidthId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据name过滤
    /// </summary>

    std::vector<std::string>& getBandwidthName();
    bool bandwidthNameIsSet() const;
    void unsetbandwidthName();
    void setBandwidthName(const std::vector<std::string>& value);

    /// <summary>
    /// 根据name模糊过滤
    /// </summary>

    std::vector<std::string>& getBandwidthNameLike();
    bool bandwidthNameLikeIsSet() const;
    void unsetbandwidthNameLike();
    void setBandwidthNameLike(const std::vector<std::string>& value);

    /// <summary>
    /// 根据size过滤
    /// </summary>

    std::vector<int32_t>& getBandwidthSize();
    bool bandwidthSizeIsSet() const;
    void unsetbandwidthSize();
    void setBandwidthSize(std::vector<int32_t> value);

    /// <summary>
    /// 根据share_type过滤
    /// </summary>

    std::vector<std::string>& getBandwidthShareType();
    bool bandwidthShareTypeIsSet() const;
    void unsetbandwidthShareType();
    void setBandwidthShareType(const std::vector<std::string>& value);

    /// <summary>
    /// 根据charge_mode过滤
    /// </summary>

    std::vector<std::string>& getBandwidthChargeMode();
    bool bandwidthChargeModeIsSet() const;
    void unsetbandwidthChargeMode();
    void setBandwidthChargeMode(const std::vector<std::string>& value);

    /// <summary>
    /// 根据billing_info过滤
    /// </summary>

    std::vector<std::string>& getBillingInfo();
    bool billingInfoIsSet() const;
    void unsetbillingInfo();
    void setBillingInfo(const std::vector<std::string>& value);

    /// <summary>
    /// 根据订单模式过滤,   取值范围：YEARLY_MONTHLY、PAY_PER_USE
    /// </summary>

    std::string getBillingMode() const;
    bool billingModeIsSet() const;
    void unsetbillingMode();
    void setBillingMode(const std::string& value);

    /// <summary>
    /// 根据associate_instance_type过滤  取值范围：PORT、NATGW、ELB、VPN、ELBV1
    /// </summary>

    std::vector<std::string>& getAssociateInstanceType();
    bool associateInstanceTypeIsSet() const;
    void unsetassociateInstanceType();
    void setAssociateInstanceType(const std::vector<std::string>& value);

    /// <summary>
    /// 根据associate_instance_id过滤
    /// </summary>

    std::vector<std::string>& getAssociateInstanceId();
    bool associateInstanceIdIsSet() const;
    void unsetassociateInstanceId();
    void setAssociateInstanceId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据enterprise_project_id过滤
    /// </summary>

    std::vector<std::string>& getEnterpriseProjectId();
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::vector<std::string>& value);

    /// <summary>
    /// 根据public_border_group过滤
    /// </summary>

    std::vector<std::string>& getPublicBorderGroup();
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 共享带宽类型，根据任一共享带宽类型过滤EIP列表。 可以指定多个带宽类型，不同的带宽类型间用逗号分隔。
    /// </summary>

    std::vector<std::string>& getAllowShareBandwidthTypeAny();
    bool allowShareBandwidthTypeAnyIsSet() const;
    void unsetallowShareBandwidthTypeAny();
    void setAllowShareBandwidthTypeAny(const std::vector<std::string>& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<std::string> fields_;
    bool fieldsIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::vector<std::string> id_;
    bool idIsSet_;
    std::vector<int32_t> ipVersion_;
    bool ipVersionIsSet_;
    std::vector<std::string> publicIpAddress_;
    bool publicIpAddressIsSet_;
    std::string publicIpAddressLike_;
    bool publicIpAddressLikeIsSet_;
    std::vector<std::string> publicIpv6Address_;
    bool publicIpv6AddressIsSet_;
    std::string publicIpv6AddressLike_;
    bool publicIpv6AddressLikeIsSet_;
    std::vector<std::string> type_;
    bool typeIsSet_;
    std::vector<std::string> networkType_;
    bool networkTypeIsSet_;
    std::vector<std::string> publicipPoolName_;
    bool publicipPoolNameIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    std::string aliasLike_;
    bool aliasLikeIsSet_;
    std::vector<std::string> alias_;
    bool aliasIsSet_;
    std::vector<std::string> description_;
    bool descriptionIsSet_;
    std::vector<std::string> vnicPrivateIpAddress_;
    bool vnicPrivateIpAddressIsSet_;
    std::string vnicPrivateIpAddressLike_;
    bool vnicPrivateIpAddressLikeIsSet_;
    std::vector<std::string> vnicDeviceId_;
    bool vnicDeviceIdIsSet_;
    std::vector<std::string> vnicDeviceOwner_;
    bool vnicDeviceOwnerIsSet_;
    std::vector<std::string> vnicVpcId_;
    bool vnicVpcIdIsSet_;
    std::vector<std::string> vnicPortId_;
    bool vnicPortIdIsSet_;
    std::string vnicDeviceOwnerPrefixlike_;
    bool vnicDeviceOwnerPrefixlikeIsSet_;
    std::vector<std::string> vnicInstanceType_;
    bool vnicInstanceTypeIsSet_;
    std::vector<std::string> vnicInstanceId_;
    bool vnicInstanceIdIsSet_;
    std::vector<std::string> bandwidthId_;
    bool bandwidthIdIsSet_;
    std::vector<std::string> bandwidthName_;
    bool bandwidthNameIsSet_;
    std::vector<std::string> bandwidthNameLike_;
    bool bandwidthNameLikeIsSet_;
    std::vector<int32_t> bandwidthSize_;
    bool bandwidthSizeIsSet_;
    std::vector<std::string> bandwidthShareType_;
    bool bandwidthShareTypeIsSet_;
    std::vector<std::string> bandwidthChargeMode_;
    bool bandwidthChargeModeIsSet_;
    std::vector<std::string> billingInfo_;
    bool billingInfoIsSet_;
    std::string billingMode_;
    bool billingModeIsSet_;
    std::vector<std::string> associateInstanceType_;
    bool associateInstanceTypeIsSet_;
    std::vector<std::string> associateInstanceId_;
    bool associateInstanceIdIsSet_;
    std::vector<std::string> enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::vector<std::string> allowShareBandwidthTypeAny_;
    bool allowShareBandwidthTypeAnyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPublicipsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPublicipsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicipsRequest_H_
