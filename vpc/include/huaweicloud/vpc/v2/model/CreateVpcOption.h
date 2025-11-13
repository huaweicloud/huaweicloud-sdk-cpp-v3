
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcOption_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// vpc对象
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  CreateVpcOption
    : public ModelBase
{
public:
    CreateVpcOption();
    virtual ~CreateVpcOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVpcOption members

    /// <summary>
    /// 功能说明：虚拟私有云下可用子网的范围 取值范围： - 10.0.0.0/8 ~ 10.255.255.240/28 - 172.16.0.0/12 ~ 172.31.255.240/28 - 192.168.0.0/16 ~ 192.168.255.240/28 约束：必须是ipv4 cidr格式，例如:192.168.0.0/16
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 功能说明：虚拟私有云名称 取值范围：0-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点） 约束：如果名称不为空，则同一个租户下的名称不能重复
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：虚拟私有云的描述 取值范围：0-255个字符，不能包含“&lt;”和“&gt;”。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：企业项目ID。创建虚拟私有云时，给虚拟私有云绑定企业项目ID。 取值范围：最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。“0”表示默认企业项目。 默认值：\&quot;0\&quot;
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 功能说明：VPC资源标签。创建VPC时，给VPC添加资源标签。 取值范围：最大10个标签, key：标签名称; value：标签值。 格式：[key*value]，每一个标签的key和value之间用*连接
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

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
    std::string cidr_;
    bool cidrIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
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

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcOption_H_
