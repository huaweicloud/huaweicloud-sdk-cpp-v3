
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseEmailOAuthProviderReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseEmailOAuthProviderReq_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SupabaseSMTPServerReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// enable_email_sign_up&#x3D;false时清空enable_email_auto_confirm和smtp_config。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SupabaseEmailOAuthProviderReq
    : public ModelBase
{
public:
    SupabaseEmailOAuthProviderReq();
    virtual ~SupabaseEmailOAuthProviderReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupabaseEmailOAuthProviderReq members

    /// <summary>
    /// 
    /// </summary>

    bool isEnableEmailSignUp() const;
    bool enableEmailSignUpIsSet() const;
    void unsetenableEmailSignUp();
    void setEnableEmailSignUp(bool value);

    /// <summary>
    /// 
    /// </summary>

    bool isEnableEmailAutoConfirm() const;
    bool enableEmailAutoConfirmIsSet() const;
    void unsetenableEmailAutoConfirm();
    void setEnableEmailAutoConfirm(bool value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseSMTPServerReq getSmtpConfig() const;
    bool smtpConfigIsSet() const;
    void unsetsmtpConfig();
    void setSmtpConfig(const SupabaseSMTPServerReq& value);


protected:
    bool enableEmailSignUp_;
    bool enableEmailSignUpIsSet_;
    bool enableEmailAutoConfirm_;
    bool enableEmailAutoConfirmIsSet_;
    SupabaseSMTPServerReq smtpConfig_;
    bool smtpConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseEmailOAuthProviderReq_H_
