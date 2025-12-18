
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddDeviceDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddDeviceDTO_H_


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
/// 终端信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  AddDeviceDTO
    : public ModelBase
{
public:
    AddDeviceDTO();
    virtual ~AddDeviceDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddDeviceDTO members

    /// <summary>
    /// 终端名称，可以自定义，建议为具体位置，方便识别。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 终端型号，枚举类型。当前支持TE系列和部分第三方硬件终端，具体的终端类型可以通过[[获取所有终端类型](https://support.huaweicloud.com/api-meeting/meeting_21_0092.html)](tag:hws)[[获取所有终端类型](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0092.html)](tag:hk)接口查询。
    /// </summary>

    std::string getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const std::string& value);

    /// <summary>
    /// 终端SN码，仅可包含数字、字母和下划线。
    /// </summary>

    std::string getSn() const;
    bool snIsSet() const;
    void unsetsn();
    void setSn(const std::string& value);

    /// <summary>
    /// 投影码生成模式，默认为自动。 - 0：自动(该模式下根据消息上报的IP地址内部控制复杂度。   私网地址配置成简单模式，公网地址配置成复杂模式) - 1：简单 - 2：复杂
    /// </summary>

    int32_t getPrjCodeMode() const;
    bool prjCodeModeIsSet() const;
    void unsetprjCodeMode();
    void setPrjCodeMode(int32_t value);

    /// <summary>
    /// 部门编码，默认为根部门。 默认值：1。
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 手机号，必须加上国家码，例如中国大陆手机为“+86xxxxxxxxxxx”。当填写手机号时 “country”参数必填。 手机号只允许输入纯数字。 &gt; 手机号或者邮箱至少填写一个。
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
    /// 终端状态。默认值：0。 * 0：正常 * 1：冻结 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 是否发送邮件和短信通知。 * 0：不发送 * 不填或者其他值就发送
    /// </summary>

    std::string getSendNotify() const;
    bool sendNotifyIsSet() const;
    void unsetsendNotify();
    void setSendNotify(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string model_;
    bool modelIsSet_;
    std::string sn_;
    bool snIsSet_;
    int32_t prjCodeMode_;
    bool prjCodeModeIsSet_;
    std::string deptCode_;
    bool deptCodeIsSet_;
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
    std::string sendNotify_;
    bool sendNotifyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddDeviceDTO_H_
