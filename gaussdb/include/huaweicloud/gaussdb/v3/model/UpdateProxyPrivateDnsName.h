
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyPrivateDnsName_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyPrivateDnsName_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateProxyPrivateDnsName
    : public ModelBase
{
public:
    UpdateProxyPrivateDnsName();
    virtual ~UpdateProxyPrivateDnsName();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProxyPrivateDnsName members

    /// <summary>
    /// **参数解释**：  新的dns名称。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getNewDnsName() const;
    bool newDnsNameIsSet() const;
    void unsetnewDnsName();
    void setNewDnsName(const std::string& value);

    /// <summary>
    /// **参数解释**：            虚拟私有云ID，获取方法如下： - 方法1：登录虚拟私有云服务的控制台界面，在虚拟私有云的详情页面查找VPC ID。 - 方法2：通过虚拟私有云服务的API接口查询，具体操作可参考[查询VPC列表](https://support.huaweicloud.com/api-vpc/vpc_api01_0003.html)。  **约束限制**：   不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


protected:
    std::string newDnsName_;
    bool newDnsNameIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyPrivateDnsName_H_
