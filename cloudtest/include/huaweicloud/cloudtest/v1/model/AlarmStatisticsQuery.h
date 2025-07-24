
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlarmStatisticsQuery_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlarmStatisticsQuery_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AlarmStatisticsQuery
    : public ModelBase
{
public:
    AlarmStatisticsQuery();
    virtual ~AlarmStatisticsQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlarmStatisticsQuery members

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);


protected:
    int64_t endTime_;
    bool endTimeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlarmStatisticsQuery_H_
