
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavor_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavor_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ResourceFlavorStatus.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ResourceFlavorSpec.h>
#include <huaweicloud/modelarts/v1/model/ResourceFlavorMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源规格的数据模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceFlavor
    : public ModelBase
{
public:
    ResourceFlavor();
    virtual ~ResourceFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceFlavor members

    /// <summary>
    /// **参数解释**：资源的API版本。 **取值范围**：可选值如下： - v1：当前资源版本为v1
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源的类型。 **取值范围**：可选值如下： - ResourceFlavor：资源规格
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceFlavorMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const ResourceFlavorMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceFlavorSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const ResourceFlavorSpec& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceFlavorStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const ResourceFlavorStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    ResourceFlavorMetadata metadata_;
    bool metadataIsSet_;
    ResourceFlavorSpec spec_;
    bool specIsSet_;
    ResourceFlavorStatus status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavor_H_
