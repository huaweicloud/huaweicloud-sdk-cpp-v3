
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformationSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformationSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterInformationSpec_hostNetwork.h>
#include <huaweicloud/cce/v3/model/EniNetworkUpdate.h>
#include <string>
#include <vector>
#include <huaweicloud/cce/v3/model/ContainerNetworkUpdate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterInformationSpec
    : public ModelBase
{
public:
    ClusterInformationSpec();
    virtual ~ClusterInformationSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterInformationSpec members

    /// <summary>
    /// 集群的描述信息。  1. 字符取值范围[0,200]。不包含~$%^&amp;*&lt;&gt;[]{}()&#39;\&quot;#\\等特殊字符。 2. 仅运行和扩容状态（Available、ScalingUp、ScalingDown）的集群允许修改。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 集群的API Server服务端证书中的自定义SAN（Subject Alternative Name）字段，遵从SSL标准X509定义的格式规范。  1. 不允许出现同名重复。 2. 格式符合IP和域名格式。  示例: &#x60;&#x60;&#x60; SAN 1: DNS Name&#x3D;example.com SAN 2: DNS Name&#x3D;www.example.com SAN 3: DNS Name&#x3D;example.net SAN 4: IP Address&#x3D;93.184.216.34 &#x60;&#x60;&#x60;
    /// </summary>

    std::vector<std::string>& getCustomSan();
    bool customSanIsSet() const;
    void unsetcustomSan();
    void setCustomSan(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ContainerNetworkUpdate getContainerNetwork() const;
    bool containerNetworkIsSet() const;
    void unsetcontainerNetwork();
    void setContainerNetwork(const ContainerNetworkUpdate& value);

    /// <summary>
    /// 
    /// </summary>

    EniNetworkUpdate getEniNetwork() const;
    bool eniNetworkIsSet() const;
    void unseteniNetwork();
    void setEniNetwork(const EniNetworkUpdate& value);

    /// <summary>
    /// 
    /// </summary>

    ClusterInformationSpec_hostNetwork getHostNetwork() const;
    bool hostNetworkIsSet() const;
    void unsethostNetwork();
    void setHostNetwork(const ClusterInformationSpec_hostNetwork& value);

    /// <summary>
    /// 集群删除保护，默认为false关闭，如果开启后用户将无法删除该集群。
    /// </summary>

    bool isDeletionProtection() const;
    bool deletionProtectionIsSet() const;
    void unsetdeletionProtection();
    void setDeletionProtection(bool value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> customSan_;
    bool customSanIsSet_;
    ContainerNetworkUpdate containerNetwork_;
    bool containerNetworkIsSet_;
    EniNetworkUpdate eniNetwork_;
    bool eniNetworkIsSet_;
    ClusterInformationSpec_hostNetwork hostNetwork_;
    bool hostNetworkIsSet_;
    bool deletionProtection_;
    bool deletionProtectionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformationSpec_H_
