
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolNodesResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolNodesResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Node.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/NodeListMetadata.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListPoolNodesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPoolNodesResponse();
    virtual ~ListPoolNodesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPoolNodesResponse members

    /// <summary>
    /// **参数解释**：资源的API版本。 **取值范围**：可选值如下： - v2：当前资源版本为v2。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源的类型。 **取值范围**：可选值如下： - NodeList：节点列表。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeListMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NodeListMetadata& value);

    /// <summary>
    /// **参数解释**：节点资源列表。
    /// </summary>

    std::vector<Node>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<Node>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    NodeListMetadata metadata_;
    bool metadataIsSet_;
    std::vector<Node> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolNodesResponse_H_
