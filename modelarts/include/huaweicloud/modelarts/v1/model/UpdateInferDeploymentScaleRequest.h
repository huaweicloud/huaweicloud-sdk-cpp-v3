
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferDeploymentScaleRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferDeploymentScaleRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/UpdateInferDeploymentScale.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateInferDeploymentScaleRequest
    : public ModelBase
{
public:
    UpdateInferDeploymentScaleRequest();
    virtual ~UpdateInferDeploymentScaleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInferDeploymentScaleRequest members

    /// <summary>
    /// **参数解释：** 服务ID
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署名称，在创建部署时即可在返回体中获取，也可通过查询服务部署列表获取当前用户拥有的部署，其name字段即为部署名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDeploymentName() const;
    bool deploymentNameIsSet() const;
    void unsetdeploymentName();
    void setDeploymentName(const std::string& value);

    /// <summary>
    /// **参数解释：** 消息体的类型（格式） **约束限制：** 不涉及。 **取值范围：** - application/json - application/json;charset&#x3D;utf-8 **默认取值：** 不涉及。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateInferDeploymentScale getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateInferDeploymentScale& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string deploymentName_;
    bool deploymentNameIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    UpdateInferDeploymentScale body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateInferDeploymentScaleRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateInferDeploymentScaleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferDeploymentScaleRequest_H_
