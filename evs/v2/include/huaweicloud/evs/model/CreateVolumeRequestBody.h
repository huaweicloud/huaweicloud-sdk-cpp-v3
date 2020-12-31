
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequestBody_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/evs/model/CreateVolumeOption.h"
#include <string>
#include "huaweicloud/evs/model/BssParamForCreateVolume.h"

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
class HUAWEICLOUD_EVS_EXPORT  CreateVolumeRequestBody
    : public ModelBase
{
public:
    CreateVolumeRequestBody();
    virtual ~CreateVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVolumeRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BssParamForCreateVolume getBssParam() const;
    bool bssParamIsSet() const;
    void unsetbssParam();
    void setBssParam(const BssParamForCreateVolume& value);

    /// <summary>
    /// 
    /// </summary>

    CreateVolumeOption getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const CreateVolumeOption& value);

    /// <summary>
    /// 创建云硬盘并挂载到目标虚拟机。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


protected:
    BssParamForCreateVolume bssParam_;
    bool bssParamIsSet_;
    CreateVolumeOption volume_;
    bool volumeIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequestBody_H_
