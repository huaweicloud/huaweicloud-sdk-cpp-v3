
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ActiveDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ActiveDTO_H_


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
/// 设备联系人信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ActiveDTO
    : public ModelBase
{
public:
    ActiveDTO();
    virtual ~ActiveDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActiveDTO members

    /// <summary>
    /// 手机号。 例如中国大陆手机+86xxxxxxxxxxx。当填写手机号时 “country”参数必填。 &gt; 号码和邮箱必须填一个，若企业未开启短信功能，则邮箱必填。 
    /// </summary>

    std::string getSmsNumber() const;
    bool smsNumberIsSet() const;
    void unsetsmsNumber();
    void setSmsNumber(const std::string& value);

    /// <summary>
    /// [[手机号所属的国家](https://support.huaweicloud.com/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hws)[[手机号所属的国家](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hk) 。 
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);

    /// <summary>
    /// 邮件地址。 &gt; 号码和邮箱必须填一个，若企业未开启短信功能，则邮箱必填。 
    /// </summary>

    std::string getEmailAddr() const;
    bool emailAddrIsSet() const;
    void unsetemailAddr();
    void setEmailAddr(const std::string& value);


protected:
    std::string smsNumber_;
    bool smsNumberIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string emailAddr_;
    bool emailAddrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ActiveDTO_H_
