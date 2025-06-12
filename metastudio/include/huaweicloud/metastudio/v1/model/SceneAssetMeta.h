
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SceneAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SceneAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/SceneComponentInfo.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 场景元数据。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SceneAssetMeta
    : public ModelBase
{
public:
    SceneAssetMeta();
    virtual ~SceneAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SceneAssetMeta members

    /// <summary>
    /// 可操作组件列表（如屏幕，灯光，摄像机）。
    /// </summary>

    std::vector<SceneComponentInfo>& getComponents();
    bool componentsIsSet() const;
    void unsetcomponents();
    void setComponents(const std::vector<SceneComponentInfo>& value);

    /// <summary>
    /// 默认场景设置（机位，初始人位置）。
    /// </summary>

    std::map<std::string, SceneComponentInfo>& getDefaultConfigs();
    bool defaultConfigsIsSet() const;
    void unsetdefaultConfigs();
    void setDefaultConfigs(const std::map<std::string, SceneComponentInfo>& value);


protected:
    std::vector<SceneComponentInfo> components_;
    bool componentsIsSet_;
    std::map<std::string, SceneComponentInfo> defaultConfigs_;
    bool defaultConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SceneAssetMeta_H_
