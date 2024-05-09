
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsHealthCompareOverviewInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsHealthCompareOverviewInfo_H_


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
/// 对比结果信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ObjectsHealthCompareOverviewInfo
    : public ModelBase
{
public:
    ObjectsHealthCompareOverviewInfo();
    virtual ~ObjectsHealthCompareOverviewInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectsHealthCompareOverviewInfo members

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
    /// 对比结果： - 0：不一致。 - 2：一致。 - 3：未完成。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int64_t sourceCount_;
    bool sourceCountIsSet_;
    int64_t targetCount_;
    bool targetCountIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsHealthCompareOverviewInfo_H_
