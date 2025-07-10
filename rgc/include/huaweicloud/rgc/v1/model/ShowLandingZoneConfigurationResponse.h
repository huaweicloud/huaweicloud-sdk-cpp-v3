
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowLandingZoneConfigurationResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowLandingZoneConfigurationResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/CommonConfiguration.h>
#include <huaweicloud/rgc/v1/model/LoggingConfiguration.h>
#include <huaweicloud/rgc/v1/model/RegionConfigurationList.h>
#include <vector>
#include <huaweicloud/rgc/v1/model/OrganizationStructureBaseLineRsp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowLandingZoneConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLandingZoneConfigurationResponse();
    virtual ~ShowLandingZoneConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLandingZoneConfigurationResponse members

    /// <summary>
    /// 
    /// </summary>

    CommonConfiguration getCommonConfiguration() const;
    bool commonConfigurationIsSet() const;
    void unsetcommonConfiguration();
    void setCommonConfiguration(const CommonConfiguration& value);

    /// <summary>
    /// 
    /// </summary>

    LoggingConfiguration getLoggingConfiguration() const;
    bool loggingConfigurationIsSet() const;
    void unsetloggingConfiguration();
    void setLoggingConfiguration(const LoggingConfiguration& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<OrganizationStructureBaseLineRsp>& getOrganizationStructure();
    bool organizationStructureIsSet() const;
    void unsetorganizationStructure();
    void setOrganizationStructure(const std::vector<OrganizationStructureBaseLineRsp>& value);

    /// <summary>
    /// 纳管的区域信息。
    /// </summary>

    std::vector<RegionConfigurationList>& getRegions();
    bool regionsIsSet() const;
    void unsetregions();
    void setRegions(const std::vector<RegionConfigurationList>& value);


protected:
    CommonConfiguration commonConfiguration_;
    bool commonConfigurationIsSet_;
    LoggingConfiguration loggingConfiguration_;
    bool loggingConfigurationIsSet_;
    std::vector<OrganizationStructureBaseLineRsp> organizationStructure_;
    bool organizationStructureIsSet_;
    std::vector<RegionConfigurationList> regions_;
    bool regionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowLandingZoneConfigurationResponse_H_
