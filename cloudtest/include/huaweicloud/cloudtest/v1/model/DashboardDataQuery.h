
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DashboardDataQuery_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DashboardDataQuery_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DashboardDataQuery
    : public ModelBase
{
public:
    DashboardDataQuery();
    virtual ~DashboardDataQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DashboardDataQuery members

    /// <summary>
    /// 查询结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 分页参数，页码
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 分页参数，每页大小
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 查询开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 任务Id列表
    /// </summary>

    std::vector<std::string>& getTaskIds();
    bool taskIdsIsSet() const;
    void unsettaskIds();
    void setTaskIds(const std::vector<std::string>& value);


protected:
    int64_t endTime_;
    bool endTimeIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    std::vector<std::string> taskIds_;
    bool taskIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DashboardDataQuery_H_
