
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_OperateWindow_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_OperateWindow_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例维护时间窗，用户在变更实例规格时，可以指定在该时间窗内进行变更。 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  OperateWindow
    : public ModelBase
{
public:
    OperateWindow();
    virtual ~OperateWindow();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateWindow members

    /// <summary>
    /// **参数说明**：变更时间窗开始时间，UTC时间，格式为：\&quot;HH:mm\&quot; 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数说明**：变更时间窗结束时间，UTC时间，格式为：\&quot;HH:mm\&quot; 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_OperateWindow_H_
