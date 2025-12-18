
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ExternalContactBase_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ExternalContactBase_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ExternalContactBase
    : public ModelBase
{
public:
    ExternalContactBase();
    virtual ~ExternalContactBase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExternalContactBase members

    /// <summary>
    /// 其他号码。 &gt; * 其他号码必须以国家码作为前缀 &gt; * otherNumber填写时，otherNumberCountry也必须填写 &gt; * 如果要清空手机号配置，则otherNumberCountry和otherNumber都要置为\&quot;\&quot; 
    /// </summary>

    std::string getOtherNumber() const;
    bool otherNumberIsSet() const;
    void unsetotherNumber();
    void setOtherNumber(const std::string& value);

    /// <summary>
    /// [[其他号码所属的国家](https://support.huaweicloud.com/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hws)[[手机号所属的国家](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hk) 。 
    /// </summary>

    std::string getOtherNumberCountry() const;
    bool otherNumberCountryIsSet() const;
    void unsetotherNumberCountry();
    void setOtherNumberCountry(const std::string& value);

    /// <summary>
    /// [[手机号所属的国家](https://support.huaweicloud.com/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hws)[[手机号所属的国家](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hk) 。 
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);

    /// <summary>
    /// 手机号。 &gt; * 手机号必须以国家码作为前缀 &gt; * phone填写时，country也必须填写 &gt; * 如果要清空手机号配置，则country和phone都要置为\&quot;\&quot; 
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 邮箱。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 公司名称。
    /// </summary>

    std::string getCorpName() const;
    bool corpNameIsSet() const;
    void unsetcorpName();
    void setCorpName(const std::string& value);

    /// <summary>
    /// 部门。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 职务。
    /// </summary>

    std::string getPosition() const;
    bool positionIsSet() const;
    void unsetposition();
    void setPosition(const std::string& value);

    /// <summary>
    /// 个人地址。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 备注。
    /// </summary>

    std::string getRemarks() const;
    bool remarksIsSet() const;
    void unsetremarks();
    void setRemarks(const std::string& value);


protected:
    std::string otherNumber_;
    bool otherNumberIsSet_;
    std::string otherNumberCountry_;
    bool otherNumberCountryIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string corpName_;
    bool corpNameIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string position_;
    bool positionIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string remarks_;
    bool remarksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ExternalContactBase_H_
