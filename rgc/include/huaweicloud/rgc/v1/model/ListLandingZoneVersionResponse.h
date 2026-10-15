
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListLandingZoneVersionResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListLandingZoneVersionResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rgc/v1/model/LandingZoneVersionDetail.h>

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
class HUAWEICLOUD_RGC_V1_EXPORT  ListLandingZoneVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLandingZoneVersionResponse();
    virtual ~ListLandingZoneVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLandingZoneVersionResponse members

    /// <summary>
    /// Landing Zone版本列表。
    /// </summary>

    std::vector<LandingZoneVersionDetail>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<LandingZoneVersionDetail>& value);


protected:
    std::vector<LandingZoneVersionDetail> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListLandingZoneVersionResponse_H_
