
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListControlsForOrganizationalUnitResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListControlsForOrganizationalUnitResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/TargetControl.h>
#include <huaweicloud/rgc/v1/model/PageInfoDto.h>
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
class HUAWEICLOUD_RGC_V1_EXPORT  ListControlsForOrganizationalUnitResponse
    : public ModelBase, public HttpResponse
{
public:
    ListControlsForOrganizationalUnitResponse();
    virtual ~ListControlsForOrganizationalUnitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListControlsForOrganizationalUnitResponse members

    /// <summary>
    /// 治理策略概要。
    /// </summary>

    std::vector<TargetControl>& getControlSummaries();
    bool controlSummariesIsSet() const;
    void unsetcontrolSummaries();
    void setControlSummaries(const std::vector<TargetControl>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<TargetControl> controlSummaries_;
    bool controlSummariesIsSet_;
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListControlsForOrganizationalUnitResponse_H_
