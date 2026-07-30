
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Metrics_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Metrics_H_


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
/// 指标采集配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Metrics
    : public ModelBase
{
public:
    Metrics();
    virtual ~Metrics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Metrics members

    /// <summary>
    /// **参数解释：** 指标采集地址，支持IP地址、域名或localhost。 **取值范围：** 不涉及。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// **参数解释：** 指标采集路径。 **取值范围：** 不涉及
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 指标采集端口。 **取值范围：** 1~65535。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// **参数解释：** 指标采集协议。 **取值范围：** - HTTP。 - HTTPS。
    /// </summary>

    std::string getScheme() const;
    bool schemeIsSet() const;
    void unsetscheme();
    void setScheme(const std::string& value);

    /// <summary>
    /// **参数解释：** 指标来源类型。 **取值范围：** - CONTAINER表示容器内。 - OTHERS表示外部其他地址。 **约束限制：** 不涉及。 **默认取值：** CONTAINER。
    /// </summary>

    std::string getMetricsSource() const;
    bool metricsSourceIsSet() const;
    void unsetmetricsSource();
    void setMetricsSource(const std::string& value);


protected:
    std::string endpoint_;
    bool endpointIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string scheme_;
    bool schemeIsSet_;
    std::string metricsSource_;
    bool metricsSourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Metrics_H_
