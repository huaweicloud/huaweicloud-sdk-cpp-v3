
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SwitchInferDeploymentVersionResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SwitchInferDeploymentVersionResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SwitchInferDeploymentVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    SwitchInferDeploymentVersionResponse();
    virtual ~SwitchInferDeploymentVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchInferDeploymentVersionResponse members

    /// <summary>
    /// **参数解释：** 服务部署id **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SwitchInferDeploymentVersionResponse_H_
