
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlStatisticsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlStatisticsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Statistic.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListSqlStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSqlStatisticsResponse();
    virtual ~ListSqlStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlStatisticsResponse members

    /// <summary>
    /// 最新重置时间
    /// </summary>

    int64_t getResetViewLastTime() const;
    bool resetViewLastTimeIsSet() const;
    void unsetresetViewLastTime();
    void setResetViewLastTime(int64_t value);

    /// <summary>
    /// 总的个数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 数据列表
    /// </summary>

    std::vector<Statistic>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<Statistic>& value);


protected:
    int64_t resetViewLastTime_;
    bool resetViewLastTimeIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<Statistic> list_;
    bool listIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlStatisticsResponse_H_
