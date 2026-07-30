
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolPluginsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolPluginsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Plugin.h>
#include <string>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListPoolPluginsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPoolPluginsResponse();
    virtual ~ListPoolPluginsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPoolPluginsResponse members

    /// <summary>
    /// **参数解释**： API版本。 **取值范围**： 可选值如下： - v2
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源类型。 **取值范围**： 可选值如下： - PluginList：插件列表。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源池插件列表。
    /// </summary>

    std::vector<Plugin>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<Plugin>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    std::vector<Plugin> items_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolPluginsResponse_H_
