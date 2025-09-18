
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateAcceleratorRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateAcceleratorRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/UpdateAcceleratorOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// update Accelerator request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateAcceleratorRequestBody
    : public ModelBase
{
public:
    UpdateAcceleratorRequestBody();
    virtual ~UpdateAcceleratorRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAcceleratorRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateAcceleratorOption getAccelerator() const;
    bool acceleratorIsSet() const;
    void unsetaccelerator();
    void setAccelerator(const UpdateAcceleratorOption& value);


protected:
    UpdateAcceleratorOption accelerator_;
    bool acceleratorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateAcceleratorRequestBody_H_
