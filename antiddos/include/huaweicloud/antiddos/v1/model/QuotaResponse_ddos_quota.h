
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_QuotaResponse_ddos_quota_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_QuotaResponse_ddos_quota_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额信息
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  QuotaResponse_ddos_quota
    : public ModelBase
{
public:
    QuotaResponse_ddos_quota();
    virtual ~QuotaResponse_ddos_quota();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaResponse_ddos_quota members

    /// <summary>
    /// 当前用户已使用配额
    /// </summary>

    int32_t getCurrent() const;
    bool currentIsSet() const;
    void unsetcurrent();
    void setCurrent(int32_t value);

    /// <summary>
    /// 最大配额
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);


protected:
    int32_t current_;
    bool currentIsSet_;
    int32_t quota_;
    bool quotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_QuotaResponse_ddos_quota_H_
