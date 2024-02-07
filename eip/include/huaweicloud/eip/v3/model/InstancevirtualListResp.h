
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_InstancevirtualListResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_InstancevirtualListResp_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/NexthopDict.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// GEIP实例的vn信息
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  InstancevirtualListResp
    : public ModelBase
{
public:
    InstancevirtualListResp();
    virtual ~InstancevirtualListResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstancevirtualListResp members

    /// <summary>
    /// virtualnexthop的uuid
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// virtualnexthop的所有者
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 标识网关所在位置POD、AZ、REGION、GLOBAL
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

    /// <summary>
    /// 功能说明：nexthops的转发模式  取值范围：&#39;ACTIVE-ACTIVE&#39;多活模式、&#39;ACTIVE-STANDBY&#39;主备模式
    /// </summary>

    std::string getForwardMode() const;
    bool forwardModeIsSet() const;
    void unsetforwardMode();
    void setForwardMode(const std::string& value);

    /// <summary>
    /// 功能说明：网关所在集群信息，可为空  取值范围：0-36长度的字符串
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 功能说明：nexthops在底层的负载均衡策略  取值范围：&#39;2_TUPLE&#39;二元组、&#39;3_TUPLE&#39;三元组、&#39;5_TUPLE&#39;五元组
    /// </summary>

    std::string getHashMode() const;
    bool hashModeIsSet() const;
    void unsethashMode();
    void setHashMode(const std::string& value);

    /// <summary>
    /// 功能说明：下一跳所属网络类型  取值范围：&#39;VXLAN&#39;、&#39;VLAN&#39;
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 功能说明：网络id标识，与type组合使用  取值范围：type&#x3D;VXLAN时取值0-16777215,type&#x3D;VLAN时取值0-4095
    /// </summary>

    int32_t getVni() const;
    bool vniIsSet() const;
    void unsetvni();
    void setVni(int32_t value);

    /// <summary>
    /// 下一跳信息列表
    /// </summary>

    std::vector<NexthopDict>& getNexthops();
    bool nexthopsIsSet() const;
    void unsetnexthops();
    void setNexthops(const std::vector<NexthopDict>& value);

    /// <summary>
    /// 功能说明：VirtualNexthop对象创建时间，UTC格式
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 功能说明：VirtualNexthop对象更新时间，UTC格式
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string location_;
    bool locationIsSet_;
    std::string forwardMode_;
    bool forwardModeIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string hashMode_;
    bool hashModeIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t vni_;
    bool vniIsSet_;
    std::vector<NexthopDict> nexthops_;
    bool nexthopsIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_InstancevirtualListResp_H_
