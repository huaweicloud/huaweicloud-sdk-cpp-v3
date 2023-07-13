
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchLimitSpeedReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchLimitSpeedReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/LimitSpeedReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchLimitSpeedReq
    : public ModelBase
{
public:
    BatchLimitSpeedReq();
    virtual ~BatchLimitSpeedReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchLimitSpeedReq members

    /// <summary>
    /// 灾备限速设置信息
    /// </summary>

    std::vector<LimitSpeedReq>& getSpeedLimits();
    bool speedLimitsIsSet() const;
    void unsetspeedLimits();
    void setSpeedLimits(const std::vector<LimitSpeedReq>& value);


protected:
    std::vector<LimitSpeedReq> speedLimits_;
    bool speedLimitsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchLimitSpeedReq_H_
