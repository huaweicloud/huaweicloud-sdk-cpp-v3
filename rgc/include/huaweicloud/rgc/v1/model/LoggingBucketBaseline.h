
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_LoggingBucketBaseline_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_LoggingBucketBaseline_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志基础设置。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  LoggingBucketBaseline
    : public ModelBase
{
public:
    LoggingBucketBaseline();
    virtual ~LoggingBucketBaseline();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LoggingBucketBaseline members

    /// <summary>
    /// 桶保留天数。
    /// </summary>

    int32_t getRetentionDays() const;
    bool retentionDaysIsSet() const;
    void unsetretentionDays();
    void setRetentionDays(int32_t value);

    /// <summary>
    /// 是否允许多AZ存储。
    /// </summary>

    bool isEnableMultiAz() const;
    bool enableMultiAzIsSet() const;
    void unsetenableMultiAz();
    void setEnableMultiAz(bool value);


protected:
    int32_t retentionDays_;
    bool retentionDaysIsSet_;
    bool enableMultiAz_;
    bool enableMultiAzIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_LoggingBucketBaseline_H_
