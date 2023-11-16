
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ListUnblockQuotaStatisticsResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ListUnblockQuotaStatisticsResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ListUnblockQuotaStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUnblockQuotaStatisticsResponse();
    virtual ~ListUnblockQuotaStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUnblockQuotaStatisticsResponse members

    /// <summary>
    /// 用户类型：common_user , native_protection_user
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 解封总配额
    /// </summary>

    int32_t getTotalUnblockingQuota() const;
    bool totalUnblockingQuotaIsSet() const;
    void unsettotalUnblockingQuota();
    void setTotalUnblockingQuota(int32_t value);

    /// <summary>
    /// 剩余解封配额
    /// </summary>

    int32_t getRemainingUnblockingQuota() const;
    bool remainingUnblockingQuotaIsSet() const;
    void unsetremainingUnblockingQuota();
    void setRemainingUnblockingQuota(int32_t value);

    /// <summary>
    /// 今日解封配额
    /// </summary>

    int32_t getUnblockingQuotaToday() const;
    bool unblockingQuotaTodayIsSet() const;
    void unsetunblockingQuotaToday();
    void setUnblockingQuotaToday(int32_t value);

    /// <summary>
    /// 今日剩余解封配额
    /// </summary>

    int32_t getRemainingUnblockingQuotaToday() const;
    bool remainingUnblockingQuotaTodayIsSet() const;
    void unsetremainingUnblockingQuotaToday();
    void setRemainingUnblockingQuotaToday(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t totalUnblockingQuota_;
    bool totalUnblockingQuotaIsSet_;
    int32_t remainingUnblockingQuota_;
    bool remainingUnblockingQuotaIsSet_;
    int32_t unblockingQuotaToday_;
    bool unblockingQuotaTodayIsSet_;
    int32_t remainingUnblockingQuotaToday_;
    bool remainingUnblockingQuotaTodayIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ListUnblockQuotaStatisticsResponse_H_
