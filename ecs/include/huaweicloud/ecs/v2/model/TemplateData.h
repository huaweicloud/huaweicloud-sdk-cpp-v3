
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateData_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateData_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/TemplateMarketOptions.h>
#include <huaweicloud/ecs/v2/model/TemplateInternetAccessOption.h>
#include <huaweicloud/ecs/v2/model/TemplateNetworkInterfaceOption.h>
#include <huaweicloud/ecs/v2/model/TemplateBlockDeviceMappingOption.h>
#include <string>
#include <huaweicloud/ecs/v2/model/TemplateOsProfile.h>
#include <huaweicloud/ecs/v2/model/TemplateTagOptions.h>
#include <map>
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
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateData
    : public ModelBase
{
public:
    TemplateData();
    virtual ~TemplateData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateData members

    /// <summary>
    /// 规格ID
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// AZ
    /// </summary>

    std::string getAvailabilityZoneId() const;
    bool availabilityZoneIdIsSet() const;
    void unsetavailabilityZoneId();
    void setAvailabilityZoneId(const std::string& value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 开启自动恢复
    /// </summary>

    bool isAutoRecovery() const;
    bool autoRecoveryIsSet() const;
    void unsetautoRecovery();
    void setAutoRecovery(bool value);

    /// <summary>
    /// 
    /// </summary>

    TemplateOsProfile getOsProfile() const;
    bool osProfileIsSet() const;
    void unsetosProfile();
    void setOsProfile(const TemplateOsProfile& value);

    /// <summary>
    /// 安全组ID列表。全网卡生效。
    /// </summary>

    std::vector<std::string>& getSecurityGroupIds();
    bool securityGroupIdsIsSet() const;
    void unsetsecurityGroupIds();
    void setSecurityGroupIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<TemplateNetworkInterfaceOption>& getNetworkInterfaces();
    bool networkInterfacesIsSet() const;
    void unsetnetworkInterfaces();
    void setNetworkInterfaces(const std::vector<TemplateNetworkInterfaceOption>& value);

    /// <summary>
    /// BDM挂载信息。按flavor限制为准。 1. 整机镜像，不修改卷属性，按原镜像配置创建。 2. 整机镜像，修改卷属性，要用户解开填写BDM。 3. 提供解镜像为BDM接口。
    /// </summary>

    std::vector<TemplateBlockDeviceMappingOption>& getBlockDeviceMappings();
    bool blockDeviceMappingsIsSet() const;
    void unsetblockDeviceMappings();
    void setBlockDeviceMappings(const std::vector<TemplateBlockDeviceMappingOption>& value);

    /// <summary>
    /// 
    /// </summary>

    TemplateMarketOptions getMarketOptions() const;
    bool marketOptionsIsSet() const;
    void unsetmarketOptions();
    void setMarketOptions(const TemplateMarketOptions& value);

    /// <summary>
    /// 
    /// </summary>

    TemplateInternetAccessOption getInternetAccess() const;
    bool internetAccessIsSet() const;
    void unsetinternetAccess();
    void setInternetAccess(const TemplateInternetAccessOption& value);

    /// <summary>
    /// 
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 创建虚拟机标签，目前仅支持给虚拟机打标签，后续会支持同时给相关资源如卷等打标签
    /// </summary>

    std::vector<TemplateTagOptions>& getTagOptions();
    bool tagOptionsIsSet() const;
    void unsettagOptions();
    void setTagOptions(const std::vector<TemplateTagOptions>& value);


protected:
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string availabilityZoneId_;
    bool availabilityZoneIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool autoRecovery_;
    bool autoRecoveryIsSet_;
    TemplateOsProfile osProfile_;
    bool osProfileIsSet_;
    std::vector<std::string> securityGroupIds_;
    bool securityGroupIdsIsSet_;
    std::vector<TemplateNetworkInterfaceOption> networkInterfaces_;
    bool networkInterfacesIsSet_;
    std::vector<TemplateBlockDeviceMappingOption> blockDeviceMappings_;
    bool blockDeviceMappingsIsSet_;
    TemplateMarketOptions marketOptions_;
    bool marketOptionsIsSet_;
    TemplateInternetAccessOption internetAccess_;
    bool internetAccessIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::vector<TemplateTagOptions> tagOptions_;
    bool tagOptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateData_H_
