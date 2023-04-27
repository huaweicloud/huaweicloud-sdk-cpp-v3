
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogGroupParams_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogGroupParams_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改日志组的参数。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateLogGroupParams
    : public ModelBase
{
public:
    UpdateLogGroupParams();
    virtual ~UpdateLogGroupParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateLogGroupParams members

    /// <summary>
    /// 日志存储时间 天。 取值范围为 [1, 30]
    /// </summary>

    int32_t getTtlInDays() const;
    bool ttlInDaysIsSet() const;
    void unsetttlInDays();
    void setTtlInDays(int32_t value);


protected:
    int32_t ttlInDays_;
    bool ttlInDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogGroupParams_H_
