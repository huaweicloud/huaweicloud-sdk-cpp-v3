
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_EndpointDetail_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_EndpointDetail_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/EndpointType.h>
#include <string>
#include <huaweicloud/ga/v1/model/ConfigStatus.h>
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
/// 终端节点实例。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  EndpointDetail
    : public ModelBase
{
public:
    EndpointDetail();
    virtual ~EndpointDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndpointDetail members

    /// <summary>
    /// 终端节点ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 对应后端资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

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

    EndpointType getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const EndpointType& value);

    /// <summary>
    /// 
    /// </summary>

    ConfigStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const ConfigStatus& value);

    /// <summary>
    /// 终端节点权重。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// 终端的健康状态，取值： - INITIAL：初始 - HEALTHY：正常 - UNHEALTHY：异常 - NO_MONITOR：未监控
    /// </summary>

    std::string getHealthState() const;
    bool healthStateIsSet() const;
    void unsethealthState();
    void setHealthState(const std::string& value);

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
    /// IP地址。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

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
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string endpointGroupId_;
    bool endpointGroupIdIsSet_;
    EndpointType resourceType_;
    bool resourceTypeIsSet_;
    ConfigStatus status_;
    bool statusIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    std::string healthState_;
    bool healthStateIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    FrozenInfo frozenInfo_;
    bool frozenInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_EndpointDetail_H_
