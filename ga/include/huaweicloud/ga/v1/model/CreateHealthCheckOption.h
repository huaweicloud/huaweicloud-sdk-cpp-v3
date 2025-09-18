
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateHealthCheckOption_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateHealthCheckOption_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ga/v1/model/HealthCheckProtocol.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建健康检查的详细信息。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateHealthCheckOption
    : public ModelBase
{
public:
    CreateHealthCheckOption();
    virtual ~CreateHealthCheckOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateHealthCheckOption members

    /// <summary>
    /// 终端节点组ID。
    /// </summary>

    std::string getEndpointGroupId() const;
    bool endpointGroupIdIsSet() const;
    void unsetendpointGroupId();
    void setEndpointGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HealthCheckProtocol getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const HealthCheckProtocol& value);

    /// <summary>
    /// 健康检查的端口。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 健康检查的时间间隔，单位为秒。
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);

    /// <summary>
    /// 健康检查的超时时间，单位为秒。建议该值小于interval的值。
    /// </summary>

    int32_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(int32_t value);

    /// <summary>
    /// 最大重试次数。将终端节点的状态从“健康”设置为“不健康”或从“不健康”设置为“健康”所需的连续健康检查次数。
    /// </summary>

    int32_t getMaxRetries() const;
    bool maxRetriesIsSet() const;
    void unsetmaxRetries();
    void setMaxRetries(int32_t value);

    /// <summary>
    /// 是否开启健康检查。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    std::string endpointGroupId_;
    bool endpointGroupIdIsSet_;
    HealthCheckProtocol protocol_;
    bool protocolIsSet_;
    int32_t port_;
    bool portIsSet_;
    int32_t interval_;
    bool intervalIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;
    int32_t maxRetries_;
    bool maxRetriesIsSet_;
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateHealthCheckOption_H_
