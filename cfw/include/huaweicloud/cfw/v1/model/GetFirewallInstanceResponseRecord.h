
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_GetFirewallInstanceResponseRecord_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_GetFirewallInstanceResponseRecord_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ProtectObjectVO.h>
#include <huaweicloud/cfw/v1/model/Flavor.h>
#include <string>
#include <huaweicloud/cfw/v1/model/FirewallInstanceResource.h>
#include <map>
#include <vector>

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
class HUAWEICLOUD_CFW_V1_EXPORT  GetFirewallInstanceResponseRecord
    : public ModelBase
{
public:
    GetFirewallInstanceResponseRecord();
    virtual ~GetFirewallInstanceResponseRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetFirewallInstanceResponseRecord members

    /// <summary>
    /// 防火墙实例id，创建云防火墙后用于标志防火墙由系统自动生成的标志id。，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)，默认情况下，fw_instance_Id为空时，返回账号下第一个墙的信息；fw_instance_Id非空时，返回与fw_instance_Id对应墙的信息。
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 防火墙名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 集群类型，包含主备（0）和集群（1）两种方式，主备模式包含四个节点，2个主节点构成集群，剩余两个节点为主节点的备节点，集群模式仅拉起两个节点作为集群。
    /// </summary>

    int32_t getHaType() const;
    bool haTypeIsSet() const;
    void unsethaType();
    void setHaType(int32_t value);

    /// <summary>
    /// 计费模式 0：包年/包月 1：按需
    /// </summary>

    int32_t getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(int32_t value);

    /// <summary>
    /// 防火墙防护类型，目前仅支持0，互联网防护
    /// </summary>

    int32_t getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(int32_t value);

    /// <summary>
    /// 引擎类型，0：自研引擎 1：山石引擎 3：天融信引擎
    /// </summary>

    int32_t getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Flavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const Flavor& value);

    /// <summary>
    /// 防护对象列表
    /// </summary>

    std::vector<ProtectObjectVO>& getProtectObjects();
    bool protectObjectsIsSet() const;
    void unsetprotectObjects();
    void setProtectObjects(const std::vector<ProtectObjectVO>& value);

    /// <summary>
    /// 防火墙状态列表，包括-1：等待支付，0：创建中，1，删除中，2：运行中，3：升级中，4：删除完成：5：冻结中，6：创建失败，7：删除失败，8：冻结失败，9：存储中，10：存储失败，11：升级失败
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 是否为旧引擎，true表示是，false表示不是
    /// </summary>

    bool isIsOldFirewallInstance() const;
    bool isOldFirewallInstanceIsSet() const;
    void unsetisOldFirewallInstance();
    void setIsOldFirewallInstance(bool value);

    /// <summary>
    /// 是否支持obs，true表示是，false表示不是
    /// </summary>

    bool isIsAvailableObs() const;
    bool isAvailableObsIsSet() const;
    void unsetisAvailableObs();
    void setIsAvailableObs(bool value);

    /// <summary>
    /// 是否支持威胁情报标签，true表示是，false表示不是
    /// </summary>

    bool isIsSupportThreatTags() const;
    bool isSupportThreatTagsIsSet() const;
    void unsetisSupportThreatTags();
    void setIsSupportThreatTags(bool value);

    /// <summary>
    /// 是否支持ipv6，true表示是，false表示不是
    /// </summary>

    bool isSupportIpv6() const;
    bool supportIpv6IsSet() const;
    void unsetsupportIpv6();
    void setSupportIpv6(bool value);

    /// <summary>
    /// 特性开关，boolean值为true表示是，false表示否
    /// </summary>

    std::map<std::string, bool>& getFeatureToggle();
    bool featureToggleIsSet() const;
    void unsetfeatureToggle();
    void setFeatureToggle(std::map<std::string, bool> value);

    /// <summary>
    /// 防火墙资源列表
    /// </summary>

    std::vector<FirewallInstanceResource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<FirewallInstanceResource>& value);

    /// <summary>
    /// 防火墙名称
    /// </summary>

    std::string getFwInstanceName() const;
    bool fwInstanceNameIsSet() const;
    void unsetfwInstanceName();
    void setFwInstanceName(const std::string& value);

    /// <summary>
    /// 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取，用户未开启企业项目时为0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 防火墙资源id，同fw_instance_id
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 是否支持url过滤，true表示是，false表示不是
    /// </summary>

    bool isSupportUrlFiltering() const;
    bool supportUrlFilteringIsSet() const;
    void unsetsupportUrlFiltering();
    void setSupportUrlFiltering(bool value);

    /// <summary>
    /// 标签列表，标签键值map转化的json字符串，如\&quot;{\\\&quot;key\\\&quot;:\\\&quot;value\\\&quot;}\&quot;
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t haType_;
    bool haTypeIsSet_;
    int32_t chargeMode_;
    bool chargeModeIsSet_;
    int32_t serviceType_;
    bool serviceTypeIsSet_;
    int32_t engineType_;
    bool engineTypeIsSet_;
    Flavor flavor_;
    bool flavorIsSet_;
    std::vector<ProtectObjectVO> protectObjects_;
    bool protectObjectsIsSet_;
    int32_t status_;
    bool statusIsSet_;
    bool isOldFirewallInstance_;
    bool isOldFirewallInstanceIsSet_;
    bool isAvailableObs_;
    bool isAvailableObsIsSet_;
    bool isSupportThreatTags_;
    bool isSupportThreatTagsIsSet_;
    bool supportIpv6_;
    bool supportIpv6IsSet_;
    std::map<std::string, bool> featureToggle_;
    bool featureToggleIsSet_;
    std::vector<FirewallInstanceResource> resources_;
    bool resourcesIsSet_;
    std::string fwInstanceName_;
    bool fwInstanceNameIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    bool supportUrlFiltering_;
    bool supportUrlFilteringIsSet_;
    std::string tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_GetFirewallInstanceResponseRecord_H_
