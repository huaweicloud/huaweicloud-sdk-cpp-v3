
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOrderRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOrderRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowOrderRequest
    : public ModelBase
{
public:
    ShowOrderRequest();
    virtual ~ShowOrderRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOrderRequest members

    /// <summary>
    /// **参数解释**：订单ID。取值自订单列表返回的orderName字段。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOrderName() const;
    bool orderNameIsSet() const;
    void unsetorderName();
    void setOrderName(const std::string& value);


protected:
    std::string orderName_;
    bool orderNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowOrderRequest& dereference_from_shared_ptr(std::shared_ptr<ShowOrderRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOrderRequest_H_
