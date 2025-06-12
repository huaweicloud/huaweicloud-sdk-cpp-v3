
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BackgroundConfigInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BackgroundConfigInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/BackgroundImageConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 背景配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BackgroundConfigInfo
    : public ModelBase
{
public:
    BackgroundConfigInfo();
    virtual ~BackgroundConfigInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackgroundConfigInfo members

    /// <summary>
    /// **参数解释**： 背景类型。 **约束限制**： 不涉及。 **取值范围**： * IMAGE：图片背景，指定图片用作分身数字人背景。 * COLOR：纯色背景，指定颜色RGB值作为分身数字人背景。  **默认取值**： 不涉及
    /// </summary>

    std::string getBackgroundType() const;
    bool backgroundTypeIsSet() const;
    void unsetbackgroundType();
    void setBackgroundType(const std::string& value);

    /// <summary>
    /// **参数解释**： 背景文件的URL。 **约束限制**： * 仅直播支持外部URL，其他业务通过资产库查询获取，不支持外部URL。 * background_type&#x3D;IMAGE时需要填写。  **取值范围**： 字符长度1-2048位 **默认取值**： 不涉及。
    /// </summary>

    std::string getBackgroundConfig() const;
    bool backgroundConfigIsSet() const;
    void unsetbackgroundConfig();
    void setBackgroundConfig(const std::string& value);

    /// <summary>
    /// **参数解释**： 纯色背景的RGB颜色值。 **约束限制**： background_type&#x3D;COLOR时需要填写。 **取值范围**： 字符长度0-16位
    /// </summary>

    std::string getBackgroundColorConfig() const;
    bool backgroundColorConfigIsSet() const;
    void unsetbackgroundColorConfig();
    void setBackgroundColorConfig(const std::string& value);

    /// <summary>
    /// **参数解释**： 背景资产ID。 &gt; 背景是背景图片时，填图片资产ID。  **约束限制**： 不涉及 **取值范围**： 字符长度0-64位 **默认取值**： 不涉及
    /// </summary>

    std::string getBackgroundAssetId() const;
    bool backgroundAssetIdIsSet() const;
    void unsetbackgroundAssetId();
    void setBackgroundAssetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BackgroundImageConfig getBackgroundImageConfig() const;
    bool backgroundImageConfigIsSet() const;
    void unsetbackgroundImageConfig();
    void setBackgroundImageConfig(const BackgroundImageConfig& value);


protected:
    std::string backgroundType_;
    bool backgroundTypeIsSet_;
    std::string backgroundConfig_;
    bool backgroundConfigIsSet_;
    std::string backgroundColorConfig_;
    bool backgroundColorConfigIsSet_;
    std::string backgroundAssetId_;
    bool backgroundAssetIdIsSet_;
    BackgroundImageConfig backgroundImageConfig_;
    bool backgroundImageConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BackgroundConfigInfo_H_
