
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesResponse_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/evs/v2/model/VolumeType.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CinderListVolumeTypesResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderListVolumeTypesResponse();
    virtual ~CinderListVolumeTypesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderListVolumeTypesResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<VolumeType>& getVolumeTypes();
    bool volumeTypesIsSet() const;
    void unsetvolumeTypes();
    void setVolumeTypes(const std::vector<VolumeType>& value);


protected:
    std::vector<VolumeType> volumeTypes_;
    bool volumeTypesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesResponse_H_
