
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_FailoverStrategyRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_FailoverStrategyRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  FailoverStrategyRequest
    : public ModelBase
{
public:
    FailoverStrategyRequest();
    virtual ~FailoverStrategyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailoverStrategyRequest members

    /// <summary>
    /// 可用性策略，可选择如下方式： - reliability：可靠性优先，数据库应该尽可能保障数据的可靠性，即数据丢失量最少。对于数据一致性要求较高的业务，建议选择该策略。 - availability：可用性优先，数据库应该可快恢复服务，即可用时间最长。对于数据库在线时间要求较高的业务，建议选择该策略。
    /// </summary>

    std::string getRepairStrategy() const;
    bool repairStrategyIsSet() const;
    void unsetrepairStrategy();
    void setRepairStrategy(const std::string& value);


protected:
    std::string repairStrategy_;
    bool repairStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_FailoverStrategyRequest_H_
