
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyStoreRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyStoreRequestBody_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建专属密钥库请求体
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateKeyStoreRequestBody
    : public ModelBase
{
public:
    CreateKeyStoreRequestBody();
    virtual ~CreateKeyStoreRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateKeyStoreRequestBody members

    /// <summary>
    /// 专属密钥库别名，取值范围为1到255个字符，满足正则匹配“^[a-zA-Z0-9:/_-]{1,255}$”，且不与已有的专属密钥库别名重名。
    /// </summary>

    std::string getKeystoreAlias() const;
    bool keystoreAliasIsSet() const;
    void unsetkeystoreAlias();
    void setKeystoreAlias(const std::string& value);

    /// <summary>
    /// DHSM集群Id，要求集群当前未创建专属密钥库。
    /// </summary>

    std::string getHsmClusterId() const;
    bool hsmClusterIdIsSet() const;
    void unsethsmClusterId();
    void setHsmClusterId(const std::string& value);

    /// <summary>
    /// DHSM集群的CA证书
    /// </summary>

    std::string getHsmCaCert() const;
    bool hsmCaCertIsSet() const;
    void unsethsmCaCert();
    void setHsmCaCert(const std::string& value);

    /// <summary>
    /// 集群ID。当类型为DHSM时，cluster_id为hsm_cluster_id。当类型为CDMS时，为cdms_cluster_id
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 专属密钥库集群类型。DHSM表示专属加密服务集群，CDMS表示密码卡集群,DEFAULT表示KMS原有集群
    /// </summary>

    std::string getKeystoreType() const;
    bool keystoreTypeIsSet() const;
    void unsetkeystoreType();
    void setKeystoreType(const std::string& value);

    /// <summary>
    /// **参数解释：** 仅XKS类型的密钥库支持；可选，表示Xks-Proxy的域名信息 **约束限制：** ^https://[^\\s]+ **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getProxyUriEndpoint() const;
    bool proxyUriEndpointIsSet() const;
    void unsetproxyUriEndpoint();
    void setProxyUriEndpoint(const std::string& value);

    /// <summary>
    /// **参数解释：** 仅XKS类型的密钥库支持；必选，Xks-Proxy的路径前缀 **约束限制：** ^/(?:[a-zA-Z0-9/_-]{0,127})$ **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getProxyUriPath() const;
    bool proxyUriPathIsSet() const;
    void unsetproxyUriPath();
    void setProxyUriPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 仅XKS类型的密钥库支持；必选，访问XKS-Proxy的凭据ID **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getProxyAccessKeyId() const;
    bool proxyAccessKeyIdIsSet() const;
    void unsetproxyAccessKeyId();
    void setProxyAccessKeyId(const std::string& value);

    /// <summary>
    /// **参数解释：** 仅XKS类型的密钥库支持；必选，访问XKS-Proxy的凭据Key **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getProxySecretAccessKey() const;
    bool proxySecretAccessKeyIsSet() const;
    void unsetproxySecretAccessKey();
    void setProxySecretAccessKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 仅XKS类型的密钥库支持；必选，Xks-Proxy的终端节点服务名称 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getProxyVpcEndpointServiceName() const;
    bool proxyVpcEndpointServiceNameIsSet() const;
    void unsetproxyVpcEndpointServiceName();
    void setProxyVpcEndpointServiceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 仅XKS类型的密钥库支持；必选，终端节点服务所属账号 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getProxyVpcEndpointServiceOwner() const;
    bool proxyVpcEndpointServiceOwnerIsSet() const;
    void unsetproxyVpcEndpointServiceOwner();
    void setProxyVpcEndpointServiceOwner(const std::string& value);


protected:
    std::string keystoreAlias_;
    bool keystoreAliasIsSet_;
    std::string hsmClusterId_;
    bool hsmClusterIdIsSet_;
    std::string hsmCaCert_;
    bool hsmCaCertIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string keystoreType_;
    bool keystoreTypeIsSet_;
    std::string proxyUriEndpoint_;
    bool proxyUriEndpointIsSet_;
    std::string proxyUriPath_;
    bool proxyUriPathIsSet_;
    std::string proxyAccessKeyId_;
    bool proxyAccessKeyIdIsSet_;
    std::string proxySecretAccessKey_;
    bool proxySecretAccessKeyIsSet_;
    std::string proxyVpcEndpointServiceName_;
    bool proxyVpcEndpointServiceNameIsSet_;
    std::string proxyVpcEndpointServiceOwner_;
    bool proxyVpcEndpointServiceOwnerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKeyStoreRequestBody_H_
