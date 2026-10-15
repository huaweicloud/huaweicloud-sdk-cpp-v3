
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayExecuteRecords_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayExecuteRecords_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流量回放SQL的执行记录
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplayExecuteRecords
    : public ModelBase
{
public:
    ReplayExecuteRecords();
    virtual ~ReplayExecuteRecords();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplayExecuteRecords members

    /// <summary>
    /// 执行记录的时间，格式为秒级时间戳。
    /// </summary>

    int64_t getExecuteTime() const;
    bool executeTimeIsSet() const;
    void unsetexecuteTime();
    void setExecuteTime(int64_t value);

    /// <summary>
    /// 执行完的SQL数量。
    /// </summary>

    int64_t getFinishedSql() const;
    bool finishedSqlIsSet() const;
    void unsetfinishedSql();
    void setFinishedSql(int64_t value);

    /// <summary>
    /// 执行的异常SQL数量。
    /// </summary>

    int64_t getAbnormalSql() const;
    bool abnormalSqlIsSet() const;
    void unsetabnormalSql();
    void setAbnormalSql(int64_t value);

    /// <summary>
    /// 执行的慢SQL数量。
    /// </summary>

    int64_t getSlowSql() const;
    bool slowSqlIsSet() const;
    void unsetslowSql();
    void setSlowSql(int64_t value);

    /// <summary>
    /// 执行记录的SQL总数。
    /// </summary>

    int64_t getTotalSql() const;
    bool totalSqlIsSet() const;
    void unsettotalSql();
    void setTotalSql(int64_t value);


protected:
    int64_t executeTime_;
    bool executeTimeIsSet_;
    int64_t finishedSql_;
    bool finishedSqlIsSet_;
    int64_t abnormalSql_;
    bool abnormalSqlIsSet_;
    int64_t slowSql_;
    bool slowSqlIsSet_;
    int64_t totalSql_;
    bool totalSqlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayExecuteRecords_H_
