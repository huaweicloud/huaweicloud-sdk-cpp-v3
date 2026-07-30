
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateNodePoolResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateNodePoolResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodePoolSpec.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/CreateNodePoolMetaVO.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateNodePoolResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateNodePoolResponse();
    virtual ~CreateNodePoolResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateNodePoolResponse members

    /// <summary>
    /// **参数解释**：API版本。 **取值范围**：可选值如下： - v2
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：节点池类型。 **取值范围**：可选值如下： -  NodePool：节点池
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateNodePoolMetaVO getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const CreateNodePoolMetaVO& value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NodePoolSpec& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    CreateNodePoolMetaVO metadata_;
    bool metadataIsSet_;
    NodePoolSpec spec_;
    bool specIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateNodePoolResponse_H_
