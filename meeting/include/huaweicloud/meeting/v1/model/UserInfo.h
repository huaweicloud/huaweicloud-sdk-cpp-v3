
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserInfo_H_


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
/// 用户鉴权信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  UserInfo
    : public ModelBase
{
public:
    UserInfo();
    virtual ~UserInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserInfo members

    /// <summary>
    /// 用户UUID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 华为云会议帐号。
    /// </summary>

    std::string getUcloginAccount() const;
    bool ucloginAccountIsSet() const;
    void unsetucloginAccount();
    void setUcloginAccount(const std::string& value);

    /// <summary>
    /// 用户关联的SIP号码。 
    /// </summary>

    std::string getServiceAccount() const;
    bool serviceAccountIsSet() const;
    void unsetserviceAccount();
    void setServiceAccount(const std::string& value);

    /// <summary>
    /// 号码对应的HA1。
    /// </summary>

    std::string getNumberHA1() const;
    bool numberHA1IsSet() const;
    void unsetnumberHA1();
    void setNumberHA1(const std::string& value);

    /// <summary>
    /// 用户别名。
    /// </summary>

    std::string getAlias1() const;
    bool alias1IsSet() const;
    void unsetalias1();
    void setAlias1(const std::string& value);

    /// <summary>
    /// 用户归属的企业ID。
    /// </summary>

    std::string getCompanyId() const;
    bool companyIdIsSet() const;
    void unsetcompanyId();
    void setCompanyId(const std::string& value);

    /// <summary>
    /// 用户所在企业归属的SP ID。
    /// </summary>

    std::string getSpId() const;
    bool spIdIsSet() const;
    void unsetspId();
    void setSpId(const std::string& value);

    /// <summary>
    /// 企业域名。
    /// </summary>

    std::string getCompanyDomain() const;
    bool companyDomainIsSet() const;
    void unsetcompanyDomain();
    void setCompanyDomain(const std::string& value);

    /// <summary>
    /// 本地鉴权。
    /// </summary>

    std::string getRealm() const;
    bool realmIsSet() const;
    void unsetrealm();
    void setRealm(const std::string& value);

    /// <summary>
    /// 用户类型。 * 1：SP管理用户 * 2：企业用户 * 3：免费注册用户 * 10：企业设备用户 * 11：匿名用户 * 12：智慧屏用户 * 13：IdeaHub用户 * 14：电子白板（SmartRooms）用户 
    /// </summary>

    int32_t getUserType() const;
    bool userTypeIsSet() const;
    void unsetuserType();
    void setUserType(int32_t value);

    /// <summary>
    /// 管理员类型。 * 0：默认管理员 * 1：普通管理员 * 2：非管理员，即普通企业成员，userType为2时有效 
    /// </summary>

    int32_t getAdminType() const;
    bool adminTypeIsSet() const;
    void unsetadminType();
    void setAdminType(int32_t value);

    /// <summary>
    /// 用户名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户英文名称。
    /// </summary>

    std::string getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(const std::string& value);

    /// <summary>
    /// 标识是否绑定手机。
    /// </summary>

    bool isIsBindPhone() const;
    bool isBindPhoneIsSet() const;
    void unsetisBindPhone();
    void setIsBindPhone(bool value);

    /// <summary>
    /// 标识是否是免费试用用户。
    /// </summary>

    bool isFreeUser() const;
    bool freeUserIsSet() const;
    void unsetfreeUser();
    void setFreeUser(bool value);

    /// <summary>
    /// 第三方的用户帐号。
    /// </summary>

    std::string getThirdAccount() const;
    bool thirdAccountIsSet() const;
    void unsetthirdAccount();
    void setThirdAccount(const std::string& value);

    /// <summary>
    /// 智慧屏设备ID。
    /// </summary>

    std::string getVisionAccount() const;
    bool visionAccountIsSet() const;
    void unsetvisionAccount();
    void setVisionAccount(const std::string& value);

    /// <summary>
    /// 头像链接。
    /// </summary>

    std::string getHeadPictureUrl() const;
    bool headPictureUrlIsSet() const;
    void unsetheadPictureUrl();
    void setHeadPictureUrl(const std::string& value);

    /// <summary>
    /// 机机密码，用于智慧屏登录。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 用户状态。 * 0：正常 * 1：停用 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 付费用户机机帐号，用于智慧屏登录。
    /// </summary>

    std::string getPaidAccount() const;
    bool paidAccountIsSet() const;
    void unsetpaidAccount();
    void setPaidAccount(const std::string& value);

    /// <summary>
    /// 付费用户机机密码，用于智慧屏登录。
    /// </summary>

    std::string getPaidPassword() const;
    bool paidPasswordIsSet() const;
    void unsetpaidPassword();
    void setPaidPassword(const std::string& value);

    /// <summary>
    /// 标识是否是WeLink用户。
    /// </summary>

    bool isWeLinkUser() const;
    bool weLinkUserIsSet() const;
    void unsetweLinkUser();
    void setWeLinkUser(bool value);

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// tr069帐号。
    /// </summary>

    std::string getTr069Account() const;
    bool tr069AccountIsSet() const;
    void unsettr069Account();
    void setTr069Account(const std::string& value);

    /// <summary>
    /// 企业类型。 * 0：旗舰版 * 5：免费版 * 6：标准版 
    /// </summary>

    int32_t getCorpType() const;
    bool corpTypeIsSet() const;
    void unsetcorpType();
    void setCorpType(int32_t value);

    /// <summary>
    /// 华为云帐号ID。
    /// </summary>

    std::string getCloudUserId() const;
    bool cloudUserIdIsSet() const;
    void unsetcloudUserId();
    void setCloudUserId(const std::string& value);

    /// <summary>
    /// 标识是否是灰度用户。
    /// </summary>

    bool isGrayUser() const;
    bool grayUserIsSet() const;
    void unsetgrayUser();
    void setGrayUser(bool value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string ucloginAccount_;
    bool ucloginAccountIsSet_;
    std::string serviceAccount_;
    bool serviceAccountIsSet_;
    std::string numberHA1_;
    bool numberHA1IsSet_;
    std::string alias1_;
    bool alias1IsSet_;
    std::string companyId_;
    bool companyIdIsSet_;
    std::string spId_;
    bool spIdIsSet_;
    std::string companyDomain_;
    bool companyDomainIsSet_;
    std::string realm_;
    bool realmIsSet_;
    int32_t userType_;
    bool userTypeIsSet_;
    int32_t adminType_;
    bool adminTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    bool isBindPhone_;
    bool isBindPhoneIsSet_;
    bool freeUser_;
    bool freeUserIsSet_;
    std::string thirdAccount_;
    bool thirdAccountIsSet_;
    std::string visionAccount_;
    bool visionAccountIsSet_;
    std::string headPictureUrl_;
    bool headPictureUrlIsSet_;
    std::string password_;
    bool passwordIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string paidAccount_;
    bool paidAccountIsSet_;
    std::string paidPassword_;
    bool paidPasswordIsSet_;
    bool weLinkUser_;
    bool weLinkUserIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string tr069Account_;
    bool tr069AccountIsSet_;
    int32_t corpType_;
    bool corpTypeIsSet_;
    std::string cloudUserId_;
    bool cloudUserIdIsSet_;
    bool grayUser_;
    bool grayUserIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserInfo_H_
