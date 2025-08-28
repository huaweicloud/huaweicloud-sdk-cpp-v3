
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePluginConfigReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePluginConfigReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/PluginProviderEnum.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建插件配置请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreatePluginConfigReq
    : public ModelBase
{
public:
    CreatePluginConfigReq();
    virtual ~CreatePluginConfigReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePluginConfigReq members

    /// <summary>
    /// 
    /// </summary>

    PluginProviderEnum getPluginProvider() const;
    bool pluginProviderIsSet() const;
    void unsetpluginProvider();
    void setPluginProvider(const PluginProviderEnum& value);

    /// <summary>
    /// 密钥。
    /// </summary>

    std::string getApiKey() const;
    bool apiKeyIsSet() const;
    void unsetapiKey();
    void setApiKey(const std::string& value);


protected:
    PluginProviderEnum pluginProvider_;
    bool pluginProviderIsSet_;
    std::string apiKey_;
    bool apiKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePluginConfigReq_H_
