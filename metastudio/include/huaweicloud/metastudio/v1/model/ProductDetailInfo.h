
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductDetailInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductDetailInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ProductCoverDetailInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ProductMediaDetailInfo.h>
#include <huaweicloud/metastudio/v1/model/ProductTextInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 商品详细信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ProductDetailInfo
    : public ModelBase
{
public:
    ProductDetailInfo();
    virtual ~ProductDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductDetailInfo members

    /// <summary>
    /// 商品ID
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 商品名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 商品描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 标签。单个标签16字节，多个用逗号分隔，最多50个。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ProductCoverDetailInfo getCover() const;
    bool coverIsSet() const;
    void unsetcover();
    void setCover(const ProductCoverDetailInfo& value);

    /// <summary>
    /// 文本列表
    /// </summary>

    std::vector<ProductTextInfo>& getTextList();
    bool textListIsSet() const;
    void unsettextList();
    void setTextList(const std::vector<ProductTextInfo>& value);

    /// <summary>
    /// 资产列表,仅支持图片、视频、音频资产
    /// </summary>

    std::vector<ProductMediaDetailInfo>& getAssetList();
    bool assetListIsSet() const;
    void unsetassetList();
    void setAssetList(const std::vector<ProductMediaDetailInfo>& value);

    /// <summary>
    /// 商品创建时间，格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 商品更新时间，格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 商品状态枚举 * ACTIVED：已激活 * UNACTIVED：未激活 * BLOCK: 被冻结，商品不可用 * DELETED：已删除
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);


protected:
    std::string productId_;
    bool productIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    ProductCoverDetailInfo cover_;
    bool coverIsSet_;
    std::vector<ProductTextInfo> textList_;
    bool textListIsSet_;
    std::vector<ProductMediaDetailInfo> assetList_;
    bool assetListIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string state_;
    bool stateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductDetailInfo_H_
