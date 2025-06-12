
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductMediaDetailInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductMediaDetailInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ProductMediaInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ProductMediaDetailInfo
    : public ModelBase
{
public:
    ProductMediaDetailInfo();
    virtual ~ProductMediaDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductMediaDetailInfo members

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

    /// <summary>
    /// 资产名称。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// 资产状态。
    /// </summary>

    std::string getAssetState() const;
    bool assetStateIsSet() const;
    void unsetassetState();
    void setAssetState(const std::string& value);

    /// <summary>
    /// 封面图片路径。
    /// </summary>

    std::string getCoverUrl() const;
    bool coverUrlIsSet() const;
    void unsetcoverUrl();
    void setCoverUrl(const std::string& value);

    /// <summary>
    /// 缩略图路径。
    /// </summary>

    std::string getThumbnailUrl() const;
    bool thumbnailUrlIsSet() const;
    void unsetthumbnailUrl();
    void setThumbnailUrl(const std::string& value);

    /// <summary>
    /// 缩略图路径。
    /// </summary>

    std::string getMainUrl() const;
    bool mainUrlIsSet() const;
    void unsetmainUrl();
    void setMainUrl(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    int32_t order_;
    bool orderIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::string assetState_;
    bool assetStateIsSet_;
    std::string coverUrl_;
    bool coverUrlIsSet_;
    std::string thumbnailUrl_;
    bool thumbnailUrlIsSet_;
    std::string mainUrl_;
    bool mainUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductMediaDetailInfo_H_
