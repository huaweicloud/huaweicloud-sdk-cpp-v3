
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductCoverDetailInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductCoverDetailInfo_H_


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
/// 商品封面信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ProductCoverDetailInfo
    : public ModelBase
{
public:
    ProductCoverDetailInfo();
    virtual ~ProductCoverDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductCoverDetailInfo members

    /// <summary>
    /// 资产ID
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

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


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string coverUrl_;
    bool coverUrlIsSet_;
    std::string thumbnailUrl_;
    bool thumbnailUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductCoverDetailInfo_H_
