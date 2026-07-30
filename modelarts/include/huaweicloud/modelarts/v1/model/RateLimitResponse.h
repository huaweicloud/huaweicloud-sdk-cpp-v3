
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RateLimitResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RateLimitResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 流量控制配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RateLimitResponse
    : public ModelBase
{
public:
    RateLimitResponse();
    virtual ~RateLimitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RateLimitResponse members

    /// <summary>
    /// **参数解释：** 服务流量限制是指指定单位内一个服务能够被访问的次数上限。 **取值范围：** 1-10000。
    /// </summary>

    int32_t getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(int32_t value);

    /// <summary>
    /// **参数解释：** 流量限制单元。 **取值范围：** - NANOS（纳秒）。 - MICROS（微秒）。 - MILLIS（毫秒）。 - SECONDS（秒）。 - MINUTES（分钟）。 - HOURS（小时）。 - DAYS（天）。
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    int32_t num_;
    bool numIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RateLimitResponse_H_
