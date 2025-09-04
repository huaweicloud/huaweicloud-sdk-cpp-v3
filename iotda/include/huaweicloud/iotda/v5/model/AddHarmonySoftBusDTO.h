
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddHarmonySoftBusDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddHarmonySoftBusDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建鸿蒙软总线组请求结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddHarmonySoftBusDTO
    : public ModelBase
{
public:
    AddHarmonySoftBusDTO();
    virtual ~AddHarmonySoftBusDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddHarmonySoftBusDTO members

    /// <summary>
    /// **参数说明**：鸿蒙软总线组名称，单个资源空间下不可重复。 **取值范围**：长度不超过64，只允许中文、字母、数字、以及_? &#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getBusName() const;
    bool busNameIsSet() const;
    void unsetbusName();
    void setBusName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备组ID，用于唯一标识一个设备组，在创建设备组时由物联网平台分配。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// **参数说明**：资源空间ID。此参数为非必选参数，存在多资源空间的用户需要使用该接口时，建议携带该参数指定创建的设备组归属到哪个资源空间下，否则创建的设备组将会归属到[默认资源空间](https://support.huaweicloud.com/usermanual-iothub/iot_01_0006.html#section0)下。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);


protected:
    std::string busName_;
    bool busNameIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddHarmonySoftBusDTO_H_
