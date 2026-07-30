
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogExportConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogExportConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志导出配置
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  LogExportConfig
    : public ModelBase
{
public:
    LogExportConfig();
    virtual ~LogExportConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogExportConfig members

    /// <summary>
    /// **参数解释**：日志版本号。 **约束限制**： - 日志版本取值为v0、v1，默认为v0。 **取值范围**：v0、v1 **默认取值**：v0。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：是否开启日志分时段下载。 **约束限制**：不涉及。 **取值范围**： - true：开启日志分时段下载 - false：关闭日志分时段下载 **默认取值**：false。
    /// </summary>

    bool isRotationEnabled() const;
    bool rotationEnabledIsSet() const;
    void unsetrotationEnabled();
    void setRotationEnabled(bool value);


protected:
    std::string version_;
    bool versionIsSet_;
    bool rotationEnabled_;
    bool rotationEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogExportConfig_H_
