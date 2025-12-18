
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublishDeviceResponseDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublishDeviceResponseDTO_H_


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
/// 发布的设备信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  PublishDeviceResponseDTO
    : public ModelBase
{
public:
    PublishDeviceResponseDTO();
    virtual ~PublishDeviceResponseDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublishDeviceResponseDTO members

    /// <summary>
    /// 设备用户ID。
    /// </summary>

    std::string getDeviceUserId() const;
    bool deviceUserIdIsSet() const;
    void unsetdeviceUserId();
    void setDeviceUserId(const std::string& value);

    /// <summary>
    /// 设备名称。
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);


protected:
    std::string deviceUserId_;
    bool deviceUserIdIsSet_;
    std::string deviceName_;
    bool deviceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublishDeviceResponseDTO_H_
