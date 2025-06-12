
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MaterialComponentInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MaterialComponentInfo_H_


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
/// 可替换的素材组件信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  MaterialComponentInfo
    : public ModelBase
{
public:
    MaterialComponentInfo();
    virtual ~MaterialComponentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MaterialComponentInfo members

    /// <summary>
    /// 素材组件名称。
    /// </summary>

    std::string getComponentName() const;
    bool componentNameIsSet() const;
    void unsetcomponentName();
    void setComponentName(const std::string& value);

    /// <summary>
    /// 素材组件类型。 * CLOTHES：衣服 * PANTS：裤子 * SHOES：鞋子 * HAIR：头发 * EYELASH：睫毛 * EYEBROW：眉毛
    /// </summary>

    std::string getComponentType() const;
    bool componentTypeIsSet() const;
    void unsetcomponentType();
    void setComponentType(const std::string& value);

    /// <summary>
    /// 素材组件描述。
    /// </summary>

    std::string getComponentDesc() const;
    bool componentDescIsSet() const;
    void unsetcomponentDesc();
    void setComponentDesc(const std::string& value);


protected:
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MaterialComponentInfo_H_
