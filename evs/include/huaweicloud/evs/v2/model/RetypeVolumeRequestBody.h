
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_RetypeVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_RetypeVolumeRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/RetypeVolume.h>
#include <huaweicloud/evs/v2/model/BssParamForRetypeVolume.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  RetypeVolumeRequestBody
    : public ModelBase
{
public:
    RetypeVolumeRequestBody();
    virtual ~RetypeVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RetypeVolumeRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BssParamForRetypeVolume getBssParam() const;
    bool bssParamIsSet() const;
    void unsetbssParam();
    void setBssParam(const BssParamForRetypeVolume& value);

    /// <summary>
    /// 
    /// </summary>

    RetypeVolume getOsRetype() const;
    bool osRetypeIsSet() const;
    void unsetosRetype();
    void setOsRetype(const RetypeVolume& value);


protected:
    BssParamForRetypeVolume bssParam_;
    bool bssParamIsSet_;
    RetypeVolume osRetype_;
    bool osRetypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_RetypeVolumeRequestBody_H_
