
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateOrderRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateOrderRequestBody_H_


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
/// 创建订单的数据模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateOrderRequestBody
    : public ModelBase
{
public:
    CreateOrderRequestBody();
    virtual ~CreateOrderRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOrderRequestBody members

    /// <summary>
    /// **参数解释**：订单类型。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(const std::string& value);


protected:
    std::string actionType_;
    bool actionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateOrderRequestBody_H_
