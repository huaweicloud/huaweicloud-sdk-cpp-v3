
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRecoveryTimeWindowResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRecoveryTimeWindowResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowRecoveryTimeWindowResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRecoveryTimeWindowResponse();
    virtual ~ShowRecoveryTimeWindowResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRecoveryTimeWindowResponse members

    /// <summary>
    /// 恢复时间窗左边界（不包含）
    /// </summary>

    std::string getRecoveryMinTime() const;
    bool recoveryMinTimeIsSet() const;
    void unsetrecoveryMinTime();
    void setRecoveryMinTime(const std::string& value);

    /// <summary>
    /// 恢复时间窗右边界（包含）
    /// </summary>

    std::string getRecoveryMaxTime() const;
    bool recoveryMaxTimeIsSet() const;
    void unsetrecoveryMaxTime();
    void setRecoveryMaxTime(const std::string& value);


protected:
    std::string recoveryMinTime_;
    bool recoveryMinTimeIsSet_;
    std::string recoveryMaxTime_;
    bool recoveryMaxTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRecoveryTimeWindowResponse_H_
