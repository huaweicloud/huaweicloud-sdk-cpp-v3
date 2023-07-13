
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretForScheduleRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretForScheduleRequestBody_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  DeleteSecretForScheduleRequestBody
    : public ModelBase
{
public:
    DeleteSecretForScheduleRequestBody();
    virtual ~DeleteSecretForScheduleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteSecretForScheduleRequestBody members

    /// <summary>
    /// 创建定时删除凭据的任务，且指定可恢复的天数。  约束：7~30。  默认值：30。 
    /// </summary>

    int32_t getRecoveryWindowInDays() const;
    bool recoveryWindowInDaysIsSet() const;
    void unsetrecoveryWindowInDays();
    void setRecoveryWindowInDays(int32_t value);


protected:
    int32_t recoveryWindowInDays_;
    bool recoveryWindowInDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretForScheduleRequestBody_H_
