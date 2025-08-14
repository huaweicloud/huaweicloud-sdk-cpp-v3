
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceEvent_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceEvent_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/ServiceCommandPara.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 事件服务对象。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ServiceEvent
    : public ModelBase
{
public:
    ServiceEvent();
    virtual ~ServiceEvent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceEvent members

    /// <summary>
    /// **参数说明**：设备事件类型。注：设备服务内不允许重复。 **取值范围**：长度不超过32，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(const std::string& value);

    /// <summary>
    /// **参数说明**：设备事件的参数列表。
    /// </summary>

    std::vector<ServiceCommandPara>& getParas();
    bool parasIsSet() const;
    void unsetparas();
    void setParas(const std::vector<ServiceCommandPara>& value);


protected:
    std::string eventType_;
    bool eventTypeIsSet_;
    std::vector<ServiceCommandPara> paras_;
    bool parasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceEvent_H_
