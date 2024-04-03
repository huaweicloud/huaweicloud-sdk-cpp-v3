
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListProjectGeipBindingsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListProjectGeipBindingsRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_EIP_V3_EXPORT  ListProjectGeipBindingsRequest
    : public ModelBase
{
public:
    ListProjectGeipBindingsRequest();
    virtual ~ListProjectGeipBindingsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectGeipBindingsRequest members

    /// <summary>
    /// 形式为\\\&quot;fields&#x3D;geip_id&amp;fields&#x3D;geip_ip_address&amp;...\\\&quot;，支持字段：geip_id/geip_ip_address/instance_type/instance_id/vnic/vn_list/public_border_group/gcbandwidth/version/created_at/updated_at/instance_vpc_id
    /// </summary>

    std::string getFields() const;
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::string& value);

    /// <summary>
    /// GEIP的uuid
    /// </summary>

    std::string getGeipId() const;
    bool geipIdIsSet() const;
    void unsetgeipId();
    void setGeipId(const std::string& value);

    /// <summary>
    /// GEIP的ip地址
    /// </summary>

    std::string getGeipIpAddress() const;
    bool geipIpAddressIsSet() const;
    void unsetgeipIpAddress();
    void setGeipIpAddress(const std::string& value);

    /// <summary>
    /// GEIP所处的出口位置
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// 绑定的实例类型
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// 绑定的实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 绑定的实例vpcid
    /// </summary>

    std::string getInstanceVpcId() const;
    bool instanceVpcIdIsSet() const;
    void unsetinstanceVpcId();
    void setInstanceVpcId(const std::string& value);

    /// <summary>
    /// 骨干带宽的uuid
    /// </summary>

    std::string getGcbandwidthId() const;
    bool gcbandwidthIdIsSet() const;
    void unsetgcbandwidthId();
    void setGcbandwidthId(const std::string& value);

    /// <summary>
    /// 骨干带宽的状态
    /// </summary>

    std::string getGcbandwidthAdminStatus() const;
    bool gcbandwidthAdminStatusIsSet() const;
    void unsetgcbandwidthAdminStatus();
    void setGcbandwidthAdminStatus(const std::string& value);

    /// <summary>
    /// 骨干带宽的大小
    /// </summary>

    int32_t getGcbandwidthSize() const;
    bool gcbandwidthSizeIsSet() const;
    void unsetgcbandwidthSize();
    void setGcbandwidthSize(int32_t value);

    /// <summary>
    /// 描述网络等级，从高到低分为铂金、金、银、铜
    /// </summary>

    std::string getGcbandwidthSlaLevel() const;
    bool gcbandwidthSlaLevelIsSet() const;
    void unsetgcbandwidthSlaLevel();
    void setGcbandwidthSlaLevel(const std::string& value);

    /// <summary>
    /// 线路质量金银铜对应的DSCP值
    /// </summary>

    int32_t getGcbandwidthDscp() const;
    bool gcbandwidthDscpIsSet() const;
    void unsetgcbandwidthDscp();
    void setGcbandwidthDscp(int32_t value);

    /// <summary>
    /// 绑定实例的ip地址
    /// </summary>

    std::string getVnicPrivateIpAddress() const;
    bool vnicPrivateIpAddressIsSet() const;
    void unsetvnicPrivateIpAddress();
    void setVnicPrivateIpAddress(const std::string& value);

    /// <summary>
    /// 绑定实例所在的vpcid
    /// </summary>

    std::string getVnicVpcId() const;
    bool vnicVpcIdIsSet() const;
    void unsetvnicVpcId();
    void setVnicVpcId(const std::string& value);

    /// <summary>
    /// 绑定实例port的uuid
    /// </summary>

    std::string getVnicPortId() const;
    bool vnicPortIdIsSet() const;
    void unsetvnicPortId();
    void setVnicPortId(const std::string& value);

    /// <summary>
    /// 绑定实例port对应的实例id
    /// </summary>

    std::string getVnicDeviceId() const;
    bool vnicDeviceIdIsSet() const;
    void unsetvnicDeviceId();
    void setVnicDeviceId(const std::string& value);

    /// <summary>
    /// 绑定实例port对应的实例所有者
    /// </summary>

    std::string getVnicDeviceOwner() const;
    bool vnicDeviceOwnerIsSet() const;
    void unsetvnicDeviceOwner();
    void setVnicDeviceOwner(const std::string& value);

    /// <summary>
    /// 绑定实例port对应的实例所有者的前缀
    /// </summary>

    std::string getVnicDeviceOwnerPrefixlike() const;
    bool vnicDeviceOwnerPrefixlikeIsSet() const;
    void unsetvnicDeviceOwnerPrefixlike();
    void setVnicDeviceOwnerPrefixlike(const std::string& value);

    /// <summary>
    /// 绑定实例port对应的实例类型
    /// </summary>

    std::string getVnicInstanceType() const;
    bool vnicInstanceTypeIsSet() const;
    void unsetvnicInstanceType();
    void setVnicInstanceType(const std::string& value);

    /// <summary>
    /// 绑定实例port对应的实例id
    /// </summary>

    std::string getVnicInstanceId() const;
    bool vnicInstanceIdIsSet() const;
    void unsetvnicInstanceId();
    void setVnicInstanceId(const std::string& value);

    /// <summary>
    /// 排序，形式为\&quot;sort_key&#x3D;geip_id&amp;sort_dir&#x3D;asc\&quot;  支持字段：geip_id/version/public_border_group/ geip_ip_address/created_at/updated_at
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
    /// 每页返回的个数取值范围：0~[2000]，其中2000为局点差异项，具体取值由局点决定
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页起始点
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 分页起始点
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::string fields_;
    bool fieldsIsSet_;
    std::string geipId_;
    bool geipIdIsSet_;
    std::string geipIpAddress_;
    bool geipIpAddressIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceVpcId_;
    bool instanceVpcIdIsSet_;
    std::string gcbandwidthId_;
    bool gcbandwidthIdIsSet_;
    std::string gcbandwidthAdminStatus_;
    bool gcbandwidthAdminStatusIsSet_;
    int32_t gcbandwidthSize_;
    bool gcbandwidthSizeIsSet_;
    std::string gcbandwidthSlaLevel_;
    bool gcbandwidthSlaLevelIsSet_;
    int32_t gcbandwidthDscp_;
    bool gcbandwidthDscpIsSet_;
    std::string vnicPrivateIpAddress_;
    bool vnicPrivateIpAddressIsSet_;
    std::string vnicVpcId_;
    bool vnicVpcIdIsSet_;
    std::string vnicPortId_;
    bool vnicPortIdIsSet_;
    std::string vnicDeviceId_;
    bool vnicDeviceIdIsSet_;
    std::string vnicDeviceOwner_;
    bool vnicDeviceOwnerIsSet_;
    std::string vnicDeviceOwnerPrefixlike_;
    bool vnicDeviceOwnerPrefixlikeIsSet_;
    std::string vnicInstanceType_;
    bool vnicInstanceTypeIsSet_;
    std::string vnicInstanceId_;
    bool vnicInstanceIdIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectGeipBindingsRequest& dereference_from_shared_ptr(std::shared_ptr<ListProjectGeipBindingsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListProjectGeipBindingsRequest_H_
