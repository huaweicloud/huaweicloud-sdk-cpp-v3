
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequestBody_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/OsExtend.h>
#include <huaweicloud/evs/v2/model/BssParamForResizeVolume.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  ResizeVolumeRequestBody
    : public ModelBase
{
public:
    ResizeVolumeRequestBody();
    virtual ~ResizeVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResizeVolumeRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BssParamForResizeVolume getBssParam() const;
    bool bssParamIsSet() const;
    void unsetbssParam();
    void setBssParam(const BssParamForResizeVolume& value);

    /// <summary>
    /// 
    /// </summary>

    OsExtend getOsExtend() const;
    bool osExtendIsSet() const;
    void unsetosExtend();
    void setOsExtend(const OsExtend& value);


protected:
    BssParamForResizeVolume bssParam_;
    bool bssParamIsSet_;
    OsExtend osExtend_;
    bool osExtendIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequestBody_H_
