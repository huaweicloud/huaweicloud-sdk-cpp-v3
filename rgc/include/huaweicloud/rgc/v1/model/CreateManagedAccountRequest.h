
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateManagedAccountRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateManagedAccountRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rgc/v1/model/Blueprint.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建账号的基本信息。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  CreateManagedAccountRequest
    : public ModelBase
{
public:
    CreateManagedAccountRequest();
    virtual ~CreateManagedAccountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateManagedAccountRequest members

    /// <summary>
    /// 纳管账号名。
    /// </summary>

    std::string getAccountName() const;
    bool accountNameIsSet() const;
    void unsetaccountName();
    void setAccountName(const std::string& value);

    /// <summary>
    /// 纳管账号邮箱。
    /// </summary>

    std::string getAccountEmail() const;
    bool accountEmailIsSet() const;
    void unsetaccountEmail();
    void setAccountEmail(const std::string& value);

    /// <summary>
    /// 手机号码。
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// Identity Center用户名。
    /// </summary>

    std::string getIdentityStoreUserName() const;
    bool identityStoreUserNameIsSet() const;
    void unsetidentityStoreUserName();
    void setIdentityStoreUserName(const std::string& value);

    /// <summary>
    /// Identity Center邮箱。
    /// </summary>

    std::string getIdentityStoreEmail() const;
    bool identityStoreEmailIsSet() const;
    void unsetidentityStoreEmail();
    void setIdentityStoreEmail(const std::string& value);

    /// <summary>
    /// 父注册OU ID。
    /// </summary>

    std::string getParentOrganizationalUnitId() const;
    bool parentOrganizationalUnitIdIsSet() const;
    void unsetparentOrganizationalUnitId();
    void setParentOrganizationalUnitId(const std::string& value);

    /// <summary>
    /// 父注册OU名称。
    /// </summary>

    std::string getParentOrganizationalUnitName() const;
    bool parentOrganizationalUnitNameIsSet() const;
    void unsetparentOrganizationalUnitName();
    void setParentOrganizationalUnitName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Blueprint getBlueprint() const;
    bool blueprintIsSet() const;
    void unsetblueprint();
    void setBlueprint(const Blueprint& value);


protected:
    std::string accountName_;
    bool accountNameIsSet_;
    std::string accountEmail_;
    bool accountEmailIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string identityStoreUserName_;
    bool identityStoreUserNameIsSet_;
    std::string identityStoreEmail_;
    bool identityStoreEmailIsSet_;
    std::string parentOrganizationalUnitId_;
    bool parentOrganizationalUnitIdIsSet_;
    std::string parentOrganizationalUnitName_;
    bool parentOrganizationalUnitNameIsSet_;
    Blueprint blueprint_;
    bool blueprintIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateManagedAccountRequest_H_
