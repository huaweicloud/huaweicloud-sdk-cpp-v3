
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HealthResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HealthResponse_H_


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
/// **参数解释：** 健康检查配置。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HealthResponse
    : public ModelBase
{
public:
    HealthResponse();
    virtual ~HealthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HealthResponse members

    /// <summary>
    /// **参数解释：** 健康检查方式：HTTP 或者 EXEC（命令行）。 **约束限制：** 不涉及。 **取值范围：** - HTTP：超文本传输协议。 - EXEC：命令行。 **默认取值：** 不涉及。
    /// </summary>

    std::string getCheckMethod() const;
    bool checkMethodIsSet() const;
    void unsetcheckMethod();
    void setCheckMethod(const std::string& value);

    /// <summary>
    /// **参数解释：** 当健康检查方式为EXEC时，配置的命令行。 **约束限制：** 字符长度限制[0, 1024]，不能包含字符：#~^$|%&amp;*&lt;&gt;()&#39;\&quot;[]{} **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getCmd() const;
    bool cmdIsSet() const;
    void unsetcmd();
    void setCmd(const std::string& value);

    /// <summary>
    /// **参数解释：** 当健康检查方式为HTTP 时，配置的请求地址。 **约束限制：** 字符长度限制[0, 1024]，首字符为/，后续字符可以是：字母 数字 中划线 下划线 / : **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 连接协议。默认HTTP。 **约束限制：** 不涉及。 **取值范围：** - HTTPS：超文本传输协议安全版。 - HTTP：超文本传输协议。 - WSS：网络通信协议安全版。 - WS：网络通信协议。 **默认取值：** 不涉及。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// **参数解释：** 执行首次探测时，应该等待的时间，默认30秒，最小1秒。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 默认值为30。
    /// </summary>

    int32_t getInitialDelaySeconds() const;
    bool initialDelaySecondsIsSet() const;
    void unsetinitialDelaySeconds();
    void setInitialDelaySeconds(int32_t value);

    /// <summary>
    /// **参数解释：** 执行探测的超时时间，默认30秒，最小1秒。 **约束限制：** 不涉及。 **取值范围：** 最小值为1秒。 **默认取值：** 默认值为30秒。
    /// </summary>

    int32_t getTimeoutSeconds() const;
    bool timeoutSecondsIsSet() const;
    void unsettimeoutSeconds();
    void setTimeoutSeconds(int32_t value);

    /// <summary>
    /// **参数解释：** 执行健康检查的周期时间，执行探测的频率。默认是10秒，最小1秒。 **约束限制：** 不涉及。 **取值范围：** 最小值为1秒。 **默认取值：** 默认值为10秒。
    /// </summary>

    int32_t getPeriodSeconds() const;
    bool periodSecondsIsSet() const;
    void unsetperiodSeconds();
    void setPeriodSeconds(int32_t value);

    /// <summary>
    /// **参数解释：** 探测成功后，至少连续探测失败多少次才被认定为失败。默认是3。最小值是1。 **约束限制：** 不涉及。 **取值范围：** 最小值为1。 **默认取值：** 默认值为3。
    /// </summary>

    int32_t getFailureThreshold() const;
    bool failureThresholdIsSet() const;
    void unsetfailureThreshold();
    void setFailureThreshold(int32_t value);


protected:
    std::string checkMethod_;
    bool checkMethodIsSet_;
    std::string cmd_;
    bool cmdIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    int32_t initialDelaySeconds_;
    bool initialDelaySecondsIsSet_;
    int32_t timeoutSeconds_;
    bool timeoutSecondsIsSet_;
    int32_t periodSeconds_;
    bool periodSecondsIsSet_;
    int32_t failureThreshold_;
    bool failureThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HealthResponse_H_
