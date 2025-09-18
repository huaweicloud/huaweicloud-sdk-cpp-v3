
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_HealthCheckDetail_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_HealthCheckDetail_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ga/v1/model/ConfigStatus.h>
#include <huaweicloud/ga/v1/model/HealthCheckProtocol.h>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/ga/v1/model/FrozenInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 健康检查实例。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  HealthCheckDetail
    : public ModelBase
{
public:
    HealthCheckDetail();
    virtual ~HealthCheckDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HealthCheckDetail members

    /// <summary>
    /// 健康检查ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

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
    /// 
    /// </summary>

    ConfigStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const ConfigStatus& value);

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
    /// 创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 更新时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 租户ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 是否开启健康检查。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>

    FrozenInfo getFrozenInfo() const;
    bool frozenInfoIsSet() const;
    void unsetfrozenInfo();
    void setFrozenInfo(const FrozenInfo& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string endpointGroupId_;
    bool endpointGroupIdIsSet_;
    HealthCheckProtocol protocol_;
    bool protocolIsSet_;
    ConfigStatus status_;
    bool statusIsSet_;
    int32_t port_;
    bool portIsSet_;
    int32_t interval_;
    bool intervalIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;
    int32_t maxRetries_;
    bool maxRetriesIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    FrozenInfo frozenInfo_;
    bool frozenInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_HealthCheckDetail_H_
