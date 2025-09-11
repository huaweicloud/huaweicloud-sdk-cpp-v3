
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAlarmStatisticsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAlarmStatisticsRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowAlarmStatisticsRequest
    : public ModelBase
{
public:
    ShowAlarmStatisticsRequest();
    virtual ~ShowAlarmStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAlarmStatisticsRequest members

    /// <summary>
    /// **参数解释**: 语言。 **约束限制**: 不涉及。 **取值范围**: - zh-cn  - en-us  **默认取值**: en-us
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**: 查询开始时间。 **约束限制**: 最多可以统计最近7天的数据。 **取值范围**: 格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **默认取值**: 不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 告警数量最多的实例的个数。 **约束限制**: 不涉及。 **取值范围**: 取值必须大于0。 **默认取值**: 5
    /// </summary>

    int32_t getTopNum() const;
    bool topNumIsSet() const;
    void unsettopNum();
    void setTopNum(int32_t value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t topNum_;
    bool topNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAlarmStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAlarmStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAlarmStatisticsRequest_H_
