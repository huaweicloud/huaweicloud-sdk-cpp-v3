
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformProductInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformProductInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 第三方直播平台商品详情
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PlatformProductInfo
    : public ModelBase
{
public:
    PlatformProductInfo();
    virtual ~PlatformProductInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlatformProductInfo members

    /// <summary>
    /// 商品id
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 商品标题
    /// </summary>

    std::string getProductTitle() const;
    bool productTitleIsSet() const;
    void unsetproductTitle();
    void setProductTitle(const std::string& value);


protected:
    std::string productId_;
    bool productIdIsSet_;
    std::string productTitle_;
    bool productTitleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformProductInfo_H_
