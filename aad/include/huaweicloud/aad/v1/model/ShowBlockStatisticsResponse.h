
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ShowBlockStatisticsResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ShowBlockStatisticsResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_AAD_V1_EXPORT  ShowBlockStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBlockStatisticsResponse();
    virtual ~ShowBlockStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBlockStatisticsResponse members

    /// <summary>
    /// 总解封次数
    /// </summary>

    int32_t getTotalUnblockingTimes() const;
    bool totalUnblockingTimesIsSet() const;
    void unsettotalUnblockingTimes();
    void setTotalUnblockingTimes(int32_t value);

    /// <summary>
    /// 人工解封次数
    /// </summary>

    int32_t getManualUnblockingTimes() const;
    bool manualUnblockingTimesIsSet() const;
    void unsetmanualUnblockingTimes();
    void setManualUnblockingTimes(int32_t value);

    /// <summary>
    /// 自动解封次数
    /// </summary>

    int32_t getAutomaticUnblockingTimes() const;
    bool automaticUnblockingTimesIsSet() const;
    void unsetautomaticUnblockingTimes();
    void setAutomaticUnblockingTimes(int32_t value);

    /// <summary>
    /// 当前封堵Ip数
    /// </summary>

    int32_t getCurrentBlockedIpNumbers() const;
    bool currentBlockedIpNumbersIsSet() const;
    void unsetcurrentBlockedIpNumbers();
    void setCurrentBlockedIpNumbers(int32_t value);


protected:
    int32_t totalUnblockingTimes_;
    bool totalUnblockingTimesIsSet_;
    int32_t manualUnblockingTimes_;
    bool manualUnblockingTimesIsSet_;
    int32_t automaticUnblockingTimes_;
    bool automaticUnblockingTimesIsSet_;
    int32_t currentBlockedIpNumbers_;
    bool currentBlockedIpNumbersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ShowBlockStatisticsResponse_H_
