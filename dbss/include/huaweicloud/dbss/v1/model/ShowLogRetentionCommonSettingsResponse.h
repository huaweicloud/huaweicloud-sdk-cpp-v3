
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowLogRetentionCommonSettingsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowLogRetentionCommonSettingsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/CommonSettingsResponse_log_retention.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowLogRetentionCommonSettingsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLogRetentionCommonSettingsResponse();
    virtual ~ShowLogRetentionCommonSettingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLogRetentionCommonSettingsResponse members

    /// <summary>
    /// 
    /// </summary>

    CommonSettingsResponse_log_retention getLogRetention() const;
    bool logRetentionIsSet() const;
    void unsetlogRetention();
    void setLogRetention(const CommonSettingsResponse_log_retention& value);

    /// <summary>
    /// 日志存储磁盘占用上限
    /// </summary>

    int32_t getDataUsageLimit() const;
    bool dataUsageLimitIsSet() const;
    void unsetdataUsageLimit();
    void setDataUsageLimit(int32_t value);


protected:
    CommonSettingsResponse_log_retention logRetention_;
    bool logRetentionIsSet_;
    int32_t dataUsageLimit_;
    bool dataUsageLimitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowLogRetentionCommonSettingsResponse_H_
