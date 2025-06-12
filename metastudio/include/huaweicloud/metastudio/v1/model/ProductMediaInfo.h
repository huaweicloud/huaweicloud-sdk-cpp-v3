
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductMediaInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductMediaInfo_H_


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
/// 商品素材信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ProductMediaInfo
    : public ModelBase
{
public:
    ProductMediaInfo();
    virtual ~ProductMediaInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductMediaInfo members

    /// <summary>
    /// 资产ID
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 资产类型 * IMAGE：图片 * VIDEO：视频 * AUDIO：音频
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);

    /// <summary>
    /// **参数解释**： 资产次序。不设置或者0表示按照加入时间先后排序。业务上将次序最靠前的图片设置为商品封面。
    /// </summary>

    int32_t getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(int32_t value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    int32_t order_;
    bool orderIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductMediaInfo_H_
