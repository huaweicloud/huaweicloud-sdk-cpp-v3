
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StyleAssetItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StyleAssetItem_H_


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
/// 风格化素材数字资产信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  StyleAssetItem
    : public ModelBase
{
public:
    StyleAssetItem();
    virtual ~StyleAssetItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StyleAssetItem members

    /// <summary>
    /// 资产ID
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 资产类型 * ANIMATION：动作 * MATERIAL：素材
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);

    /// <summary>
    /// 封面图URL
    /// </summary>

    std::string getCoverUrl() const;
    bool coverUrlIsSet() const;
    void unsetcoverUrl();
    void setCoverUrl(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    std::string coverUrl_;
    bool coverUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StyleAssetItem_H_
