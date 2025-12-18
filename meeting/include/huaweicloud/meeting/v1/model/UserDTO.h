
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  UserDTO
    : public ModelBase
{
public:
    UserDTO();
    virtual ~UserDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserDTO members

    /// <summary>
    /// 用户ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 查询用户详情时, 根据不同情况，响应不同。 * 0： 查询成功且用户信息有变化， 响应会把新的信息都返回回去 * 1 ：查询成功且用户信息没有变化，响应只会返回用户ID * 2 ：用户不存在 * 3 ：无权限查询这个用户 
    /// </summary>

    int32_t getStatusCode() const;
    bool statusCodeIsSet() const;
    void unsetstatusCode();
    void setStatusCode(int32_t value);

    /// <summary>
    /// 用户帐号。
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 用户名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 英文名。
    /// </summary>

    std::string getEnglishName() const;
    bool englishNameIsSet() const;
    void unsetenglishName();
    void setEnglishName(const std::string& value);

    /// <summary>
    /// 邮箱地址。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 用户手机。
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 用户部门。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 用户SIP号码。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 用户信息最后更新时间。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 是否为硬终端。 &gt; 该参数将被废弃，请勿使用。 
    /// </summary>

    bool isIsHardTerminal() const;
    bool isHardTerminalIsSet() const;
    void unsetisHardTerminal();
    void setIsHardTerminal(bool value);

    /// <summary>
    /// 用户虚拟会议室ID。
    /// </summary>

    std::string getVmrId() const;
    bool vmrIdIsSet() const;
    void unsetvmrId();
    void setVmrId(const std::string& value);

    /// <summary>
    /// 用户签名。
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
    /// 描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 是否隐藏手机号（如果为true，其他人查询该用户时，不会返回该用户的手机号。自己查自己是可见的）
    /// </summary>

    bool isHidePhone() const;
    bool hidePhoneIsSet() const;
    void unsethidePhone();
    void setHidePhone(bool value);

    /// <summary>
    /// 类型： * NORMAL_USER&#x3D;普通用户 * HARD_TERMINAL&#x3D;硬终端用户 * WHITE_BOARD&#x3D;第三方白板 * HW_VISION_MEMBER&#x3D;智慧屏 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 部门编码列表。
    /// </summary>

    std::vector<std::string>& getDeptCodes();
    bool deptCodesIsSet() const;
    void unsetdeptCodes();
    void setDeptCodes(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t statusCode_;
    bool statusCodeIsSet_;
    std::string account_;
    bool accountIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string englishName_;
    bool englishNameIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string number_;
    bool numberIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    bool isHardTerminal_;
    bool isHardTerminalIsSet_;
    std::string vmrId_;
    bool vmrIdIsSet_;
    std::string signature_;
    bool signatureIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool hidePhone_;
    bool hidePhoneIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> deptCodes_;
    bool deptCodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserDTO_H_
