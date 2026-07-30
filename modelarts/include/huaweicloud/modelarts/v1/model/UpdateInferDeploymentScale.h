
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferDeploymentScale_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferDeploymentScale_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateInferDeploymentScale
    : public ModelBase
{
public:
    UpdateInferDeploymentScale();
    virtual ~UpdateInferDeploymentScale();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInferDeploymentScale members

    /// <summary>
    /// **参数解释：** 服务实例数。 **取值范围：** [1, 128]。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    int32_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferDeploymentScale_H_
