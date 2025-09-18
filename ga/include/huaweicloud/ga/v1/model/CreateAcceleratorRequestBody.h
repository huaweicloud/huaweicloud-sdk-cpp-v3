
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/CreateAcceleratorOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// create Accelerator request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateAcceleratorRequestBody
    : public ModelBase
{
public:
    CreateAcceleratorRequestBody();
    virtual ~CreateAcceleratorRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAcceleratorRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateAcceleratorOption getAccelerator() const;
    bool acceleratorIsSet() const;
    void unsetaccelerator();
    void setAccelerator(const CreateAcceleratorOption& value);


protected:
    CreateAcceleratorOption accelerator_;
    bool acceleratorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorRequestBody_H_
