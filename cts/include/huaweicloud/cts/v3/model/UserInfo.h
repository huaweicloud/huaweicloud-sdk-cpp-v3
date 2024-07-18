
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_UserInfo_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_UserInfo_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/BaseUser.h>
#include <string>
#include <huaweicloud/cts/v3/model/SessionContext.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户信息。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  UserInfo
    : public ModelBase
{
public:
    UserInfo();
    virtual ~UserInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserInfo members

    /// <summary>
    /// 用户ID，参见《云审计服务API参考》“获取账号ID和项目ID”章节。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 用户名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户名称。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BaseUser getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const BaseUser& value);

    /// <summary>
    /// 账号ID，参见《云审计服务API参考》“获取账号ID和项目ID”章节。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 访问密钥ID。
    /// </summary>

    std::string getAccessKeyId() const;
    bool accessKeyIdIsSet() const;
    void unsetaccessKeyId();
    void setAccessKeyId(const std::string& value);

    /// <summary>
    /// 操作用户身份的 URN。 如果是 IAM 用户身份，格式如 iam::&lt;account-id&gt;:user:&lt;user-name&gt;。 如果是 IAM 委托会话 身份，格式如 sts::&lt;account-id&gt;:assumed-agency:&lt;agency-name&gt;/&lt;agency-session-name&gt;。 如果是 IAM 联邦身份，格式如 sts::&lt;account-id&gt;:external-user:&lt;idp_id&gt;/&lt;user-session-name&gt;。
    /// </summary>

    std::string getPrincipalUrn() const;
    bool principalUrnIsSet() const;
    void unsetprincipalUrn();
    void setPrincipalUrn(const std::string& value);

    /// <summary>
    /// 操作用户身份Id。 - 如果是 IAM 用户身份，格式为 &lt;user-id&gt;。 - 如果是 IAM 委托会话身份，格式为 &lt;agency-id&gt;:&lt;agency-session-name&gt;。 - 如果是 IAM 联邦身份，格式为 &lt;idp_id&gt;:&lt;user-session-name&gt;
    /// </summary>

    std::string getPrincipalId() const;
    bool principalIdIsSet() const;
    void unsetprincipalId();
    void setPrincipalId(const std::string& value);

    /// <summary>
    /// 是否是根用户。 - 值为“true”时，表示操作者是根用户。 - 值为“false”时，表示操作者是委托会话身份、联邦身份或非根用户的 IAM 用户。
    /// </summary>

    std::string getPrincipalIsRootUser() const;
    bool principalIsRootUserIsSet() const;
    void unsetprincipalIsRootUser();
    void setPrincipalIsRootUser(const std::string& value);

    /// <summary>
    /// 操作者身份类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 发出请求的服务的名称。控制台操作时为[\&quot;service.console\&quot; ]
    /// </summary>

    std::vector<std::string>& getInvokedBy();
    bool invokedByIsSet() const;
    void unsetinvokedBy();
    void setInvokedBy(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    SessionContext getSessionContext() const;
    bool sessionContextIsSet() const;
    void unsetsessionContext();
    void setSessionContext(const SessionContext& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    BaseUser domain_;
    bool domainIsSet_;
    std::string accountId_;
    bool accountIdIsSet_;
    std::string accessKeyId_;
    bool accessKeyIdIsSet_;
    std::string principalUrn_;
    bool principalUrnIsSet_;
    std::string principalId_;
    bool principalIdIsSet_;
    std::string principalIsRootUser_;
    bool principalIsRootUserIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> invokedBy_;
    bool invokedByIsSet_;
    SessionContext sessionContext_;
    bool sessionContextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_UserInfo_H_
