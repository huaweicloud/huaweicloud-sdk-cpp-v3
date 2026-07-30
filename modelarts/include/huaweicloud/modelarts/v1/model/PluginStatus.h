
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PluginResources.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件状态信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PluginStatus
    : public ModelBase
{
public:
    PluginStatus();
    virtual ~PluginStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginStatus members

    /// <summary>
    /// **参数解释**： 插件实例的状态。 **取值范围**：可选值如下： - Pending：安装中，表示插件正在安装中。 - Running：运行中，表示插件全部实例状态都在运行中，插件正常使用。 - Updating：升级中，表示插件正在更新中。 - Abnormal：不可用，表示插件状态异常，插件不可使用。可单击状态查看失败原因。 - Deleting：删除中，表示插件正在删除中。
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件实例的版本。 **取值范围**： 不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件实例安装失败的详细信息。 **取值范围**： 不涉及。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件实例的安装参数（各插件不同）。 **取值范围**： 不涉及。
    /// </summary>

    std::string getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件实例占用的资源量。
    /// </summary>

    std::vector<PluginResources>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<PluginResources>& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string values_;
    bool valuesIsSet_;
    std::vector<PluginResources> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginStatus_H_
