
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DelegatedAdministratorDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DelegatedAdministratorDto_H_


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
/// 包含有关委托管理员的信息。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  DelegatedAdministratorDto
    : public ModelBase
{
public:
    DelegatedAdministratorDto();
    virtual ~DelegatedAdministratorDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DelegatedAdministratorDto members

    /// <summary>
    /// 将账号设置为委托管理员的日期。
    /// </summary>

    utility::datetime getDelegationEnabledAt() const;
    bool delegationEnabledAtIsSet() const;
    void unsetdelegationEnabledAt();
    void setDelegationEnabledAt(const utility::datetime& value);

    /// <summary>
    /// 账号的唯一标识符（ID）。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 账号的统一资源名称。
    /// </summary>

    std::string getAccountUrn() const;
    bool accountUrnIsSet() const;
    void unsetaccountUrn();
    void setAccountUrn(const std::string& value);

    /// <summary>
    /// 账号加入组织的方式,invited：邀请加入，created：创建加入。
    /// </summary>

    std::string getJoinMethod() const;
    bool joinMethodIsSet() const;
    void unsetjoinMethod();
    void setJoinMethod(const std::string& value);

    /// <summary>
    /// 账号成为组织一部分的日期。
    /// </summary>

    utility::datetime getJoinedAt() const;
    bool joinedAtIsSet() const;
    void unsetjoinedAt();
    void setJoinedAt(const utility::datetime& value);

    /// <summary>
    /// 账号名称
    /// </summary>

    std::string getAccountName() const;
    bool accountNameIsSet() const;
    void unsetaccountName();
    void setAccountName(const std::string& value);


protected:
    utility::datetime delegationEnabledAt_;
    bool delegationEnabledAtIsSet_;
    std::string accountId_;
    bool accountIdIsSet_;
    std::string accountUrn_;
    bool accountUrnIsSet_;
    std::string joinMethod_;
    bool joinMethodIsSet_;
    utility::datetime joinedAt_;
    bool joinedAtIsSet_;
    std::string accountName_;
    bool accountNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DelegatedAdministratorDto_H_
