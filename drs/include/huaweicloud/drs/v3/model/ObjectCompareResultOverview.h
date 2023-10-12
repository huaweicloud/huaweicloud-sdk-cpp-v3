
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ObjectCompareResultOverview_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ObjectCompareResultOverview_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ObjectCompareResultOverview
    : public ModelBase
{
public:
    ObjectCompareResultOverview();
    virtual ~ObjectCompareResultOverview();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectCompareResultOverview members

    /// <summary>
    /// 对象类型。 - DB-数据库 - TABLE-表 - VIEW-视图 - EVENT-事件 - ROUTINE-存储过程和函数 - INDEX-索引,TRIGGER-触发器 - SYNONYM-同义词 - FUNCTION-函数 - PROCEDURE-存储过程 - TYPE-自定义类型 - RULE-规则 - DEFAULT_TYPE-缺省值 - PLAN_GUIDE-执行计划 - CONSTRAINT-约束 - FILE_GROUP-文件组 - PARTITION_FUNCTION-分区函数 - PARTITION_SCHEME-分区方案 - TABLE_COLLATION-表的排序规则
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 对比结果。 - CONSISTENT-一致 - INCONSISTENT-不一致 - COMPARING-正在对比 - WAITING_FOR_COMPARISON-等待对比 - FAILED_TO_COMPARE-对比失败 - TARGET_DB_NOT_EXIT-目标库不存在 - CAN_NOT_COMPARE-无法对比
    /// </summary>

    std::string getObjectCompareResult() const;
    bool objectCompareResultIsSet() const;
    void unsetobjectCompareResult();
    void setObjectCompareResult(const std::string& value);

    /// <summary>
    /// 该类型的对象在目标库的个数。
    /// </summary>

    int32_t getTargetCount() const;
    bool targetCountIsSet() const;
    void unsettargetCount();
    void setTargetCount(int32_t value);

    /// <summary>
    /// 该类型的对象在源库的个数。
    /// </summary>

    int32_t getSourceCount() const;
    bool sourceCountIsSet() const;
    void unsetsourceCount();
    void setSourceCount(int32_t value);

    /// <summary>
    /// 源库和目标库的差异数量。
    /// </summary>

    int32_t getDiffCount() const;
    bool diffCountIsSet() const;
    void unsetdiffCount();
    void setDiffCount(int32_t value);


protected:
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string objectCompareResult_;
    bool objectCompareResultIsSet_;
    int32_t targetCount_;
    bool targetCountIsSet_;
    int32_t sourceCount_;
    bool sourceCountIsSet_;
    int32_t diffCount_;
    bool diffCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ObjectCompareResultOverview_H_
