
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowDeviceDetailResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowDeviceDetailResponse_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowDeviceDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDeviceDetailResponse();
    virtual ~ShowDeviceDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDeviceDetailResponse members

    /// <summary>
    /// 终端名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 终端类型，区分自研和第三方终端。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 终端型号，枚举类型。当前支持TE系列和部分第三方硬件终端，具体的终端类型可以通过[[获取所有终端类型](https://support.huaweicloud.com/api-meeting/meeting_21_0092.html)](tag:hws)[[获取所有终端类型](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0092.html)](tag:hk)接口查询。
    /// </summary>

    std::string getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const std::string& value);

    /// <summary>
    /// 终端SN号，仅可包含数字、字母和下划线。
    /// </summary>

    std::string getSn() const;
    bool snIsSet() const;
    void unsetsn();
    void setSn(const std::string& value);

    /// <summary>
    /// 硬终端对应的内置帐号。
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 终端绑定的号码。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 投影码生成模式。 * 0：自动(该模式下根据消息上报的IP地址内部控制复杂度：私网地址配置成简单模式；公网地址配置成复杂模式) * 1：简单 * 2：复杂 
    /// </summary>

    int32_t getPrjCodeMode() const;
    bool prjCodeModeIsSet() const;
    void unsetprjCodeMode();
    void setPrjCodeMode(int32_t value);

    /// <summary>
    /// 部门编码。
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 部门名称路径。
    /// </summary>

    std::string getDeptNamePath() const;
    bool deptNamePathIsSet() const;
    void unsetdeptNamePath();
    void setDeptNamePath(const std::string& value);

    /// <summary>
    /// 手机号。
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
    /// 终端描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 终端状态。 * 0、正常 * 1、停用\&quot; 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string model_;
    bool modelIsSet_;
    std::string sn_;
    bool snIsSet_;
    std::string account_;
    bool accountIsSet_;
    std::string number_;
    bool numberIsSet_;
    int32_t prjCodeMode_;
    bool prjCodeModeIsSet_;
    std::string deptCode_;
    bool deptCodeIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string deptNamePath_;
    bool deptNamePathIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowDeviceDetailResponse_H_
