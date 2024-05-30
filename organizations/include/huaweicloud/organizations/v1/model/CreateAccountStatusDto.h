
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateAccountStatusDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateAccountStatusDto_H_


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
/// 包含有关在组织中创建账号的CreateAccount请求的状态。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  CreateAccountStatusDto
    : public ModelBase
{
public:
    CreateAccountStatusDto();
    virtual ~CreateAccountStatusDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAccountStatusDto members

    /// <summary>
    /// 如果账号创建成功，则为新账号的唯一标识符（ID）。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 账号名称
    /// </summary>

    std::string getAccountName() const;
    bool accountNameIsSet() const;
    void unsetaccountName();
    void setAccountName(const std::string& value);

    /// <summary>
    /// 创建账号和完成请求的日期和时间。
    /// </summary>

    utility::datetime getCompletedAt() const;
    bool completedAtIsSet() const;
    void unsetcompletedAt();
    void setCompletedAt(const utility::datetime& value);

    /// <summary>
    /// 请求创建账号的日期和时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 请求的唯一标识符（ID）。您可以从创建账号的初始CreateAccount请求的响应中获得此值。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 创建账号的异步请求的状态，in_progress：处理中，succeeded：成功，failed：失败。
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
    std::string accountName_;
    bool accountNameIsSet_;
    utility::datetime completedAt_;
    bool completedAtIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    std::string id_;
    bool idIsSet_;
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

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateAccountStatusDto_H_
