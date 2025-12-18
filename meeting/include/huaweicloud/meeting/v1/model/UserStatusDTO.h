
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserStatusDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserStatusDTO_H_


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
/// 终端状态信息
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  UserStatusDTO
    : public ModelBase
{
public:
    UserStatusDTO();
    virtual ~UserStatusDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserStatusDTO members

    /// <summary>
    /// 终端号码
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 注册状态。 * 1：是未注册上 * 0：是已注册 
    /// </summary>

    std::string getRegStatus() const;
    bool regStatusIsSet() const;
    void unsetregStatus();
    void setRegStatus(const std::string& value);

    /// <summary>
    /// 呼叫状态。 * 0：未上线 * 1：空闲中 * 2：使用中 * 3：非会议硬终端统一的无效值 
    /// </summary>

    std::string getCallStatus() const;
    bool callStatusIsSet() const;
    void unsetcallStatus();
    void setCallStatus(const std::string& value);


protected:
    std::string number_;
    bool numberIsSet_;
    std::string regStatus_;
    bool regStatusIsSet_;
    std::string callStatus_;
    bool callStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserStatusDTO_H_
