
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductAssetReleation_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductAssetReleation_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ProductMediaInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ProductTextInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新资产组合
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ProductAssetReleation
    : public ModelBase
{
public:
    ProductAssetReleation();
    virtual ~ProductAssetReleation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductAssetReleation members

    /// <summary>
    /// 
    /// </summary>

    ProductMediaInfo getAssetItem() const;
    bool assetItemIsSet() const;
    void unsetassetItem();
    void setAssetItem(const ProductMediaInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ProductTextInfo getTextItem() const;
    bool textItemIsSet() const;
    void unsettextItem();
    void setTextItem(const ProductTextInfo& value);

    /// <summary>
    /// 添加或删除资产关联 - LINK ：将资产纳入管理 - UNLINK ：将资产移除管理
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    ProductMediaInfo assetItem_;
    bool assetItemIsSet_;
    ProductTextInfo textItem_;
    bool textItemIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductAssetReleation_H_
