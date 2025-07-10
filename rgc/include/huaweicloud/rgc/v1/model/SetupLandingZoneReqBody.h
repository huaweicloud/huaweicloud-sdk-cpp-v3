
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_SetupLandingZoneReqBody_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_SetupLandingZoneReqBody_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/LoggingConfiguration.h>
#include <huaweicloud/rgc/v1/model/OrganizationStructureBaseLine.h>
#include <huaweicloud/rgc/v1/model/RegionConfigurationList.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置Landing Zone的参数。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  SetupLandingZoneReqBody
    : public ModelBase
{
public:
    SetupLandingZoneReqBody();
    virtual ~SetupLandingZoneReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetupLandingZoneReqBody members

    /// <summary>
    /// 管理员纳管账号创建Identity Center用户所用邮箱。
    /// </summary>

    std::string getIdentityStoreEmail() const;
    bool identityStoreEmailIsSet() const;
    void unsetidentityStoreEmail();
    void setIdentityStoreEmail(const std::string& value);

    /// <summary>
    /// 主区域。
    /// </summary>

    std::string getHomeRegion() const;
    bool homeRegionIsSet() const;
    void unsethomeRegion();
    void setHomeRegion(const std::string& value);

    /// <summary>
    /// 设置Landing Zone的类型。包括CREATE、REPAIR以及UPDATE。
    /// </summary>

    std::string getSetupLandingZoneActionType() const;
    bool setupLandingZoneActionTypeIsSet() const;
    void unsetsetupLandingZoneActionType();
    void setSetupLandingZoneActionType(const std::string& value);

    /// <summary>
    /// 当前纳管账号纳管的区域。
    /// </summary>

    std::vector<RegionConfigurationList>& getRegionConfigurationList();
    bool regionConfigurationListIsSet() const;
    void unsetregionConfigurationList();
    void setRegionConfigurationList(const std::vector<RegionConfigurationList>& value);

    /// <summary>
    /// 是否设置Landing Zone的identity center。
    /// </summary>

    std::string getIdentityCenterStatus() const;
    bool identityCenterStatusIsSet() const;
    void unsetidentityCenterStatus();
    void setIdentityCenterStatus(const std::string& value);

    /// <summary>
    /// 设置organization的类型。STANDARD和NON_STANDARD。
    /// </summary>

    std::string getOrganizationStructureType() const;
    bool organizationStructureTypeIsSet() const;
    void unsetorganizationStructureType();
    void setOrganizationStructureType(const std::string& value);

    /// <summary>
    /// 基础环境的纳管账号体系。
    /// </summary>

    std::vector<OrganizationStructureBaseLine>& getOrganizationStructure();
    bool organizationStructureIsSet() const;
    void unsetorganizationStructure();
    void setOrganizationStructure(const std::vector<OrganizationStructureBaseLine>& value);

    /// <summary>
    /// 是否允许区域拒绝，默认false。
    /// </summary>

    bool isDenyUngovernedRegions() const;
    bool denyUngovernedRegionsIsSet() const;
    void unsetdenyUngovernedRegions();
    void setDenyUngovernedRegions(bool value);

    /// <summary>
    /// 是否允许设置组织汇聚。
    /// </summary>

    bool isCloudTrailType() const;
    bool cloudTrailTypeIsSet() const;
    void unsetcloudTrailType();
    void setCloudTrailType(bool value);

    /// <summary>
    /// 加密字段。
    /// </summary>

    std::string getKmsKeyId() const;
    bool kmsKeyIdIsSet() const;
    void unsetkmsKeyId();
    void setKmsKeyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LoggingConfiguration getLoggingConfiguration() const;
    bool loggingConfigurationIsSet() const;
    void unsetloggingConfiguration();
    void setLoggingConfiguration(const LoggingConfiguration& value);

    /// <summary>
    /// 基线版本
    /// </summary>

    std::string getBaselineVersion() const;
    bool baselineVersionIsSet() const;
    void unsetbaselineVersion();
    void setBaselineVersion(const std::string& value);


protected:
    std::string identityStoreEmail_;
    bool identityStoreEmailIsSet_;
    std::string homeRegion_;
    bool homeRegionIsSet_;
    std::string setupLandingZoneActionType_;
    bool setupLandingZoneActionTypeIsSet_;
    std::vector<RegionConfigurationList> regionConfigurationList_;
    bool regionConfigurationListIsSet_;
    std::string identityCenterStatus_;
    bool identityCenterStatusIsSet_;
    std::string organizationStructureType_;
    bool organizationStructureTypeIsSet_;
    std::vector<OrganizationStructureBaseLine> organizationStructure_;
    bool organizationStructureIsSet_;
    bool denyUngovernedRegions_;
    bool denyUngovernedRegionsIsSet_;
    bool cloudTrailType_;
    bool cloudTrailTypeIsSet_;
    std::string kmsKeyId_;
    bool kmsKeyIdIsSet_;
    LoggingConfiguration loggingConfiguration_;
    bool loggingConfigurationIsSet_;
    std::string baselineVersion_;
    bool baselineVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_SetupLandingZoneReqBody_H_
