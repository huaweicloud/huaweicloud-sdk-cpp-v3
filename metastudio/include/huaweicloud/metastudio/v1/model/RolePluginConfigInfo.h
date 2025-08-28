
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RolePluginConfigInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RolePluginConfigInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/PluginTypeEnum.h>
#include <huaweicloud/metastudio/v1/model/PluginSourceEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 角色插件配置信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RolePluginConfigInfo
    : public ModelBase
{
public:
    RolePluginConfigInfo();
    virtual ~RolePluginConfigInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RolePluginConfigInfo members

    /// <summary>
    /// 
    /// </summary>

    PluginTypeEnum getPluginType() const;
    bool pluginTypeIsSet() const;
    void unsetpluginType();
    void setPluginType(const PluginTypeEnum& value);

    /// <summary>
    /// 
    /// </summary>

    PluginSourceEnum getPluginSource() const;
    bool pluginSourceIsSet() const;
    void unsetpluginSource();
    void setPluginSource(const PluginSourceEnum& value);

    /// <summary>
    /// 插件配置ID。
    /// </summary>

    std::string getPluginConfigId() const;
    bool pluginConfigIdIsSet() const;
    void unsetpluginConfigId();
    void setPluginConfigId(const std::string& value);


protected:
    PluginTypeEnum pluginType_;
    bool pluginTypeIsSet_;
    PluginSourceEnum pluginSource_;
    bool pluginSourceIsSet_;
    std::string pluginConfigId_;
    bool pluginConfigIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RolePluginConfigInfo_H_
