
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_AccountDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_AccountDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包含组织成员的账号的有关信息。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  AccountDto
    : public ModelBase
{
public:
    AccountDto();
    virtual ~AccountDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccountDto members

    /// <summary>
    /// 账号的唯一标识符（ID）。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 账号的统一资源名称。
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);

    /// <summary>
    /// 账号加入组织的方式。invited：邀请加入，created：创建加入。
    /// </summary>

    std::string getJoinMethod() const;
    bool joinMethodIsSet() const;
    void unsetjoinMethod();
    void setJoinMethod(const std::string& value);

    /// <summary>
    /// 账号当前的状态。active：有效； suspended：已关闭； pending_closure：关闭中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 账号加入组织的日期。
    /// </summary>

    utility::datetime getJoinedAt() const;
    bool joinedAtIsSet() const;
    void unsetjoinedAt();
    void setJoinedAt(const utility::datetime& value);

    /// <summary>
    /// 账号名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 手机号码
    /// </summary>

    std::string getMobilePhone() const;
    bool mobilePhoneIsSet() const;
    void unsetmobilePhone();
    void setMobilePhone(const std::string& value);

    /// <summary>
    /// 手机号前缀。
    /// </summary>

    std::string getIntlNumberPrefix() const;
    bool intlNumberPrefixIsSet() const;
    void unsetintlNumberPrefix();
    void setIntlNumberPrefix(const std::string& value);

    /// <summary>
    /// 与此账号关联的电子邮件地址。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string urn_;
    bool urnIsSet_;
    std::string joinMethod_;
    bool joinMethodIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime joinedAt_;
    bool joinedAtIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string mobilePhone_;
    bool mobilePhoneIsSet_;
    std::string intlNumberPrefix_;
    bool intlNumberPrefixIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_AccountDto_H_
