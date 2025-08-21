
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlsForOrganizationalUnitResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlsForOrganizationalUnitResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/EnabledControl.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowControlsForOrganizationalUnitResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowControlsForOrganizationalUnitResponse();
    virtual ~ShowControlsForOrganizationalUnitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowControlsForOrganizationalUnitResponse members

    /// <summary>
    /// 
    /// </summary>

    EnabledControl getControl() const;
    bool controlIsSet() const;
    void unsetcontrol();
    void setControl(const EnabledControl& value);

    /// <summary>
    /// 区域信息。
    /// </summary>

    std::vector<RegionConfigurationList>& getRegions();
    bool regionsIsSet() const;
    void unsetregions();
    void setRegions(const std::vector<RegionConfigurationList>& value);

    /// <summary>
    /// 状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 状态说明。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 控制策略当前版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    EnabledControl control_;
    bool controlIsSet_;
    std::vector<RegionConfigurationList> regions_;
    bool regionsIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlsForOrganizationalUnitResponse_H_
