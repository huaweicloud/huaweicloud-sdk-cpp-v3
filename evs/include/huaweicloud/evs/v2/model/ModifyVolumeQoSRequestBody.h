
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ModifyVolumeQoSRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ModifyVolumeQoSRequestBody_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/ModifyVolumeQoSOption.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  ModifyVolumeQoSRequestBody
    : public ModelBase
{
public:
    ModifyVolumeQoSRequestBody();
    virtual ~ModifyVolumeQoSRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyVolumeQoSRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ModifyVolumeQoSOption getQosModify() const;
    bool qosModifyIsSet() const;
    void unsetqosModify();
    void setQosModify(const ModifyVolumeQoSOption& value);


protected:
    ModifyVolumeQoSOption qosModify_;
    bool qosModifyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ModifyVolumeQoSRequestBody_H_
