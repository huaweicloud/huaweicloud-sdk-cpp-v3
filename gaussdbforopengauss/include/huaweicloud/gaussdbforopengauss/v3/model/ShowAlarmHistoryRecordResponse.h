
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAlarmHistoryRecordResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAlarmHistoryRecordResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/AlarmHistoryRecordResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowAlarmHistoryRecordResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAlarmHistoryRecordResponse();
    virtual ~ShowAlarmHistoryRecordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAlarmHistoryRecordResponse members

    /// <summary>
    /// **参数解释**： 总数量。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**： 告警记录列表。
    /// </summary>

    std::vector<AlarmHistoryRecordResult>& getHistoryRecords();
    bool historyRecordsIsSet() const;
    void unsethistoryRecords();
    void setHistoryRecords(const std::vector<AlarmHistoryRecordResult>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<AlarmHistoryRecordResult> historyRecords_;
    bool historyRecordsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAlarmHistoryRecordResponse_H_
