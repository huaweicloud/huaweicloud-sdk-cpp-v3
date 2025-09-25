
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GpgKeyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GpgKeyDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  GpgKeyDto
    : public ModelBase
{
public:
    GpgKeyDto();
    virtual ~GpgKeyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GpgKeyDto members

    /// <summary>
    /// gpg名称
    /// </summary>

    std::string getGpgName() const;
    bool gpgNameIsSet() const;
    void unsetgpgName();
    void setGpgName(const std::string& value);

    /// <summary>
    /// 是否开启gpg认证
    /// </summary>

    bool isOpenGpgVerified() const;
    bool openGpgVerifiedIsSet() const;
    void unsetopenGpgVerified();
    void setOpenGpgVerified(bool value);

    /// <summary>
    /// gpg认证状态
    /// </summary>

    int32_t getVerificationStatus() const;
    bool verificationStatusIsSet() const;
    void unsetverificationStatus();
    void setVerificationStatus(int32_t value);

    /// <summary>
    /// gpg初始化id
    /// </summary>

    std::string getGpgPrimaryKeyId() const;
    bool gpgPrimaryKeyIdIsSet() const;
    void unsetgpgPrimaryKeyId();
    void setGpgPrimaryKeyId(const std::string& value);

    /// <summary>
    /// gpg昵称
    /// </summary>

    std::string getGpgNickName() const;
    bool gpgNickNameIsSet() const;
    void unsetgpgNickName();
    void setGpgNickName(const std::string& value);

    /// <summary>
    /// gpg租户昵称
    /// </summary>

    std::string getGpgTenantName() const;
    bool gpgTenantNameIsSet() const;
    void unsetgpgTenantName();
    void setGpgTenantName(const std::string& value);

    /// <summary>
    /// gpg用户名称
    /// </summary>

    std::string getGpgUserName() const;
    bool gpgUserNameIsSet() const;
    void unsetgpgUserName();
    void setGpgUserName(const std::string& value);


protected:
    std::string gpgName_;
    bool gpgNameIsSet_;
    bool openGpgVerified_;
    bool openGpgVerifiedIsSet_;
    int32_t verificationStatus_;
    bool verificationStatusIsSet_;
    std::string gpgPrimaryKeyId_;
    bool gpgPrimaryKeyIdIsSet_;
    std::string gpgNickName_;
    bool gpgNickNameIsSet_;
    std::string gpgTenantName_;
    bool gpgTenantNameIsSet_;
    std::string gpgUserName_;
    bool gpgUserNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GpgKeyDto_H_
