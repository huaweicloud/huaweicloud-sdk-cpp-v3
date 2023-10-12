
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_RouterInterfaceRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_RouterInterfaceRequestBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  RouterInterfaceRequestBody
    : public ModelBase
{
public:
    RouterInterfaceRequestBody();
    virtual ~RouterInterfaceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RouterInterfaceRequestBody members

    /// <summary>
    /// 功能说明：路由器添加（或删除）接口请求参数port对应的id 约束：  - 使用端口的时候，端口上有且只有一个IP地址  - subnet_id与port_id其中之一必须指定
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 功能说明：路由器添加（或删除）接口请求参数subnet对应的id 约束：  - 使用子网的时候，子网上必须配置gatewayIP地址  - \&quot;provider:network_type\&quot;为\&quot;geneve\&quot;的网络不可以添加路由器  - subnet_id与port_id其中之一必须指定。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);


protected:
    std::string portId_;
    bool portIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_RouterInterfaceRequestBody_H_
