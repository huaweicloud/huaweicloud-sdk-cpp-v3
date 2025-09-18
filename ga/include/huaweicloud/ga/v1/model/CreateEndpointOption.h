
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointOption_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointOption_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/EndpointType.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建终端节点详细信息。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateEndpointOption
    : public ModelBase
{
public:
    CreateEndpointOption();
    virtual ~CreateEndpointOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEndpointOption members

    /// <summary>
    /// 对应后端资源的ID，比如EIP的ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EndpointType getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const EndpointType& value);

    /// <summary>
    /// 终端节点权重。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// IP地址。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    EndpointType resourceType_;
    bool resourceTypeIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointOption_H_
