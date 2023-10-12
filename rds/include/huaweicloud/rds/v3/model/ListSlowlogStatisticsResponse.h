
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowlogStatisticsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowlogStatisticsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SlowLogStatistics.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSlowlogStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSlowlogStatisticsResponse();
    virtual ~ListSlowlogStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSlowlogStatisticsResponse members

    /// <summary>
    /// 当前页码
    /// </summary>

    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetpageNumber();
    void setPageNumber(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getPageRecord() const;
    bool pageRecordIsSet() const;
    void unsetpageRecord();
    void setPageRecord(int32_t value);

    /// <summary>
    /// 慢日志列表
    /// </summary>

    std::vector<SlowLogStatistics>& getSlowLogList();
    bool slowLogListIsSet() const;
    void unsetslowLogList();
    void setSlowLogList(const std::vector<SlowLogStatistics>& value);

    /// <summary>
    /// 总条数
    /// </summary>

    int32_t getTotalRecord() const;
    bool totalRecordIsSet() const;
    void unsettotalRecord();
    void setTotalRecord(int32_t value);

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    int32_t pageNumber_;
    bool pageNumberIsSet_;
    int32_t pageRecord_;
    bool pageRecordIsSet_;
    std::vector<SlowLogStatistics> slowLogList_;
    bool slowLogListIsSet_;
    int32_t totalRecord_;
    bool totalRecordIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowlogStatisticsResponse_H_
