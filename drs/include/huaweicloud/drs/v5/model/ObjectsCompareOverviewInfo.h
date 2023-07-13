
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsCompareOverviewInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsCompareOverviewInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 对象对比结果信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ObjectsCompareOverviewInfo
    : public ModelBase
{
public:
    ObjectsCompareOverviewInfo();
    virtual ~ObjectsCompareOverviewInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ObjectsCompareOverviewInfo members

    /// <summary>
    /// 对象类型。取值： - DB：数据库。 - TABLE：表。 - VIEW：视图。 - EVENT：事件。 - ROUTINE：存储过程和函数。 - INDEX：索引。 - TRIGGER：触发器。 - SYNONYM：同义词。 - FUNCTION：函数。 - PROCEDURE：存储过程。 - TYPE：自定义类型。 - RULE：规则。 - DEFAULT_TYPE：缺省值。 - PLAN_GUIDE：执行计划。 - CONSTRAINT：约束。 - FILE_GROUP：文件组。 - PARTITION_FUNCTION：分区函数。 - PARTITION_SCHEME：分区方案。 - TABLE_COLLATION：表的排序规则。 - EXTENSIONS：插件。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 源数量。
    /// </summary>

    int64_t getSourceCount() const;
    bool sourceCountIsSet() const;
    void unsetsourceCount();
    void setSourceCount(int64_t value);

    /// <summary>
    /// 目标数量。
    /// </summary>

    int64_t getTargetCount() const;
    bool targetCountIsSet() const;
    void unsettargetCount();
    void setTargetCount(int64_t value);

    /// <summary>
    /// 对比结果。取值： CONSISTENT：一致。 INCONSISTENT：不一致。 COMPARING：正在对比。 WAITING_FOR_COMPARISON：等待对比。 FAILED_TO_COMPARE：对比失败。 TARGET_DB_NOT_EXIST：目标库不存在。 CAN_NOT_COMPARE：无法对比。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    int64_t sourceCount_;
    bool sourceCountIsSet_;
    int64_t targetCount_;
    bool targetCountIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsCompareOverviewInfo_H_
