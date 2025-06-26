
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HumanModel2DAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HumanModel2DAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ActionTagInfo.h>
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
/// 分身模型元数据
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  HumanModel2DAssetMeta
    : public ModelBase
{
public:
    HumanModel2DAssetMeta();
    virtual ~HumanModel2DAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HumanModel2DAssetMeta members

    /// <summary>
    /// **参数解释**： 分身数字人的动作是否可编辑 **约束限制**： 不涉及 **取值范围**： * true: 动作可编辑 * false: 动作不可编辑
    /// </summary>

    bool isIsActionEditable() const;
    bool isActionEditableIsSet() const;
    void unsetisActionEditable();
    void setIsActionEditable(bool value);

    /// <summary>
    /// **参数解释**： 是否是实景分身数字人 **约束限制**： 实景分身数字人不做背景替换。 **取值范围**： * true: 实景分身数字人 * false: 普通分身数字人，不带背景。
    /// </summary>

    bool isIsRealBackground() const;
    bool isRealBackgroundIsSet() const;
    void unsetisRealBackground();
    void setIsRealBackground(bool value);

    /// <summary>
    /// **参数解释**： 是否支持直播 **约束限制**： 不涉及 **取值范围**： * true: 支持直播 * false: 不支持直播。
    /// </summary>

    bool isSupportLive() const;
    bool supportLiveIsSet() const;
    void unsetsupportLive();
    void setSupportLive(bool value);

    /// <summary>
    /// **参数解释**： 分身数字人模型版本 **约束限制**： 不涉及 **取值范围**： * V2: V2版本模型 * V3：V3版本模型 * V3_2：V3.2版本模型 * V3_3：V3.3版本模型
    /// </summary>

    std::string getModelVersion() const;
    bool modelVersionIsSet() const;
    void unsetmodelVersion();
    void setModelVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 分身数字人模型分辨率。 **约束限制**： 不涉及 **取值范围**： * 1080P：1080P。支持1080P及720P的视频输出。 * 4K：4K。支持4K、1080P及720P的视频输出。
    /// </summary>

    std::string getModelResolution() const;
    bool modelResolutionIsSet() const;
    void unsetmodelResolution();
    void setModelResolution(const std::string& value);

    /// <summary>
    /// **参数解释**： 已执行编译任务设备类型列表。 **约束限制**： 支持走动的数字人，当前仅用于视频制作，不能用于直播和智能交互 **取值范围**： 设备名称列表最多16个。 设备名称字符长度1-64位。 **默认取值**： false
    /// </summary>

    std::vector<std::string>& getDeviceNames();
    bool deviceNamesIsSet() const;
    void unsetdeviceNames();
    void setDeviceNames(const std::vector<std::string>& value);

    /// <summary>
    /// 分身数字人是否带原子动作库。 &gt; * 带原子动作库的分身数字人可做动作编排。
    /// </summary>

    bool isIsWithActionLibrary() const;
    bool isWithActionLibraryIsSet() const;
    void unsetisWithActionLibrary();
    void setIsWithActionLibrary(bool value);

    /// <summary>
    /// 动作标签映射。
    /// </summary>

    std::vector<ActionTagInfo>& getActionTagMap();
    bool actionTagMapIsSet() const;
    void unsetactionTagMap();
    void setActionTagMap(const std::vector<ActionTagInfo>& value);

    /// <summary>
    /// 是否是Flexus版本分身数字人。
    /// </summary>

    bool isIsFlexus() const;
    bool isFlexusIsSet() const;
    void unsetisFlexus();
    void setIsFlexus(bool value);


protected:
    bool isActionEditable_;
    bool isActionEditableIsSet_;
    bool isRealBackground_;
    bool isRealBackgroundIsSet_;
    bool supportLive_;
    bool supportLiveIsSet_;
    std::string modelVersion_;
    bool modelVersionIsSet_;
    std::string modelResolution_;
    bool modelResolutionIsSet_;
    std::vector<std::string> deviceNames_;
    bool deviceNamesIsSet_;
    bool isWithActionLibrary_;
    bool isWithActionLibraryIsSet_;
    std::vector<ActionTagInfo> actionTagMap_;
    bool actionTagMapIsSet_;
    bool isFlexus_;
    bool isFlexusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HumanModel2DAssetMeta_H_
