
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowAvailableUpdatesResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowAvailableUpdatesResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowAvailableUpdatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAvailableUpdatesResponse();
    virtual ~ShowAvailableUpdatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAvailableUpdatesResponse members

    /// <summary>
    /// 用户当前的Landing Zone版本是否为最新版本。
    /// </summary>

    bool isBaselineUpdateAvailable() const;
    bool baselineUpdateAvailableIsSet() const;
    void unsetbaselineUpdateAvailable();
    void setBaselineUpdateAvailable(bool value);

    /// <summary>
    /// 当前账号下是否有新的控制策略。
    /// </summary>

    bool isControlUpdateAvailable() const;
    bool controlUpdateAvailableIsSet() const;
    void unsetcontrolUpdateAvailable();
    void setControlUpdateAvailable(bool value);

    /// <summary>
    /// Landing Zone是否可更新。
    /// </summary>

    bool isLandingZoneUpdateAvailable() const;
    bool landingZoneUpdateAvailableIsSet() const;
    void unsetlandingZoneUpdateAvailable();
    void setLandingZoneUpdateAvailable(bool value);

    /// <summary>
    /// Landing Zone当前最新的版本号。
    /// </summary>

    std::string getServiceLandingZoneVersion() const;
    bool serviceLandingZoneVersionIsSet() const;
    void unsetserviceLandingZoneVersion();
    void setServiceLandingZoneVersion(const std::string& value);

    /// <summary>
    /// 用户当前的Landing Zone版本。
    /// </summary>

    std::string getUserLandingZoneVersion() const;
    bool userLandingZoneVersionIsSet() const;
    void unsetuserLandingZoneVersion();
    void setUserLandingZoneVersion(const std::string& value);


protected:
    bool baselineUpdateAvailable_;
    bool baselineUpdateAvailableIsSet_;
    bool controlUpdateAvailable_;
    bool controlUpdateAvailableIsSet_;
    bool landingZoneUpdateAvailable_;
    bool landingZoneUpdateAvailableIsSet_;
    std::string serviceLandingZoneVersion_;
    bool serviceLandingZoneVersionIsSet_;
    std::string userLandingZoneVersion_;
    bool userLandingZoneVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowAvailableUpdatesResponse_H_
