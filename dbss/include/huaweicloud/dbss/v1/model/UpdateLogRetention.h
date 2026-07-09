
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateLogRetention_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateLogRetention_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改审计日志保存时间信息bean
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  UpdateLogRetention
    : public ModelBase
{
public:
    UpdateLogRetention();
    virtual ~UpdateLogRetention();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLogRetention members

    /// <summary>
    /// 设定的日志保存时间信息,正整数。
    /// </summary>

    int32_t getRetentionDays() const;
    bool retentionDaysIsSet() const;
    void unsetretentionDays();
    void setRetentionDays(int32_t value);


protected:
    int32_t retentionDays_;
    bool retentionDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateLogRetention_H_
