
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AccessPolicyResp_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AccessPolicyResp_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/cce/v3/model/Principal.h>
#include <huaweicloud/cce/v3/model/AccessScope.h>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  AccessPolicyResp
    : public ModelBase
{
public:
    AccessPolicyResp();
    virtual ~AccessPolicyResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessPolicyResp members

    /// <summary>
    /// **参数解释：** API类型。 **约束限制：** 该值不可修改。 **取值范围：** 不涉及 **默认取值：** AccessPolicy
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释：** API版本。 **约束限制：** 该值不可修改。 **取值范围：** 不涉及 **默认取值：** v3
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 访问策略名称。 **约束限制：** 以小写字母开头，由小写字母、数字、中划线(-)、点(.)组成，长度范围1-56位，且不能以中划线(-)结尾。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 权限ID。 **约束限制：** 系统自动生成，该值不可修改。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// **参数解释：** 集群ID的列表，允许使用通配符（“\\*”），表示所有集群。 **约束限制：** 当前最多支持同时授权200个集群。 **取值范围：** \\[\&quot;\\*\&quot;\\]或者集群ID列表。 **默认取值：** 不涉及
    /// </summary>

    std::vector<std::string>& getClusters();
    bool clustersIsSet() const;
    void unsetclusters();
    void setClusters(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    AccessScope getAccessScope() const;
    bool accessScopeIsSet() const;
    void unsetaccessScope();
    void setAccessScope(const AccessScope& value);

    /// <summary>
    /// **参数解释：** 权限类型。 **约束限制：** 不涉及 **取值范围：** - CCEClusterAdminPolicy：管理员权限 - CCEAdminPolicy：运维权限 - CCEEditPolicy：开发权限 - CCEViewPolicy：只读权限  **默认取值：** 不涉及
    /// </summary>

    std::string getPolicyType() const;
    bool policyTypeIsSet() const;
    void unsetpolicyType();
    void setPolicyType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Principal getPrincipal() const;
    bool principalIsSet() const;
    void unsetprincipal();
    void setPrincipal(const Principal& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 更新时间。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string policyId_;
    bool policyIdIsSet_;
    std::vector<std::string> clusters_;
    bool clustersIsSet_;
    AccessScope accessScope_;
    bool accessScopeIsSet_;
    std::string policyType_;
    bool policyTypeIsSet_;
    Principal principal_;
    bool principalIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AccessPolicyResp_H_
