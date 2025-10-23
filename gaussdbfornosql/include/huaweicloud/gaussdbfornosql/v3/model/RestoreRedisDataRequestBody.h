
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RestoreRedisDataRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RestoreRedisDataRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/RecoveryInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 参数解释： 恢复到已有实例的请求body。 约束限制： 不涉及。 取值范围： 不涉及。 默认取值： 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RestoreRedisDataRequestBody
    : public ModelBase
{
public:
    RestoreRedisDataRequestBody();
    virtual ~RestoreRedisDataRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreRedisDataRequestBody members

    /// <summary>
    /// 
    /// </summary>

    RecoveryInfo getRecoveryInfo() const;
    bool recoveryInfoIsSet() const;
    void unsetrecoveryInfo();
    void setRecoveryInfo(const RecoveryInfo& value);


protected:
    RecoveryInfo recoveryInfo_;
    bool recoveryInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RestoreRedisDataRequestBody_H_
