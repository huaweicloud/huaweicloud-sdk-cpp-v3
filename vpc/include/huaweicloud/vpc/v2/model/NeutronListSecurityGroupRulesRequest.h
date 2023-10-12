
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesRequest_H_


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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListSecurityGroupRulesRequest
    : public ModelBase
{
public:
    NeutronListSecurityGroupRulesRequest();
    virtual ~NeutronListSecurityGroupRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListSecurityGroupRulesRequest members

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
    /// 按照安全组规则对应的id过滤查询结果
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 按照安全组规则的方向过滤查询结果，支持ingress和egress进行过滤
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// 按照安全组规则的IP协议过滤查询结果
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 按照网络类型过滤查询结果，支持IPv4或者IPv6
    /// </summary>

    std::string getEthertype() const;
    bool ethertypeIsSet() const;
    void unsetethertype();
    void setEthertype(const std::string& value);

    /// <summary>
    /// 按照安全组规则的描述过滤查询结果
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 按照与此安全组规则匹配的远端IP网段过滤查询结果
    /// </summary>

    std::string getRemoteIpPrefix() const;
    bool remoteIpPrefixIsSet() const;
    void unsetremoteIpPrefix();
    void setRemoteIpPrefix(const std::string& value);

    /// <summary>
    /// 按照与此安全组规则关联的远端安全组ID过滤查询结果
    /// </summary>

    std::string getRemoteGroupId() const;
    bool remoteGroupIdIsSet() const;
    void unsetremoteGroupId();
    void setRemoteGroupId(const std::string& value);

    /// <summary>
    /// 按照与此安全组规则所属的安全组ID过滤查询结果
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 按照最大端口过滤查询结果
    /// </summary>

    std::string getPortRangeMax() const;
    bool portRangeMaxIsSet() const;
    void unsetportRangeMax();
    void setPortRangeMax(const std::string& value);

    /// <summary>
    /// 按照最小端口过滤查询结果
    /// </summary>

    std::string getPortRangeMin() const;
    bool portRangeMinIsSet() const;
    void unsetportRangeMin();
    void setPortRangeMin(const std::string& value);

    /// <summary>
    /// 按照安全组规则所属的项目ID过滤查询结果
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
    std::string direction_;
    bool directionIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string ethertype_;
    bool ethertypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string remoteIpPrefix_;
    bool remoteIpPrefixIsSet_;
    std::string remoteGroupId_;
    bool remoteGroupIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string portRangeMax_;
    bool portRangeMaxIsSet_;
    std::string portRangeMin_;
    bool portRangeMinIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronListSecurityGroupRulesRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronListSecurityGroupRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesRequest_H_
