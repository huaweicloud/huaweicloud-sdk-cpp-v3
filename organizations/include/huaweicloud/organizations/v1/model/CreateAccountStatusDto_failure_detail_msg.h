
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateAccountStatusDto_failure_detail_msg_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateAccountStatusDto_failure_detail_msg_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求失败详细原因
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  CreateAccountStatusDto_failure_detail_msg
    : public ModelBase
{
public:
    CreateAccountStatusDto_failure_detail_msg();
    virtual ~CreateAccountStatusDto_failure_detail_msg();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAccountStatusDto_failure_detail_msg members

    /// <summary>
    /// 透传错误码
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 透传鉴权失败信息
    /// </summary>

    std::string getEncodedAuthorizationMessage() const;
    bool encodedAuthorizationMessageIsSet() const;
    void unsetencodedAuthorizationMessage();
    void setEncodedAuthorizationMessage(const std::string& value);


protected:
    std::string errorMsg_;
    bool errorMsgIsSet_;
    std::string encodedAuthorizationMessage_;
    bool encodedAuthorizationMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateAccountStatusDto_failure_detail_msg_H_
