
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Plugin_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Plugin_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PluginMetadata.h>
#include <huaweicloud/modelarts/v1/model/PluginStatus.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/PluginSpec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件实例的详细信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Plugin
    : public ModelBase
{
public:
    Plugin();
    virtual ~Plugin();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Plugin members

    /// <summary>
    /// **参数解释**： API版本。 **取值范围**： 可选值如下： - v2
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件实例的类型。 **取值范围**： 可选值如下： - Plugin：插件。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PluginMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PluginMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    PluginSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const PluginSpec& value);

    /// <summary>
    /// 
    /// </summary>

    PluginStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const PluginStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    PluginMetadata metadata_;
    bool metadataIsSet_;
    PluginSpec spec_;
    bool specIsSet_;
    PluginStatus status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Plugin_H_
