
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_CommonConfiguration_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_CommonConfiguration_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Landing Zone配置信息。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  CommonConfiguration
    : public ModelBase
{
public:
    CommonConfiguration();
    virtual ~CommonConfiguration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommonConfiguration members

    /// <summary>
    /// 主区域名。
    /// </summary>

    std::string getHomeRegion() const;
    bool homeRegionIsSet() const;
    void unsethomeRegion();
    void setHomeRegion(const std::string& value);

    /// <summary>
    /// CTS配置状态。
    /// </summary>

    bool isCloudTrailType() const;
    bool cloudTrailTypeIsSet() const;
    void unsetcloudTrailType();
    void setCloudTrailType(bool value);

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


protected:
    std::string homeRegion_;
    bool homeRegionIsSet_;
    bool cloudTrailType_;
    bool cloudTrailTypeIsSet_;
    std::string identityCenterStatus_;
    bool identityCenterStatusIsSet_;
    std::string organizationStructureType_;
    bool organizationStructureTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_CommonConfiguration_H_
