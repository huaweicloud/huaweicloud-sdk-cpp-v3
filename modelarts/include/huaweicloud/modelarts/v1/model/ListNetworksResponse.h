
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListNetworksResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListNetworksResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Network.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/NetworkListMetadata.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListNetworksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListNetworksResponse();
    virtual ~ListNetworksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNetworksResponse members

    /// <summary>
    /// **参数解释**：资源的API版本。 **取值范围**：可选值如下： - v1：当前资源版本为v1。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源的类型。 **取值范围**：可选值如下： - NetworkList：网络列表。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkListMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NetworkListMetadata& value);

    /// <summary>
    /// **参数解释**：网络资源列表。
    /// </summary>

    std::vector<Network>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<Network>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    NetworkListMetadata metadata_;
    bool metadataIsSet_;
    std::vector<Network> items_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListNetworksResponse_H_
