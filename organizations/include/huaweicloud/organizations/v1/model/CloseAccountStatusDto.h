
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CloseAccountStatusDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CloseAccountStatusDto_H_


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
/// 包含有关在组织中关闭账号的CloseAccount请求的状态。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  CloseAccountStatusDto
    : public ModelBase
{
public:
    CloseAccountStatusDto();
    virtual ~CloseAccountStatusDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CloseAccountStatusDto members

    /// <summary>
    /// 账号的唯一标识符（ID）。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 请求关闭账号的日期和时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 请求关闭账号状态更新的日期和时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 组织的唯一标识符（ID）。
    /// </summary>

    std::string getOrganizationId() const;
    bool organizationIdIsSet() const;
    void unsetorganizationId();
    void setOrganizationId(const std::string& value);

    /// <summary>
    /// 关闭账号的状态，pending_closure：关闭中，suspended：已关闭
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 如果请求失败，则说明失败原因。
    /// </summary>

    std::string getFailureReason() const;
    bool failureReasonIsSet() const;
    void unsetfailureReason();
    void setFailureReason(const std::string& value);


protected:
    std::string accountId_;
    bool accountIdIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string organizationId_;
    bool organizationIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string failureReason_;
    bool failureReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CloseAccountStatusDto_H_
