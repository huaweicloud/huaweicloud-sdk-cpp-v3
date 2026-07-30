
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNodePoolResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNodePoolResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodePoolSpec.h>
#include <huaweicloud/modelarts/v1/model/NodePoolMetadata.h>
#include <huaweicloud/modelarts/v1/model/NodePoolStatus.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowNodePoolResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowNodePoolResponse();
    virtual ~ShowNodePoolResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNodePoolResponse members

    /// <summary>
    /// **参数解释**： API版本。 **取值范围**： 可选值如下： - v2
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：节点池类型。 **取值范围**： 可选值如下： - NodePool：节点池
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NodePoolMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NodePoolSpec& value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const NodePoolStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    NodePoolMetadata metadata_;
    bool metadataIsSet_;
    NodePoolSpec spec_;
    bool specIsSet_;
    NodePoolStatus status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNodePoolResponse_H_
