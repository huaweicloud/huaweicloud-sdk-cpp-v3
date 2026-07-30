
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferDeploymentInstanceRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferDeploymentInstanceRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteInferDeploymentInstanceRequest
    : public ModelBase
{
public:
    DeleteInferDeploymentInstanceRequest();
    virtual ~DeleteInferDeploymentInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteInferDeploymentInstanceRequest members

    /// <summary>
    /// **参数解释：** 服务ID，在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **约束限制：** 不涉及。 **取值范围：** 服务ID。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署名称。
    /// </summary>

    std::string getDeploymentName() const;
    bool deploymentNameIsSet() const;
    void unsetdeploymentName();
    void setDeploymentName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务实例名字，可以为all，为all时去查询所有的服务实例。 **约束限制：** 不涉及。 **取值范围：** 服务实例名字。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否强制删除。 **约束限制：** 不涉及。 **取值范围：** - true：强制删除。 - false：不强制删除。 **默认取值：** false。
    /// </summary>

    bool isForce() const;
    bool forceIsSet() const;
    void unsetforce();
    void setForce(bool value);

    /// <summary>
    /// **参数解释：** 删除操作类型。 **约束限制：** 枚举值。 **取值范围：** - DELETE：直接删除，释放资源。 - RECREATE：删除后重建。 **默认取值：** RECREATE。
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string deploymentName_;
    bool deploymentNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool force_;
    bool forceIsSet_;
    std::string operation_;
    bool operationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteInferDeploymentInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteInferDeploymentInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferDeploymentInstanceRequest_H_
