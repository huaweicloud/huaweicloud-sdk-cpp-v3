
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferDeploymentPodRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferDeploymentPodRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteInferDeploymentPodRequest
    : public ModelBase
{
public:
    DeleteInferDeploymentPodRequest();
    virtual ~DeleteInferDeploymentPodRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteInferDeploymentPodRequest members

    /// <summary>
    /// **参数解释：** 服务ID，在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **约束限制：** 不涉及。 **取值范围：** 服务ID。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署名称，在创建部署时即可在返回体中获取，也可通过查询服务部署列表获取当前用户拥有的部署，其name字段即为部署名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDeploymentName() const;
    bool deploymentNameIsSet() const;
    void unsetdeploymentName();
    void setDeploymentName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务实例名字，可以为all，为all时去查询所有的服务实例。 **约束限制：** 不涉及。 **取值范围：** 服务实例名字。 **默认取值：** 不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务实例pod名字，可以为all，为all时去查询所有的服务实例。 **约束限制：** 不涉及。 **取值范围：** 服务实例名字。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否强制删除。 **约束限制：** 不涉及。 **取值范围：** - true：是，强制删除 - false：否，不强制删除 **默认取值：** false。
    /// </summary>

    bool isForce() const;
    bool forceIsSet() const;
    void unsetforce();
    void setForce(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string deploymentName_;
    bool deploymentNameIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool force_;
    bool forceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteInferDeploymentPodRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteInferDeploymentPodRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferDeploymentPodRequest_H_
