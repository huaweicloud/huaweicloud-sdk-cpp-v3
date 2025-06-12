
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SceneComponentInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SceneComponentInfo_H_


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
/// 场景组件信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SceneComponentInfo
    : public ModelBase
{
public:
    SceneComponentInfo();
    virtual ~SceneComponentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SceneComponentInfo members

    /// <summary>
    /// 组件索引。
    /// </summary>

    int32_t getIndex() const;
    bool indexIsSet() const;
    void unsetindex();
    void setIndex(int32_t value);

    /// <summary>
    /// 组件名称。
    /// </summary>

    std::string getComponentName() const;
    bool componentNameIsSet() const;
    void unsetcomponentName();
    void setComponentName(const std::string& value);

    /// <summary>
    /// 组件类型。 * CAMERA：摄像机 * PANEL：屏幕 * LIGHT：灯光
    /// </summary>

    std::string getComponentType() const;
    bool componentTypeIsSet() const;
    void unsetcomponentType();
    void setComponentType(const std::string& value);

    /// <summary>
    /// 组件描述。
    /// </summary>

    std::string getComponentDesc() const;
    bool componentDescIsSet() const;
    void unsetcomponentDesc();
    void setComponentDesc(const std::string& value);


protected:
    int32_t index_;
    bool indexIsSet_;
    std::string componentName_;
    bool componentNameIsSet_;
    std::string componentType_;
    bool componentTypeIsSet_;
    std::string componentDesc_;
    bool componentDescIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SceneComponentInfo_H_
