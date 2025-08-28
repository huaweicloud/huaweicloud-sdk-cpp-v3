
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DefaultPluginInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DefaultPluginInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/PluginTypeEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 默认插件支持信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  DefaultPluginInfo
    : public ModelBase
{
public:
    DefaultPluginInfo();
    virtual ~DefaultPluginInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DefaultPluginInfo members

    /// <summary>
    /// 
    /// </summary>

    PluginTypeEnum getPluginType() const;
    bool pluginTypeIsSet() const;
    void unsetpluginType();
    void setPluginType(const PluginTypeEnum& value);

    /// <summary>
    /// 支持默认插件。
    /// </summary>

    bool isSupportDefault() const;
    bool supportDefaultIsSet() const;
    void unsetsupportDefault();
    void setSupportDefault(bool value);


protected:
    PluginTypeEnum pluginType_;
    bool pluginTypeIsSet_;
    bool supportDefault_;
    bool supportDefaultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DefaultPluginInfo_H_
