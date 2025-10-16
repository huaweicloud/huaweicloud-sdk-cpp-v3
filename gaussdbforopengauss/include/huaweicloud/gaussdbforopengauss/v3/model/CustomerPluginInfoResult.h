
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CustomerPluginInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CustomerPluginInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CustomerPluginInfoResult
    : public ModelBase
{
public:
    CustomerPluginInfoResult();
    virtual ~CustomerPluginInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomerPluginInfoResult members

    /// <summary>
    /// **参数解释**: 插件名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否安装此插件。 **取值范围**: 不涉及。 
    /// </summary>

    bool isInstalled() const;
    bool installedIsSet() const;
    void unsetinstalled();
    void setInstalled(bool value);

    /// <summary>
    /// **参数解释**: 插件端口。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// **参数解释**: 插件版本。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getPluginVersion() const;
    bool pluginVersionIsSet() const;
    void unsetpluginVersion();
    void setPluginVersion(const std::string& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    bool installed_;
    bool installedIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string pluginVersion_;
    bool pluginVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CustomerPluginInfoResult_H_
