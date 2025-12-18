
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CorpBasicDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CorpBasicDTO_H_


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
/// 企业的基本信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CorpBasicDTO
    : public ModelBase
{
public:
    CorpBasicDTO();
    virtual ~CorpBasicDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CorpBasicDTO members

    /// <summary>
    /// 企业名称，格式必须满足^[^#%&amp;&#39;+;&lt;&gt;&#x3D;\\\&quot;&#39;？?\\\\\\\\……/]*$。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 企业域名。
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 手机号，必须加上国家码，例如中国大陆手机+86xxxxxxx，当填写手机号时， “country”参数必填,手机格式必须满足(^$|^[+]?[0-9]+$)。
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// [[手机号所属的国家](https://support.huaweicloud.com/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hws)[[手机号所属的国家](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hk) 。 
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);

    /// <summary>
    /// 传真号码,格式必须满足(^$|^[+]?[0-9]+$)。
    /// </summary>

    std::string getFax() const;
    bool faxIsSet() const;
    void unsetfax();
    void setFax(const std::string& value);

    /// <summary>
    /// 邮箱地址,格式必须满足(^$|^[\\\\w-+]+(\\\\.[\\\\w-+]+)*@[\\\\w-]+(\\\\.[\\\\w-]+)*(\\\\.[\\\\w-]{1,})$)。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 地址。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 备注。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 企业归属的SP ID。仅在查询时返回。
    /// </summary>

    std::string getSpId() const;
    bool spIdIsSet() const;
    void unsetspId();
    void setSpId(const std::string& value);

    /// <summary>
    /// 企业提示音语言设置,zh-CN或en-US。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 时区Id设置,例如北京东8区timeZoneId值为56,时区Id和时区的对应关系请参考: [[时区表](https://support.huaweicloud.com/api-meeting/meeting_21_0110.html)](tag:hws)[[时区表](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0110.html)](tag:hk) 。 
    /// </summary>

    std::string getTimeZoneId() const;
    bool timeZoneIdIsSet() const;
    void unsettimeZoneId();
    void setTimeZoneId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string fax_;
    bool faxIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string spId_;
    bool spIdIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string timeZoneId_;
    bool timeZoneIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CorpBasicDTO_H_
