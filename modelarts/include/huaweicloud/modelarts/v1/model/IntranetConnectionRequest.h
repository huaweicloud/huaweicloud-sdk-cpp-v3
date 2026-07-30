
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_IntranetConnectionRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_IntranetConnectionRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  IntranetConnectionRequest
    : public ModelBase
{
public:
    IntranetConnectionRequest();
    virtual ~IntranetConnectionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IntranetConnectionRequest members

    /// <summary>
    /// **参数解释：** 服务ID，在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **约束限制：** type为SERVICE时，必填。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 内网访问场景。 **约束限制：** 不涉及。 **取值范围：** - VPC：用户VPC网络接入场景 - POOL：用户资源池网络接入场景 **默认取值：** 不涉及。
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// **参数解释：** VPC ID，VPC场景需要填写。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释：** 子网 ID，VPC场景需要填写。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池id POOL场景需要填写。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 内网访问接入粒度，不填默认为SERVICE **约束限制：** 不涉及。 **取值范围：** - SERVICE：服务粒度。 - GLOBAL：global粒度。 **默认取值：** 默认为SERVICE。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务绑定的dispatcher组ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDispatcherGroupId() const;
    bool dispatcherGroupIdIsSet() const;
    void unsetdispatcherGroupId();
    void setDispatcherGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义URL，格式为：{协议}://{域名}{路径} **约束限制：** url个数不超过10个，单个url长度不超过1024。 **取值范围：** - 协议范围：http，https，wss，ws。 - 域名范围：支持域名或IP:端口。域名长度不超过63，包含字母、数字、中划线（-)且不能以中划线（-)开头或结尾，顶级域名不能包含数字；端口范围为1-65535。 - 路径范围：斜杠（/）开头，仅包含字母、数字、点号（.）、中划线（-)、下划线（_）、斜杠（/）的路径。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getCustomUrls();
    bool customUrlsIsSet() const;
    void unsetcustomUrls();
    void setCustomUrls(const std::vector<std::string>& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string scene_;
    bool sceneIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string dispatcherGroupId_;
    bool dispatcherGroupIdIsSet_;
    std::vector<std::string> customUrls_;
    bool customUrlsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_IntranetConnectionRequest_H_
