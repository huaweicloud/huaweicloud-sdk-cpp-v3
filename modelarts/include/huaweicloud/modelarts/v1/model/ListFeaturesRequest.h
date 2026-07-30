
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFeaturesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFeaturesRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListFeaturesRequest
    : public ModelBase
{
public:
    ListFeaturesRequest();
    virtual ~ListFeaturesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFeaturesRequest members

    /// <summary>
    /// **参数解释**：特性名称。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - NOTEBOOK：用户显式创建的Notebook实例。  **默认取值**：NOTEBOOK。
    /// </summary>

    std::string getFeature() const;
    bool featureIsSet() const;
    void unsetfeature();
    void setFeature(const std::string& value);


protected:
    std::string feature_;
    bool featureIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFeaturesRequest& dereference_from_shared_ptr(std::shared_ptr<ListFeaturesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFeaturesRequest_H_
