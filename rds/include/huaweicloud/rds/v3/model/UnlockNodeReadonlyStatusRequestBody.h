
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UnlockNodeReadonlyStatusRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UnlockNodeReadonlyStatusRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 解除只读请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UnlockNodeReadonlyStatusRequestBody
    : public ModelBase
{
public:
    UnlockNodeReadonlyStatusRequestBody();
    virtual ~UnlockNodeReadonlyStatusRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnlockNodeReadonlyStatusRequestBody members

    /// <summary>
    /// Ha保持不再设置节点只读状态的时间，单位为分钟。
    /// </summary>

    int32_t getStatusPreservationTime() const;
    bool statusPreservationTimeIsSet() const;
    void unsetstatusPreservationTime();
    void setStatusPreservationTime(int32_t value);


protected:
    int32_t statusPreservationTime_;
    bool statusPreservationTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UnlockNodeReadonlyStatusRequestBody_H_
