
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseApiSMTPServer_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseApiSMTPServer_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询响应不含smtp_pwd。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SupabaseApiSMTPServer
    : public ModelBase
{
public:
    SupabaseApiSMTPServer();
    virtual ~SupabaseApiSMTPServer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupabaseApiSMTPServer members

    /// <summary>
    /// 
    /// </summary>

    std::string getSmtpHost() const;
    bool smtpHostIsSet() const;
    void unsetsmtpHost();
    void setSmtpHost(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getSmtpPort() const;
    bool smtpPortIsSet() const;
    void unsetsmtpPort();
    void setSmtpPort(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSmtpUser() const;
    bool smtpUserIsSet() const;
    void unsetsmtpUser();
    void setSmtpUser(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSmtpAdminEmail() const;
    bool smtpAdminEmailIsSet() const;
    void unsetsmtpAdminEmail();
    void setSmtpAdminEmail(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSmtpSenderName() const;
    bool smtpSenderNameIsSet() const;
    void unsetsmtpSenderName();
    void setSmtpSenderName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getSmtpMaxFrequency() const;
    bool smtpMaxFrequencyIsSet() const;
    void unsetsmtpMaxFrequency();
    void setSmtpMaxFrequency(int32_t value);


protected:
    std::string smtpHost_;
    bool smtpHostIsSet_;
    int32_t smtpPort_;
    bool smtpPortIsSet_;
    std::string smtpUser_;
    bool smtpUserIsSet_;
    std::string smtpAdminEmail_;
    bool smtpAdminEmailIsSet_;
    std::string smtpSenderName_;
    bool smtpSenderNameIsSet_;
    int32_t smtpMaxFrequency_;
    bool smtpMaxFrequencyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseApiSMTPServer_H_
