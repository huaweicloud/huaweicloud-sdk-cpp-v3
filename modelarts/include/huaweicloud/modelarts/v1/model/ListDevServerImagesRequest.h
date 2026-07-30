
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerImagesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerImagesRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListDevServerImagesRequest
    : public ModelBase
{
public:
    ListDevServerImagesRequest();
    virtual ~ListDevServerImagesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDevServerImagesRequest members

    /// <summary>
    /// **参数解释**：server_type。 **约束限制**：不涉及。 **取值范围**：  - BMS  - ECS  - HPS **默认取值**：不涉及。
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);

    /// <summary>
    /// **参数解释**：规格名称。 **约束限制**：^.{1,128}$。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavorName() const;
    bool flavorNameIsSet() const;
    void unsetflavorName();
    void setFlavorName(const std::string& value);


protected:
    std::string serverType_;
    bool serverTypeIsSet_;
    std::string flavorName_;
    bool flavorNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDevServerImagesRequest& dereference_from_shared_ptr(std::shared_ptr<ListDevServerImagesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerImagesRequest_H_
