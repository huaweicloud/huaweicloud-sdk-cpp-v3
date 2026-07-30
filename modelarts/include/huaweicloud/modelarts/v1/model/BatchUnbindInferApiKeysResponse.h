
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUnbindInferApiKeysResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUnbindInferApiKeysResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ApiKeyFailureResponse.h>
#include <huaweicloud/modelarts/v1/model/ApiKeyResponseV2.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchUnbindInferApiKeysResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchUnbindInferApiKeysResponse();
    virtual ~BatchUnbindInferApiKeysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUnbindInferApiKeysResponse members

    /// <summary>
    /// **参数解释：** 请求解绑apikey总个数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释：** 解绑apikey成功个数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getSuccessCount() const;
    bool successCountIsSet() const;
    void unsetsuccessCount();
    void setSuccessCount(int32_t value);

    /// <summary>
    /// **参数解释：** 解绑成功的apikey列表。
    /// </summary>

    std::vector<ApiKeyResponseV2>& getSuccessItems();
    bool successItemsIsSet() const;
    void unsetsuccessItems();
    void setSuccessItems(const std::vector<ApiKeyResponseV2>& value);

    /// <summary>
    /// **参数解释：** 解绑apikey失败个数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getFailureCount() const;
    bool failureCountIsSet() const;
    void unsetfailureCount();
    void setFailureCount(int32_t value);

    /// <summary>
    /// **参数解释：** 解绑失败的apikey列表。
    /// </summary>

    std::vector<ApiKeyFailureResponse>& getFailureItems();
    bool failureItemsIsSet() const;
    void unsetfailureItems();
    void setFailureItems(const std::vector<ApiKeyFailureResponse>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t successCount_;
    bool successCountIsSet_;
    std::vector<ApiKeyResponseV2> successItems_;
    bool successItemsIsSet_;
    int32_t failureCount_;
    bool failureCountIsSet_;
    std::vector<ApiKeyFailureResponse> failureItems_;
    bool failureItemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUnbindInferApiKeysResponse_H_
