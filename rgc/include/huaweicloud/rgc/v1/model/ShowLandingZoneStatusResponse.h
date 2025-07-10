
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowLandingZoneStatusResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowLandingZoneStatusResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/PercentageDetail.h>
#include <huaweicloud/rgc/v1/model/RegionConfigurationList.h>
#include <string>
#include <huaweicloud/rgc/v1/model/LandingZoneErrorMessage.h>
#include <vector>

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
class HUAWEICLOUD_RGC_V1_EXPORT  ShowLandingZoneStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLandingZoneStatusResponse();
    virtual ~ShowLandingZoneStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLandingZoneStatusResponse members

    /// <summary>
    /// 部署的Landing Zone版本。
    /// </summary>

    std::string getDeployedVersion() const;
    bool deployedVersionIsSet() const;
    void unsetdeployedVersion();
    void setDeployedVersion(const std::string& value);

    /// <summary>
    /// Landing Zone的设置状态，包括进行中，已完成。
    /// </summary>

    std::string getLandingZoneStatus() const;
    bool landingZoneStatusIsSet() const;
    void unsetlandingZoneStatus();
    void setLandingZoneStatus(const std::string& value);

    /// <summary>
    /// Landing Zone的完成进度。
    /// </summary>

    int32_t getPercentageComplete() const;
    bool percentageCompleteIsSet() const;
    void unsetpercentageComplete();
    void setPercentageComplete(int32_t value);

    /// <summary>
    /// Landing Zone设置的详细进度信息。
    /// </summary>

    std::vector<PercentageDetail>& getPercentageDetails();
    bool percentageDetailsIsSet() const;
    void unsetpercentageDetails();
    void setPercentageDetails(const std::vector<PercentageDetail>& value);

    /// <summary>
    /// Landing Zone当前需要执行的动作。
    /// </summary>

    std::string getLandingZoneActionType() const;
    bool landingZoneActionTypeIsSet() const;
    void unsetlandingZoneActionType();
    void setLandingZoneActionType(const std::string& value);

    /// <summary>
    /// Landing Zone错误消息。
    /// </summary>

    std::vector<LandingZoneErrorMessage>& getMessage();
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::vector<LandingZoneErrorMessage>& value);

    /// <summary>
    /// 纳管的区域信息。
    /// </summary>

    std::vector<RegionConfigurationList>& getRegions();
    bool regionsIsSet() const;
    void unsetregions();
    void setRegions(const std::vector<RegionConfigurationList>& value);


protected:
    std::string deployedVersion_;
    bool deployedVersionIsSet_;
    std::string landingZoneStatus_;
    bool landingZoneStatusIsSet_;
    int32_t percentageComplete_;
    bool percentageCompleteIsSet_;
    std::vector<PercentageDetail> percentageDetails_;
    bool percentageDetailsIsSet_;
    std::string landingZoneActionType_;
    bool landingZoneActionTypeIsSet_;
    std::vector<LandingZoneErrorMessage> message_;
    bool messageIsSet_;
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

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowLandingZoneStatusResponse_H_
