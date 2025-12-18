
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModAdminDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModAdminDTO_H_


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
/// 待修改的管理员信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ModAdminDTO
    : public ModelBase
{
public:
    ModAdminDTO();
    virtual ~ModAdminDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModAdminDTO members

    /// <summary>
    /// 名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 邮箱地址。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 手机号，必须加上国家码，例如中国大陆手机+86xxxxxxx，当填写手机号时 “country”参数必填。
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


protected:
    std::string name_;
    bool nameIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string country_;
    bool countryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModAdminDTO_H_
