
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SwitchToMasterDisasterRecoveryBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SwitchToMasterDisasterRecoveryBody_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  SwitchToMasterDisasterRecoveryBody
    : public ModelBase
{
public:
    SwitchToMasterDisasterRecoveryBody();
    virtual ~SwitchToMasterDisasterRecoveryBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SwitchToMasterDisasterRecoveryBody members

    /// <summary>
    /// 是否强制备实例升主。 若为True，则强制备实例升主，用于在主实例异常的状态下，快速恢复服务的场景：允许备实例强制升为特殊主实例，独立提供读写服务。 默认为False，用于正常状态下备实例平缓升主。
    /// </summary>

    bool isForce() const;
    bool forceIsSet() const;
    void unsetforce();
    void setForce(bool value);


protected:
    bool force_;
    bool forceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SwitchToMasterDisasterRecoveryBody_H_
