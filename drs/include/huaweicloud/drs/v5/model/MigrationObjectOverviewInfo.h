
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_MigrationObjectOverviewInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_MigrationObjectOverviewInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 迁移详情概览。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  MigrationObjectOverviewInfo
    : public ModelBase
{
public:
    MigrationObjectOverviewInfo();
    virtual ~MigrationObjectOverviewInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrationObjectOverviewInfo members

    /// <summary>
    /// 类型。 DATABASE：数据库 SCHEMA：SCHEMA PACKAGE：package TABLE：数据表 COLUMN：列 VIEW：视图 FUNCTION：函数 PROCEDURE：存储过程 ROUTINE：routine TRIGGER：触发器 INDEX：索引 TABLE_INDEX：普通索引，根据表汇聚 TABLE_RENAME_OR_COPY：表重命名或复制 TABLE_STRUCTURE：表结构 EVENT：事件 SYNONYM：同义词,sqlserver特有 TYPE：自定义类型,sqlserver特有 RULE：规则,sqlserver特有 DEFAULT：缺省值,sqlserver特有 PLAN_GUIDE：执行计划,sqlserver特有 FILE_GROUP：文件组,sqlserver特有 PARTITION_FUNCTION：分区函数,sqlserver特有 SHARD_KEY：mongo特有 VALIDATOR：mongo特有 SEQUENCE：序列 MATVIEW：物化视图 PARTITION_SCHEME：分区方案,sqlserver特有 ACCOUNT：账户 EXTENSION：PG 特有的一些对象:插件 AGGREGATE：PG 特有的一些对象:聚合函数 MATERIALIZED_VIEW：PG 特有的一些对象:物化视图 TEXT_SEARCH_DICTIONARY：PG 特有的一些对象:文本搜索字典 CONVERSION：PG 特有的一些对象:类型转换 DATA_TYPE：PG 特有的一些对象:数据类型 TEXT_SEARCH_CONFIGURATION：PG 特有的一些对象:文本搜索配置 STATISTICS_EXTENSION：PG 特有的一些对象:插件统计 MEMBERSHIP：PG 特有的一些对象:用户成员关系 EVENT_TRIGGER：PG 特有的一些对象:事件触发器 COLLATION：PG 特有的一些对象:排序规则 TEXT_SEARCH_PARSER：PG 特有的一些对象:文本搜索解析器 PRIVILEGES：PG 特有的一些对象:权限 FOREIGN_KEY：PG 特有的一些对象:外键 ROLE：权限
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 待迁移数量。
    /// </summary>

    std::string getSrcCount() const;
    bool srcCountIsSet() const;
    void unsetsrcCount();
    void setSrcCount(const std::string& value);

    /// <summary>
    /// 已迁移数量。
    /// </summary>

    std::string getDstCount() const;
    bool dstCountIsSet() const;
    void unsetdstCount();
    void setDstCount(const std::string& value);

    /// <summary>
    /// 状态. NOT_START：未启动，TRANSFERING：迁移中，COMPLETED：已完成，FAILED：失败，TRANSFER_WHEN_END：结束后迁移
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string srcCount_;
    bool srcCountIsSet_;
    std::string dstCount_;
    bool dstCountIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_MigrationObjectOverviewInfo_H_
