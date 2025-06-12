
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RelationProductInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RelationProductInfo_H_


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
/// 关联商品
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RelationProductInfo
    : public ModelBase
{
public:
    RelationProductInfo();
    virtual ~RelationProductInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RelationProductInfo members

    /// <summary>
    /// 关联商品ID。如果配置，则段落切换回调中会携带该信息。美团平台对应goodsId
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 关联商品标题/名称。如果配置，则段落切换回调中会携带该信息。美团平台对应goodsTitle
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RelationProductInfo_H_
