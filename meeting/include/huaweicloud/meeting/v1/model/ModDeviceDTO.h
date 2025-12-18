
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModDeviceDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModDeviceDTO_H_


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
/// 修改的终端参数。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ModDeviceDTO
    : public ModelBase
{
public:
    ModDeviceDTO();
    virtual ~ModDeviceDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModDeviceDTO members

    /// <summary>
    /// 终端名称，建议为具体位置。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 投影码生成模式，默认为自动。 * 0：自动(该模式下根据消息上报的IP地址内部控制复杂度。   私网地址配置成简单模式，公网地址配置成复杂模式) * 1：简单 * 2：复杂
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
    /// 手机号，必须加上国家码。 例如中国大陆手机为“+86xxxxxxxxxxx”，当填写手机号时 “country”参数必填。 手机号只允许输入纯数字。 &gt; 手机号或者邮箱至少填写一个。
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
    /// 终端状态。 * 0：正常 * 1：冻结 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModDeviceDTO_H_
