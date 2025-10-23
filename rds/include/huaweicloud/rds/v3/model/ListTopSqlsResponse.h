
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListTopSqlsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListTopSqlsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/QueryTopSqlsResult.h>
#include <huaweicloud/rds/v3/model/TopSqlsRowResult.h>
#include <vector>
#include <huaweicloud/rds/v3/model/TopSqlsLogicalReadResult.h>
#include <huaweicloud/rds/v3/model/TopSqlsTimeResult.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListTopSqlsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTopSqlsResponse();
    virtual ~ListTopSqlsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopSqlsResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// TOP SQL 信息列表。
    /// </summary>

    std::vector<QueryTopSqlsResult>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<QueryTopSqlsResult>& value);

    /// <summary>
    /// 平均CPU开销表TOP SQL列表。
    /// </summary>

    std::vector<TopSqlsTimeResult>& getAvgCpuTimeTopValues();
    bool avgCpuTimeTopValuesIsSet() const;
    void unsetavgCpuTimeTopValues();
    void setAvgCpuTimeTopValues(const std::vector<TopSqlsTimeResult>& value);

    /// <summary>
    /// 平均执行耗时TOP SQL列表。
    /// </summary>

    std::vector<TopSqlsTimeResult>& getAvgDurationTimeTopValues();
    bool avgDurationTimeTopValuesIsSet() const;
    void unsetavgDurationTimeTopValues();
    void setAvgDurationTimeTopValues(const std::vector<TopSqlsTimeResult>& value);

    /// <summary>
    /// 平均返回行TOP SQL列表。
    /// </summary>

    std::vector<TopSqlsRowResult>& getAvgRowsTopValues();
    bool avgRowsTopValuesIsSet() const;
    void unsetavgRowsTopValues();
    void setAvgRowsTopValues(const std::vector<TopSqlsRowResult>& value);

    /// <summary>
    /// 平均逻辑读TOP SQL列表。
    /// </summary>

    std::vector<TopSqlsLogicalReadResult>& getAvgLogicalTopValues();
    bool avgLogicalTopValuesIsSet() const;
    void unsetavgLogicalTopValues();
    void setAvgLogicalTopValues(const std::vector<TopSqlsLogicalReadResult>& value);

    /// <summary>
    /// 总CPU开销表TOP SQL列表。
    /// </summary>

    std::vector<TopSqlsTimeResult>& getTotalCpuTimeTopValues();
    bool totalCpuTimeTopValuesIsSet() const;
    void unsettotalCpuTimeTopValues();
    void setTotalCpuTimeTopValues(const std::vector<TopSqlsTimeResult>& value);

    /// <summary>
    /// 总执行耗时TOP SQL列表。
    /// </summary>

    std::vector<TopSqlsTimeResult>& getTotalDurationTimeTopValues();
    bool totalDurationTimeTopValuesIsSet() const;
    void unsettotalDurationTimeTopValues();
    void setTotalDurationTimeTopValues(const std::vector<TopSqlsTimeResult>& value);

    /// <summary>
    /// 总返回行TOP SQL列表。
    /// </summary>

    std::vector<TopSqlsRowResult>& getTotalRowsTopValues();
    bool totalRowsTopValuesIsSet() const;
    void unsettotalRowsTopValues();
    void setTotalRowsTopValues(const std::vector<TopSqlsRowResult>& value);

    /// <summary>
    /// 总逻辑读TOP SQL列表。
    /// </summary>

    std::vector<TopSqlsLogicalReadResult>& getTotalLogicalReadsTopValues();
    bool totalLogicalReadsTopValuesIsSet() const;
    void unsettotalLogicalReadsTopValues();
    void setTotalLogicalReadsTopValues(const std::vector<TopSqlsLogicalReadResult>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<QueryTopSqlsResult> list_;
    bool listIsSet_;
    std::vector<TopSqlsTimeResult> avgCpuTimeTopValues_;
    bool avgCpuTimeTopValuesIsSet_;
    std::vector<TopSqlsTimeResult> avgDurationTimeTopValues_;
    bool avgDurationTimeTopValuesIsSet_;
    std::vector<TopSqlsRowResult> avgRowsTopValues_;
    bool avgRowsTopValuesIsSet_;
    std::vector<TopSqlsLogicalReadResult> avgLogicalTopValues_;
    bool avgLogicalTopValuesIsSet_;
    std::vector<TopSqlsTimeResult> totalCpuTimeTopValues_;
    bool totalCpuTimeTopValuesIsSet_;
    std::vector<TopSqlsTimeResult> totalDurationTimeTopValues_;
    bool totalDurationTimeTopValuesIsSet_;
    std::vector<TopSqlsRowResult> totalRowsTopValues_;
    bool totalRowsTopValuesIsSet_;
    std::vector<TopSqlsLogicalReadResult> totalLogicalReadsTopValues_;
    bool totalLogicalReadsTopValuesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListTopSqlsResponse_H_
