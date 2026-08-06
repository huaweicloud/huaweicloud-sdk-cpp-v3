
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeyPolicyResponseBody_keyspace_policies_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeyPolicyResponseBody_keyspace_policies_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kms/v2/model/ListKeyPolicyResponseBody_policy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListKeyPolicyResponseBody_keyspace_policies
    : public ModelBase
{
public:
    ListKeyPolicyResponseBody_keyspace_policies();
    virtual ~ListKeyPolicyResponseBody_keyspace_policies();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListKeyPolicyResponseBody_keyspace_policies members

    /// <summary>
    /// **参数解释：** 密钥策略ID **取值范围：** 不涉及
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥策略名称 **取值范围：** 不涉及
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥空间ID **取值范围：** 不涉及
    /// </summary>

    std::string getKeyspaceId() const;
    bool keyspaceIdIsSet() const;
    void unsetkeyspaceId();
    void setKeyspaceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListKeyPolicyResponseBody_policy getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const ListKeyPolicyResponseBody_policy& value);

    /// <summary>
    /// **参数解释：** 密钥策略描述信息 **取值范围：** 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥策略创建人 **取值范围：** 不涉及
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥策略创建时间 **取值范围：** 不涉及
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥策略最近修改时间 **取值范围：** 不涉及
    /// </summary>

    std::string getLastModifyTime() const;
    bool lastModifyTimeIsSet() const;
    void unsetlastModifyTime();
    void setLastModifyTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥策略最近访问时间 **取值范围：** 不涉及
    /// </summary>

    std::string getLastAccessTime() const;
    bool lastAccessTimeIsSet() const;
    void unsetlastAccessTime();
    void setLastAccessTime(const std::string& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;
    std::string policyName_;
    bool policyNameIsSet_;
    std::string keyspaceId_;
    bool keyspaceIdIsSet_;
    ListKeyPolicyResponseBody_policy policy_;
    bool policyIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastModifyTime_;
    bool lastModifyTimeIsSet_;
    std::string lastAccessTime_;
    bool lastAccessTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeyPolicyResponseBody_keyspace_policies_H_
