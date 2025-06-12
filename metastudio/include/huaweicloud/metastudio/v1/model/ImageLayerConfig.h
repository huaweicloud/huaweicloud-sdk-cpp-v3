
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ImageLayerConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ImageLayerConfig_H_


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
/// 素材图片图层配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ImageLayerConfig
    : public ModelBase
{
public:
    ImageLayerConfig();
    virtual ~ImageLayerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageLayerConfig members

    /// <summary>
    /// **参数解释**： 图片文件的URL。 **约束限制**： * 仅直播支持外部URL，其他业务通过资产库查询获取，不支持外部URL。 **取值范围**： 字符长度1-2048位。 **默认取值**： 不涉及
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);


protected:
    std::string imageUrl_;
    bool imageUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ImageLayerConfig_H_
