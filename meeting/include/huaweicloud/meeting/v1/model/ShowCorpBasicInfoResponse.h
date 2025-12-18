
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowCorpBasicInfoResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowCorpBasicInfoResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowCorpBasicInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCorpBasicInfoResponse();
    virtual ~ShowCorpBasicInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCorpBasicInfoResponse members

    /// <summary>
    /// 企业id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 企业名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 企业所在地。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 管理员名称。
    /// </summary>

    std::string getAdminName() const;
    bool adminNameIsSet() const;
    void unsetadminName();
    void setAdminName(const std::string& value);

    /// <summary>
    /// 管理员的华为云会议帐号。
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 管理员手机。
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
    /// 管理员邮箱。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 是否通过短信形式发送会议通知。
    /// </summary>

    bool isEnableSMS() const;
    bool enableSMSIsSet() const;
    void unsetenableSMS();
    void setEnableSMS(bool value);

    /// <summary>
    /// 是否开启云盘。
    /// </summary>

    bool isEnableCloudDisk() const;
    bool enableCloudDiskIsSet() const;
    void unsetenableCloudDisk();
    void setEnableCloudDisk(bool value);

    /// <summary>
    /// 是否具有pstn功能。
    /// </summary>

    bool isEnablePstn() const;
    bool enablePstnIsSet() const;
    void unsetenablePstn();
    void setEnablePstn(bool value);

    /// <summary>
    /// 是否支持自动开户。
    /// </summary>

    bool isAutoUserCreate() const;
    bool autoUserCreateIsSet() const;
    void unsetautoUserCreate();
    void setAutoUserCreate(bool value);

    /// <summary>
    /// 企业类型。 * 0：旗舰版 * 5：免费版 * 6：标准版 
    /// </summary>

    int32_t getCorpType() const;
    bool corpTypeIsSet() const;
    void unsetcorpType();
    void setCorpType(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string adminName_;
    bool adminNameIsSet_;
    std::string account_;
    bool accountIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string email_;
    bool emailIsSet_;
    bool enableSMS_;
    bool enableSMSIsSet_;
    bool enableCloudDisk_;
    bool enableCloudDiskIsSet_;
    bool enablePstn_;
    bool enablePstnIsSet_;
    bool autoUserCreate_;
    bool autoUserCreateIsSet_;
    int32_t corpType_;
    bool corpTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowCorpBasicInfoResponse_H_
