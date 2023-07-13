
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerLimits_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerLimits_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ProjectFlavorLimit.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ServerLimits
    : public ModelBase
{
public:
    ServerLimits();
    virtual ~ServerLimits();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerLimits members

    /// <summary>
    /// 镜像元数据最大的长度。
    /// </summary>

    int32_t getMaxImageMeta() const;
    bool maxImageMetaIsSet() const;
    void unsetmaxImageMeta();
    void setMaxImageMeta(int32_t value);

    /// <summary>
    /// 可注入文件的最大个数。
    /// </summary>

    int32_t getMaxPersonality() const;
    bool maxPersonalityIsSet() const;
    void unsetmaxPersonality();
    void setMaxPersonality(int32_t value);

    /// <summary>
    /// 注入文件内容的最大长度（单位：Byte）。
    /// </summary>

    int32_t getMaxPersonalitySize() const;
    bool maxPersonalitySizeIsSet() const;
    void unsetmaxPersonalitySize();
    void setMaxPersonalitySize(int32_t value);

    /// <summary>
    /// 安全组中安全组规则最大的配置个数。   &gt; 说明：  - 具体配额限制请以VPC配额限制为准。
    /// </summary>

    int32_t getMaxSecurityGroupRules() const;
    bool maxSecurityGroupRulesIsSet() const;
    void unsetmaxSecurityGroupRules();
    void setMaxSecurityGroupRules(int32_t value);

    /// <summary>
    /// 安全组最大使用个数。  &gt; 说明：  - 具体配额限制请以VPC配额限制为准。
    /// </summary>

    int32_t getMaxSecurityGroups() const;
    bool maxSecurityGroupsIsSet() const;
    void unsetmaxSecurityGroups();
    void setMaxSecurityGroups(int32_t value);

    /// <summary>
    /// 服务器组中的最大虚拟机数。
    /// </summary>

    int32_t getMaxServerGroupMembers() const;
    bool maxServerGroupMembersIsSet() const;
    void unsetmaxServerGroupMembers();
    void setMaxServerGroupMembers(int32_t value);

    /// <summary>
    /// 服务器组的最大个数。
    /// </summary>

    int32_t getMaxServerGroups() const;
    bool maxServerGroupsIsSet() const;
    void unsetmaxServerGroups();
    void setMaxServerGroups(int32_t value);

    /// <summary>
    /// 可输入元数据的最大长度。
    /// </summary>

    int32_t getMaxServerMeta() const;
    bool maxServerMetaIsSet() const;
    void unsetmaxServerMeta();
    void setMaxServerMeta(int32_t value);

    /// <summary>
    /// CPU核数最大申请数量。
    /// </summary>

    int32_t getMaxTotalCores() const;
    bool maxTotalCoresIsSet() const;
    void unsetmaxTotalCores();
    void setMaxTotalCores(int32_t value);

    /// <summary>
    /// 最大的浮动IP使用个数。
    /// </summary>

    int32_t getMaxTotalFloatingIps() const;
    bool maxTotalFloatingIpsIsSet() const;
    void unsetmaxTotalFloatingIps();
    void setMaxTotalFloatingIps(int32_t value);

    /// <summary>
    /// 云服务器最大申请数量。
    /// </summary>

    int32_t getMaxTotalInstances() const;
    bool maxTotalInstancesIsSet() const;
    void unsetmaxTotalInstances();
    void setMaxTotalInstances(int32_t value);

    /// <summary>
    /// 可以申请的SSH密钥对最大数量。
    /// </summary>

    int32_t getMaxTotalKeypairs() const;
    bool maxTotalKeypairsIsSet() const;
    void unsetmaxTotalKeypairs();
    void setMaxTotalKeypairs(int32_t value);

    /// <summary>
    /// 内存最大申请容量（单位：MB）。
    /// </summary>

    int32_t getMaxTotalRAMSize() const;
    bool maxTotalRAMSizeIsSet() const;
    void unsetmaxTotalRAMSize();
    void setMaxTotalRAMSize(int32_t value);

    /// <summary>
    /// 当前已使用CPU核数。
    /// </summary>

    int32_t getTotalCoresUsed() const;
    bool totalCoresUsedIsSet() const;
    void unsettotalCoresUsed();
    void setTotalCoresUsed(int32_t value);

    /// <summary>
    /// 当前浮动IP使用个数。
    /// </summary>

    int32_t getTotalFloatingIpsUsed() const;
    bool totalFloatingIpsUsedIsSet() const;
    void unsettotalFloatingIpsUsed();
    void setTotalFloatingIpsUsed(int32_t value);

    /// <summary>
    /// 当前云服务器使用个数。
    /// </summary>

    int32_t getTotalInstancesUsed() const;
    bool totalInstancesUsedIsSet() const;
    void unsettotalInstancesUsed();
    void setTotalInstancesUsed(int32_t value);

    /// <summary>
    /// 当前内存使用容量（单位：MB）。
    /// </summary>

    int32_t getTotalRAMUsed() const;
    bool totalRAMUsedIsSet() const;
    void unsettotalRAMUsed();
    void setTotalRAMUsed(int32_t value);

    /// <summary>
    /// 当前安全组使用个数。
    /// </summary>

    int32_t getTotalSecurityGroupsUsed() const;
    bool totalSecurityGroupsUsedIsSet() const;
    void unsettotalSecurityGroupsUsed();
    void setTotalSecurityGroupsUsed(int32_t value);

    /// <summary>
    /// 已使用的服务器组个数。
    /// </summary>

    int32_t getTotalServerGroupsUsed() const;
    bool totalServerGroupsUsedIsSet() const;
    void unsettotalServerGroupsUsed();
    void setTotalServerGroupsUsed(int32_t value);

    /// <summary>
    /// 竞价实例的最大申请数量。
    /// </summary>

    int32_t getMaxTotalSpotInstances() const;
    bool maxTotalSpotInstancesIsSet() const;
    void unsetmaxTotalSpotInstances();
    void setMaxTotalSpotInstances(int32_t value);

    /// <summary>
    /// 竞价实例的CPU核数最大申请数量。
    /// </summary>

    int32_t getMaxTotalSpotCores() const;
    bool maxTotalSpotCoresIsSet() const;
    void unsetmaxTotalSpotCores();
    void setMaxTotalSpotCores(int32_t value);

    /// <summary>
    /// 竞价实例的内存最大申请容量（单位：MB）。
    /// </summary>

    int32_t getMaxTotalSpotRAMSize() const;
    bool maxTotalSpotRAMSizeIsSet() const;
    void unsetmaxTotalSpotRAMSize();
    void setMaxTotalSpotRAMSize(int32_t value);

    /// <summary>
    /// 当前竞价实例的使用个数。
    /// </summary>

    int32_t getTotalSpotInstancesUsed() const;
    bool totalSpotInstancesUsedIsSet() const;
    void unsettotalSpotInstancesUsed();
    void setTotalSpotInstancesUsed(int32_t value);

    /// <summary>
    /// 当前竞价实例已使用的CPU核数。
    /// </summary>

    int32_t getTotalSpotCoresUsed() const;
    bool totalSpotCoresUsedIsSet() const;
    void unsettotalSpotCoresUsed();
    void setTotalSpotCoresUsed(int32_t value);

    /// <summary>
    /// 当前竞价实例的内存使用容量（单位：MB）。
    /// </summary>

    int32_t getTotalSpotRAMUsed() const;
    bool totalSpotRAMUsedIsSet() const;
    void unsettotalSpotRAMUsed();
    void setTotalSpotRAMUsed(int32_t value);

    /// <summary>
    /// 使用该flavor可以申请的弹性云服务器数量。  值为“-1”时，表示无数量限制。
    /// </summary>

    std::vector<ProjectFlavorLimit>& getLimitByFlavor();
    bool limitByFlavorIsSet() const;
    void unsetlimitByFlavor();
    void setLimitByFlavor(const std::vector<ProjectFlavorLimit>& value);


protected:
    int32_t maxImageMeta_;
    bool maxImageMetaIsSet_;
    int32_t maxPersonality_;
    bool maxPersonalityIsSet_;
    int32_t maxPersonalitySize_;
    bool maxPersonalitySizeIsSet_;
    int32_t maxSecurityGroupRules_;
    bool maxSecurityGroupRulesIsSet_;
    int32_t maxSecurityGroups_;
    bool maxSecurityGroupsIsSet_;
    int32_t maxServerGroupMembers_;
    bool maxServerGroupMembersIsSet_;
    int32_t maxServerGroups_;
    bool maxServerGroupsIsSet_;
    int32_t maxServerMeta_;
    bool maxServerMetaIsSet_;
    int32_t maxTotalCores_;
    bool maxTotalCoresIsSet_;
    int32_t maxTotalFloatingIps_;
    bool maxTotalFloatingIpsIsSet_;
    int32_t maxTotalInstances_;
    bool maxTotalInstancesIsSet_;
    int32_t maxTotalKeypairs_;
    bool maxTotalKeypairsIsSet_;
    int32_t maxTotalRAMSize_;
    bool maxTotalRAMSizeIsSet_;
    int32_t totalCoresUsed_;
    bool totalCoresUsedIsSet_;
    int32_t totalFloatingIpsUsed_;
    bool totalFloatingIpsUsedIsSet_;
    int32_t totalInstancesUsed_;
    bool totalInstancesUsedIsSet_;
    int32_t totalRAMUsed_;
    bool totalRAMUsedIsSet_;
    int32_t totalSecurityGroupsUsed_;
    bool totalSecurityGroupsUsedIsSet_;
    int32_t totalServerGroupsUsed_;
    bool totalServerGroupsUsedIsSet_;
    int32_t maxTotalSpotInstances_;
    bool maxTotalSpotInstancesIsSet_;
    int32_t maxTotalSpotCores_;
    bool maxTotalSpotCoresIsSet_;
    int32_t maxTotalSpotRAMSize_;
    bool maxTotalSpotRAMSizeIsSet_;
    int32_t totalSpotInstancesUsed_;
    bool totalSpotInstancesUsedIsSet_;
    int32_t totalSpotCoresUsed_;
    bool totalSpotCoresUsedIsSet_;
    int32_t totalSpotRAMUsed_;
    bool totalSpotRAMUsedIsSet_;
    std::vector<ProjectFlavorLimit> limitByFlavor_;
    bool limitByFlavorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerLimits_H_
