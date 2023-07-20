
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_BalancerActiveWindow_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_BalancerActiveWindow_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 活动时间窗设置。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  BalancerActiveWindow
    : public ModelBase
{
public:
    BalancerActiveWindow();
    virtual ~BalancerActiveWindow();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BalancerActiveWindow members

    /// <summary>
    /// 活动时间窗开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 活动时间窗结束时间。
    /// </summary>

    std::string getStopTime() const;
    bool stopTimeIsSet() const;
    void unsetstopTime();
    void setStopTime(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string stopTime_;
    bool stopTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_BalancerActiveWindow_H_
