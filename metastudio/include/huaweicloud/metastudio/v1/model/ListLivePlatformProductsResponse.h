
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListLivePlatformProductsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListLivePlatformProductsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/PlatformProductInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListLivePlatformProductsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLivePlatformProductsResponse();
    virtual ~ListLivePlatformProductsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLivePlatformProductsResponse members

    /// <summary>
    /// 商品总数。性能考虑仅在offset&#x3D;0时返回。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::vector<PlatformProductInfo>& getProducts();
    bool productsIsSet() const;
    void unsetproducts();
    void setProducts(const std::vector<PlatformProductInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<PlatformProductInfo> products_;
    bool productsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListLivePlatformProductsResponse_H_
