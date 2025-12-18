
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchUserResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchUserResultDTO_H_


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
/// 分页查询企业用户信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchUserResultDTO
    : public ModelBase
{
public:
    SearchUserResultDTO();
    virtual ~SearchUserResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchUserResultDTO members

    /// <summary>
    /// 用户UUID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 华为云会议帐号。
    /// </summary>

    std::string getUserAccount() const;
    bool userAccountIsSet() const;
    void unsetuserAccount();
    void setUserAccount(const std::string& value);

    /// <summary>
    /// 名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 英文名称。
    /// </summary>

    std::string getEnglishName() const;
    bool englishNameIsSet() const;
    void unsetenglishName();
    void setEnglishName(const std::string& value);

    /// <summary>
    /// 联系电话。
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
    /// 邮箱地址。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 个人会议ID。
    /// </summary>

    std::string getVmrId() const;
    bool vmrIdIsSet() const;
    void unsetvmrId();
    void setVmrId(const std::string& value);

    /// <summary>
    /// 部门编码。
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 部门完整名称。
    /// </summary>

    std::string getDeptNamePath() const;
    bool deptNamePathIsSet() const;
    void unsetdeptNamePath();
    void setDeptNamePath(const std::string& value);

    /// <summary>
    /// 用户类型。 * 2：普通用户 * 12：智慧屏用户 * 13：IdeaHub用户 * 14：SmartRooms用户
    /// </summary>

    int32_t getUserType() const;
    bool userTypeIsSet() const;
    void unsetuserType();
    void setUserType(int32_t value);

    /// <summary>
    /// 管理员类型。 - 0：默认（超级）管理员 - 1：普通管理员 - 2：非管理员（即为普通企业成员，UserType是2时有效）
    /// </summary>

    int32_t getAdminType() const;
    bool adminTypeIsSet() const;
    void unsetadminType();
    void setAdminType(int32_t value);

    /// <summary>
    /// 签名。
    /// </summary>

    std::string getSignature() const;
    bool signatureIsSet() const;
    void unsetsignature();
    void setSignature(const std::string& value);

    /// <summary>
    /// 职位。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 备注。
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);

    /// <summary>
    /// 用户状态。 * 0：正常 * 1：停用 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 通讯录排序等级，序号越低优先级越高。
    /// </summary>

    int32_t getSortLevel() const;
    bool sortLevelIsSet() const;
    void unsetsortLevel();
    void setSortLevel(int32_t value);

    /// <summary>
    /// 是否隐藏手机号码。
    /// </summary>

    bool isHidePhone() const;
    bool hidePhoneIsSet() const;
    void unsethidePhone();
    void setHidePhone(bool value);

    /// <summary>
    /// 第三方User ID。
    /// </summary>

    std::string getThirdAccount() const;
    bool thirdAccountIsSet() const;
    void unsetthirdAccount();
    void setThirdAccount(const std::string& value);

    /// <summary>
    /// 智慧屏帐号。
    /// </summary>

    std::string getVisionAccount() const;
    bool visionAccountIsSet() const;
    void unsetvisionAccount();
    void setVisionAccount(const std::string& value);

    /// <summary>
    /// 许可证。 * 0：商用 * 1：免费试用 
    /// </summary>

    int32_t getLicense() const;
    bool licenseIsSet() const;
    void unsetlicense();
    void setLicense(int32_t value);

    /// <summary>
    /// 激活时间，utc时间戳。
    /// </summary>

    int64_t getActiveTime() const;
    bool activeTimeIsSet() const;
    void unsetactiveTime();
    void setActiveTime(int64_t value);

    /// <summary>
    /// 激活码到期时间,utc时间戳。
    /// </summary>

    int64_t getActiveCodeExpireTime() const;
    bool activeCodeExpireTimeIsSet() const;
    void unsetactiveCodeExpireTime();
    void setActiveCodeExpireTime(int64_t value);

    /// <summary>
    /// 已激活的终端到期时间,utc时间戳。
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);

    /// <summary>
    /// 激活码。
    /// </summary>

    std::string getActiveCode() const;
    bool activeCodeIsSet() const;
    void unsetactiveCode();
    void setActiveCode(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string userAccount_;
    bool userAccountIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string englishName_;
    bool englishNameIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string vmrId_;
    bool vmrIdIsSet_;
    std::string deptCode_;
    bool deptCodeIsSet_;
    std::string deptNamePath_;
    bool deptNamePathIsSet_;
    int32_t userType_;
    bool userTypeIsSet_;
    int32_t adminType_;
    bool adminTypeIsSet_;
    std::string signature_;
    bool signatureIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string desc_;
    bool descIsSet_;
    int32_t status_;
    bool statusIsSet_;
    int32_t sortLevel_;
    bool sortLevelIsSet_;
    bool hidePhone_;
    bool hidePhoneIsSet_;
    std::string thirdAccount_;
    bool thirdAccountIsSet_;
    std::string visionAccount_;
    bool visionAccountIsSet_;
    int32_t license_;
    bool licenseIsSet_;
    int64_t activeTime_;
    bool activeTimeIsSet_;
    int64_t activeCodeExpireTime_;
    bool activeCodeExpireTimeIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;
    std::string activeCode_;
    bool activeCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchUserResultDTO_H_
