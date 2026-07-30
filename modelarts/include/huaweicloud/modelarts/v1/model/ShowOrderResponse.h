
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOrderResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOrderResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/OrderDetailItem.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowOrderResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowOrderResponse();
    virtual ~ShowOrderResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOrderResponse members

    /// <summary>
    /// **参数解释**：订单关联的资源数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：订单关联的资源信息列表。
    /// </summary>

    std::vector<OrderDetailItem>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<OrderDetailItem>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<OrderDetailItem> items_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowOrderResponse_H_
