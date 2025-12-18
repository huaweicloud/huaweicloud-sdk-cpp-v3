
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModVmrDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModVmrDTO_H_


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
/// 用户修改云会议室或者个人会议ID信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ModVmrDTO
    : public ModelBase
{
public:
    ModVmrDTO();
    virtual ~ModVmrDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModVmrDTO members

    /// <summary>
    /// 云会议室名称。 
    /// </summary>

    std::string getVmrName() const;
    bool vmrNameIsSet() const;
    void unsetvmrName();
    void setVmrName(const std::string& value);

    /// <summary>
    /// 来宾密码，设置为空字符串代表不设置来宾密码。 4~16位的数字 
    /// </summary>

    std::string getGustPwd() const;
    bool gustPwdIsSet() const;
    void unsetgustPwd();
    void setGustPwd(const std::string& value);

    /// <summary>
    /// 主持人密码。4~16位的数字。 
    /// </summary>

    std::string getChairPwd() const;
    bool chairPwdIsSet() const;
    void unsetchairPwd();
    void setChairPwd(const std::string& value);

    /// <summary>
    /// 是否允许来宾先入会。
    /// </summary>

    bool isAllowGustFirst() const;
    bool allowGustFirstIsSet() const;
    void unsetallowGustFirst();
    void setAllowGustFirst(bool value);

    /// <summary>
    /// 云会议室被使用后是否通知会议室所有者。
    /// </summary>

    bool isGustFirstNotice() const;
    bool gustFirstNoticeIsSet() const;
    void unsetgustFirstNotice();
    void setGustFirstNotice(bool value);


protected:
    std::string vmrName_;
    bool vmrNameIsSet_;
    std::string gustPwd_;
    bool gustPwdIsSet_;
    std::string chairPwd_;
    bool chairPwdIsSet_;
    bool allowGustFirst_;
    bool allowGustFirstIsSet_;
    bool gustFirstNotice_;
    bool gustFirstNoticeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModVmrDTO_H_
