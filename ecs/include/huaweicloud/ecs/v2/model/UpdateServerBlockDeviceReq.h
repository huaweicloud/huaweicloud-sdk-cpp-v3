
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerBlockDeviceReq_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerBlockDeviceReq_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/UpdateServerBlockDeviceOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerBlockDeviceReq
    : public ModelBase
{
public:
    UpdateServerBlockDeviceReq();
    virtual ~UpdateServerBlockDeviceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerBlockDeviceReq members

    /// <summary>
    /// 
    /// </summary>

    UpdateServerBlockDeviceOption getBlockDevice() const;
    bool blockDeviceIsSet() const;
    void unsetblockDevice();
    void setBlockDevice(const UpdateServerBlockDeviceOption& value);


protected:
    UpdateServerBlockDeviceOption blockDevice_;
    bool blockDeviceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerBlockDeviceReq_H_
