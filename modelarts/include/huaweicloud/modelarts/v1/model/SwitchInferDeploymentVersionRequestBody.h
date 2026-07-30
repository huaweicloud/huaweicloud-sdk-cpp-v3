
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SwitchInferDeploymentVersionRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SwitchInferDeploymentVersionRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SwitchInferDeploymentVersionRequestBody
    : public ModelBase
{
public:
    SwitchInferDeploymentVersionRequestBody();
    virtual ~SwitchInferDeploymentVersionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchInferDeploymentVersionRequestBody members

    /// <summary>
    /// **参数解释：** 服务ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 待切换的目标版本。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTargetDeploymentVersion() const;
    bool targetDeploymentVersionIsSet() const;
    void unsettargetDeploymentVersion();
    void setTargetDeploymentVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署ID。
    /// </summary>

    std::string getInferName() const;
    bool inferNameIsSet() const;
    void unsetinferName();
    void setInferName(const std::string& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string targetDeploymentVersion_;
    bool targetDeploymentVersionIsSet_;
    std::string inferName_;
    bool inferNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SwitchInferDeploymentVersionRequestBody_H_
