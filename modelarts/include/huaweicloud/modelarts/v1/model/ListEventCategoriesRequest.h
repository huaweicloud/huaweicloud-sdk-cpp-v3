
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEventCategoriesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEventCategoriesRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListEventCategoriesRequest
    : public ModelBase
{
public:
    ListEventCategoriesRequest();
    virtual ~ListEventCategoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEventCategoriesRequest members

    /// <summary>
    /// **参数解释**：规格类型 **约束限制**：不涉及。 **取值范围**：可选值如下： - CPU - GPU - Ascend  **默认取值**：不涉及。
    /// </summary>

    std::string getFlavorType() const;
    bool flavorTypeIsSet() const;
    void unsetflavorType();
    void setFlavorType(const std::string& value);


protected:
    std::string flavorType_;
    bool flavorTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListEventCategoriesRequest& dereference_from_shared_ptr(std::shared_ptr<ListEventCategoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEventCategoriesRequest_H_
