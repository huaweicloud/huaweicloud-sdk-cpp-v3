
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QuerySwitchoverRatioInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QuerySwitchoverRatioInfo_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  QuerySwitchoverRatioInfo
    : public ModelBase
{
public:
    QuerySwitchoverRatioInfo();
    virtual ~QuerySwitchoverRatioInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuerySwitchoverRatioInfo members

    /// <summary>
    /// **参数解释：** 实例ID，可以调用“查询实例列表”接口获取。如果未申请实例，可以调用“创建实例”接口创建。 **取值范围：** 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 容灾切换的故障节点比例。 **取值范围：** - 50 - 60 - 70 - 80 - 90 - 100
    /// </summary>

    int32_t getSwitchoverRatio() const;
    bool switchoverRatioIsSet() const;
    void unsetswitchoverRatio();
    void setSwitchoverRatio(int32_t value);

    /// <summary>
    /// **参数解释：** 容灾实例数据同步时延，单位s。备实例和主实例同步时延超过该值时，不进行容灾倒换。默认不判断时延。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getSyncDelay() const;
    bool syncDelayIsSet() const;
    void unsetsyncDelay();
    void setSyncDelay(int64_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t switchoverRatio_;
    bool switchoverRatioIsSet_;
    int64_t syncDelay_;
    bool syncDelayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QuerySwitchoverRatioInfo_H_
