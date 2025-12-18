
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_VerificationCodeDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_VerificationCodeDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 验证码信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  VerificationCodeDTO
    : public ModelBase
{
public:
    VerificationCodeDTO();
    virtual ~VerificationCodeDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerificationCodeDTO members

    /// <summary>
    /// 后台自动识别是手机号还是邮箱。 如果为手机号，必须加上国家码，例如中国大陆手机为“+86xxxxxxxxxxx”，当填写手机号时 “country”参数必填。 
    /// </summary>

    std::string getContact() const;
    bool contactIsSet() const;
    void unsetcontact();
    void setContact(const std::string& value);

    /// <summary>
    /// 验证码，在校验的场景时需要携带。
    /// </summary>

    std::string getVerificationCode() const;
    bool verificationCodeIsSet() const;
    void unsetverificationCode();
    void setVerificationCode(const std::string& value);

    /// <summary>
    /// [[手机号所属的国家](https://support.huaweicloud.com/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hws)[[手机号所属的国家](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hk) 。 
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);


protected:
    std::string contact_;
    bool contactIsSet_;
    std::string verificationCode_;
    bool verificationCodeIsSet_;
    std::string country_;
    bool countryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_VerificationCodeDTO_H_
