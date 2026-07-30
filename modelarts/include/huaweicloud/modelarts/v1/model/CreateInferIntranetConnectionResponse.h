
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferIntranetConnectionResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferIntranetConnectionResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateInferIntranetConnectionResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateInferIntranetConnectionResponse();
    virtual ~CreateInferIntranetConnectionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInferIntranetConnectionResponse members

    /// <summary>
    /// **参数解释：** 申请方用户名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getApplicantUserName() const;
    bool applicantUserNameIsSet() const;
    void unsetapplicantUserName();
    void setApplicantUserName(const std::string& value);

    /// <summary>
    /// **参数解释：** 内网接入id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 申请描述。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 审核方domain name。  **取值范围：** 不涉及。
    /// </summary>

    std::string getOwnerDomainName() const;
    bool ownerDomainNameIsSet() const;
    void unsetownerDomainName();
    void setOwnerDomainName(const std::string& value);

    /// <summary>
    /// **参数解释：** 内网访问场景。 **约束限制：** 不涉及。 **取值范围：** - POOL：用户资源池接入场景 - VPC：用户VPC接入场景 **默认取值：** 不涉及。
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 内网接入状态，支持列表查询。 **约束限制：** 不涉及。 **取值范围：** - APPROVING：审批中 - REJECTED：拒绝 - CONNECTING：接入中 - CONNECTED：已接入 - CANCELED：已取消 - FAILED：失败 - DELETING：删除中 **默认取值：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 子网ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释：** 访问地址列表。
    /// </summary>

    std::vector<std::string>& getUrlList();
    bool urlListIsSet() const;
    void unseturlList();
    void setUrlList(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 访问地址列表。
    /// </summary>

    std::vector<std::string>& getCustomUrlList();
    bool customUrlListIsSet() const;
    void unsetcustomUrlList();
    void setCustomUrlList(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** VPC ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务绑定的dispatcher组ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDispatcherGroupId() const;
    bool dispatcherGroupIdIsSet() const;
    void unsetdispatcherGroupId();
    void setDispatcherGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 接入粒度：SERVICE、GLOBAL **取值范围：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池网络名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMaosNetworkName() const;
    bool maosNetworkNameIsSet() const;
    void unsetmaosNetworkName();
    void setMaosNetworkName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务类型。 **取值范围：** 不涉及。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 修改时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);


protected:
    std::string applicantUserName_;
    bool applicantUserNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string ownerDomainName_;
    bool ownerDomainNameIsSet_;
    std::string scene_;
    bool sceneIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string serviceName_;
    bool serviceNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::vector<std::string> urlList_;
    bool urlListIsSet_;
    std::vector<std::string> customUrlList_;
    bool customUrlListIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string dispatcherGroupId_;
    bool dispatcherGroupIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string maosNetworkName_;
    bool maosNetworkNameIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferIntranetConnectionResponse_H_
