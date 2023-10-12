
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSubnetsRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSubnetsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListSubnetsRequest
    : public ModelBase
{
public:
    NeutronListSubnetsRequest();
    virtual ~NeutronListSubnetsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListSubnetsRequest members

    /// <summary>
    /// 每页返回的个数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页查询起始的资源ID，为空时查询第一页
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 按照子网对应的ID过滤查询
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 按照子网的cidr过滤查询
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 按照子网的名称过滤查询
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 按照子网是否开启dhcp过滤查询，取值范围：true or false
    /// </summary>

    bool isEnableDhcp() const;
    bool enableDhcpIsSet() const;
    void unsetenableDhcp();
    void setEnableDhcp(bool value);

    /// <summary>
    /// 按照子网所属network_id过滤查询
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// 按照子网的IP协议版本过滤查询
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// 按照子网的网关IP过滤查询
    /// </summary>

    std::string getGatewayIp() const;
    bool gatewayIpIsSet() const;
    void unsetgatewayIp();
    void setGatewayIp(const std::string& value);

    /// <summary>
    /// 按照子网所属的项目ID过滤查询
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool enableDhcp_;
    bool enableDhcpIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string gatewayIp_;
    bool gatewayIpIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronListSubnetsRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronListSubnetsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSubnetsRequest_H_
