
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListRestoreTimeResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListRestoreTimeResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/RestorableTime.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListRestoreTimeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRestoreTimeResponse();
    virtual ~ListRestoreTimeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRestoreTimeResponse members

    /// <summary>
    /// 实例可恢复时间段总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 实例可恢复的时间段
    /// </summary>

    std::vector<RestorableTime>& getRestorableTimePeriods();
    bool restorableTimePeriodsIsSet() const;
    void unsetrestorableTimePeriods();
    void setRestorableTimePeriods(const std::vector<RestorableTime>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<RestorableTime> restorableTimePeriods_;
    bool restorableTimePeriodsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListRestoreTimeResponse_H_
