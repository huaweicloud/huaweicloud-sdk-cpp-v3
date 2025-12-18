
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_VisionActiveCodeDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_VisionActiveCodeDTO_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  VisionActiveCodeDTO
    : public ModelBase
{
public:
    VisionActiveCodeDTO();
    virtual ~VisionActiveCodeDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VisionActiveCodeDTO members

    /// <summary>
    /// 终端类型。 - idea-hub：智能协作大屏 - huawei-vision：智慧屏TV - welink-desktop(iwb)：SmartRooms会议版 - smart-rooms：SmartRooms完整版 
    /// </summary>

    std::string getDevType() const;
    bool devTypeIsSet() const;
    void unsetdevType();
    void setDevType(const std::string& value);

    /// <summary>
    /// 部门编码，若不携带则默认根部门。
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 终端的名称。
    /// </summary>

    std::string getDevName() const;
    bool devNameIsSet() const;
    void unsetdevName();
    void setDevName(const std::string& value);

    /// <summary>
    /// 描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 号码信息，如果为手机号，必须加上国家码。 例如中国大陆手机+86xxxxxxx，当填写手机号时 “country”参数必填,手机格式必须满足(^$|^[+]?[0-9]+$) 
    /// </summary>

    std::string getSmsNumber() const;
    bool smsNumberIsSet() const;
    void unsetsmsNumber();
    void setSmsNumber(const std::string& value);

    /// <summary>
    /// [[手机号所属的国家](https://support.huaweicloud.com/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hws)[[手机号所属的国家](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hk) 。 
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);

    /// <summary>
    /// 邮箱地址。 &gt; 如无中国大陆手机号，则邮箱必填。 
    /// </summary>

    std::string getEmailAddr() const;
    bool emailAddrIsSet() const;
    void unsetemailAddr();
    void setEmailAddr(const std::string& value);


protected:
    std::string devType_;
    bool devTypeIsSet_;
    std::string deptCode_;
    bool deptCodeIsSet_;
    std::string devName_;
    bool devNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string smsNumber_;
    bool smsNumberIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string emailAddr_;
    bool emailAddrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_VisionActiveCodeDTO_H_
