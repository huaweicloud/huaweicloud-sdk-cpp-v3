
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModUserDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModUserDTO_H_


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
/// 用户信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ModUserDTO
    : public ModelBase
{
public:
    ModUserDTO();
    virtual ~ModUserDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModUserDTO members

    /// <summary>
    /// 企业用户名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 企业用户的英文名称。
    /// </summary>

    std::string getEnglishName() const;
    bool englishNameIsSet() const;
    void unsetenglishName();
    void setEnglishName(const std::string& value);

    /// <summary>
    /// 手机号，必须加上国家码。 例如中国大陆手机为“+86xxxxxxxxxxx”。当填写手机号时 “country”参数必填。 手机号只允许输入纯数字。 说明：手机号或者邮箱至少填写一个。
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
    /// 个人会议ID，若不携带则后台默认生成。
    /// </summary>

    std::string getVmrId() const;
    bool vmrIdIsSet() const;
    void unsetvmrId();
    void setVmrId(const std::string& value);

    /// <summary>
    /// 部门编码，若不携带则默认根部门。 默认值：1
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

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
    /// 用户状态。默认值：0。 * 0：正常 * 1：停用
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 通讯录排序等级，序号越低优先级越高。 默认值：10000
    /// </summary>

    int32_t getSortLevel() const;
    bool sortLevelIsSet() const;
    void unsetsortLevel();
    void setSortLevel(int32_t value);

    /// <summary>
    /// 是否隐藏手机号码 默认值：false 
    /// </summary>

    bool isHidePhone() const;
    bool hidePhoneIsSet() const;
    void unsethidePhone();
    void setHidePhone(bool value);


protected:
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModUserDTO_H_
