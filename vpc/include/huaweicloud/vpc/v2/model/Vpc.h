
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_Vpc_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_Vpc_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/Route.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

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
class HUAWEICLOUD_VPC_V2_EXPORT  Vpc
    : public ModelBase
{
public:
    Vpc();
    virtual ~Vpc();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Vpc members

    /// <summary>
    /// 功能说明：虚拟私有云ID 取值范围：带\&quot;-\&quot;的UUID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：虚拟私有云名称 取值范围：0-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点） 约束：如果名称不为空，则同一个租户下的名称不能重复
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：虚拟私有云下可用子网的范围 取值范围： - 10.0.0.0/8~10.255.255.240/28 - 172.16.0.0/12 ~ 172.31.255.240/28 - 192.168.0.0/16 ~ 192.168.255.240/28 不指定cidr时，默认值为空 约束：必须是ipv4 cidr格式，例如:192.168.0.0/16
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 功能说明：虚拟私有云的描述 取值范围：0-255个字符，不能包含“&lt;”和“&gt;”
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：路由信息列表，详情参见route对象
    /// </summary>

    std::vector<Route>& getRoutes();
    bool routesIsSet() const;
    void unsetroutes();
    void setRoutes(const std::vector<Route>& value);

    /// <summary>
    /// 功能说明：虚拟私有云的状态 取值范围： - CREATING：创建中 - OK：创建成功
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 功能说明：企业项目ID。 取值范围：最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。“0”表示默认企业项目。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 功能说明：资源创建UTC时间 格式：yyyy-MM-ddTHH:mm:ss
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 功能说明：资源更新UTC时间 格式：yyyy-MM-ddTHH:mm:ss
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 功能说明：默认情况下，VPC中的资源可以通过内网访问服务终结点。开启该项后，VPC将无法通过内网访问服务终结点，请谨慎操作。 无法访问以下云服务：容器镜像服务SWR、云日志服务LTS、企业主机安全HSS、应用运维管理AOM、应用性能管理APM、对象存储服务OBS、API网关APIG。 取值范围： off：代表禁用。 on：代表开启。
    /// </summary>

    std::string getBlockServiceEndpointStates() const;
    bool blockServiceEndpointStatesIsSet() const;
    void unsetblockServiceEndpointStates();
    void setBlockServiceEndpointStates(const std::string& value);

    /// <summary>
    /// 功能说明：是否开启VPC内所有子网的IPv4地址使用量指标监控。 取值范围： true：开启 false：不开启
    /// </summary>

    bool isEnableNetworkAddressUsageMetrics() const;
    bool enableNetworkAddressUsageMetricsIsSet() const;
    void unsetenableNetworkAddressUsageMetrics();
    void setEnableNetworkAddressUsageMetrics(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<Route> routes_;
    bool routesIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string blockServiceEndpointStates_;
    bool blockServiceEndpointStatesIsSet_;
    bool enableNetworkAddressUsageMetrics_;
    bool enableNetworkAddressUsageMetricsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_Vpc_H_
