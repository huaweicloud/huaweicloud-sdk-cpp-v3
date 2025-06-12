
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HumanModelAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HumanModelAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ComponentInfo.h>
#include <huaweicloud/metastudio/v1/model/HumanModelMetaProperties.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数字人模型元数据。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  HumanModelAssetMeta
    : public ModelBase
{
public:
    HumanModelAssetMeta();
    virtual ~HumanModelAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HumanModelAssetMeta members

    /// <summary>
    /// **参数解释**： 数字人模型风格ID。 **约束限制**： 当前仅支持系统提供的几种风格。 **取值范围**： * system_male_001：男性风格01 * system_female_001：女性风格01 * system_male_002：男性风格02  * system_female_002：女性风格02  **默认取值**： 不涉及
    /// </summary>

    std::string getStyleId() const;
    bool styleIdIsSet() const;
    void unsetstyleId();
    void setStyleId(const std::string& value);

    /// <summary>
    /// **参数解释**： 数字人模型建模类型。 **约束限制**： 不涉及 **取值范围**： * UPLOADED：租户上传的模型 * PICTURE_MODELING：照片建模生成的模型 * CHARACTER_CUSTOMIZATION_MODELING：捏脸生成的模型
    /// </summary>

    std::string getModelingType() const;
    bool modelingTypeIsSet() const;
    void unsetmodelingType();
    void setModelingType(const std::string& value);

    /// <summary>
    /// **参数解释**： 建模任务ID。 **约束限制**： 仅由MetaStudio服务生成的模型系统自行填写 **取值范围**： 字符长度0-64位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getModelingJobId() const;
    bool modelingJobIdIsSet() const;
    void unsetmodelingJobId();
    void setModelingJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HumanModelMetaProperties getModelProperties() const;
    bool modelPropertiesIsSet() const;
    void unsetmodelProperties();
    void setModelProperties(const HumanModelMetaProperties& value);

    /// <summary>
    /// 可替换组件列表。
    /// </summary>

    std::vector<ComponentInfo>& getComponents();
    bool componentsIsSet() const;
    void unsetcomponents();
    void setComponents(const std::vector<ComponentInfo>& value);


protected:
    std::string styleId_;
    bool styleIdIsSet_;
    std::string modelingType_;
    bool modelingTypeIsSet_;
    std::string modelingJobId_;
    bool modelingJobIdIsSet_;
    HumanModelMetaProperties modelProperties_;
    bool modelPropertiesIsSet_;
    std::vector<ComponentInfo> components_;
    bool componentsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HumanModelAssetMeta_H_
