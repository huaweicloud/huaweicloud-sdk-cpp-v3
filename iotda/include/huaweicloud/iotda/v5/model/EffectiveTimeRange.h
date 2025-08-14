
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_EffectiveTimeRange_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_EffectiveTimeRange_H_


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
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  EffectiveTimeRange
    : public ModelBase
{
public:
    EffectiveTimeRange();
    virtual ~EffectiveTimeRange();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EffectiveTimeRange members

    /// <summary>
    /// 设备代理开始生效的时间，使用UTC时区，格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 设备代理失效的时间，必须大于start_time，使用UTC时区，格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_EffectiveTimeRange_H_
