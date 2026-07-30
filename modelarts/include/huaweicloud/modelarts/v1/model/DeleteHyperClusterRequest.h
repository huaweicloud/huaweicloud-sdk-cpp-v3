
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteHyperClusterRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteHyperClusterRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteHyperClusterRequest
    : public ModelBase
{
public:
    DeleteHyperClusterRequest();
    virtual ~DeleteHyperClusterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteHyperClusterRequest members

    /// <summary>
    /// **参数解释**：Hyper Cluster ID。 **约束限制**：必填。 **取值范围**：1 - 64字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：Hyper Cluster的类型。 **约束限制**：可选。 **取值范围**： - HPS：默认值，查询HPS机型的Hyper Cluster。 - ECS：查询ECS机型的Hyper Cluster。  **默认取值**：HPS。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteHyperClusterRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteHyperClusterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteHyperClusterRequest_H_
