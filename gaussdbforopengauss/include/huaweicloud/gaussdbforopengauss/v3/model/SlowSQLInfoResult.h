
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SlowSQLInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SlowSQLInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SlowSQLInfoResult
    : public ModelBase
{
public:
    SlowSQLInfoResult();
    virtual ~SlowSQLInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SlowSQLInfoResult members

    /// <summary>
    /// **参数解释**: 变量替换后的完整SQL。当sql_text不返回变量值时，sql返回空字符串。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL文本。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlText() const;
    bool sqlTextIsSet() const;
    void unsetsqlText();
    void setSqlText(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL计划。 **取值范围**: 不涉及。
    /// </summary>

    std::string getQueryPlan() const;
    bool queryPlanIsSet() const;
    void unsetqueryPlan();
    void setQueryPlan(const std::string& value);

    /// <summary>
    /// **参数解释**: 执行次数（次）。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getCalls() const;
    bool callsIsSet() const;
    void unsetcalls();
    void setCalls(int32_t value);

    /// <summary>
    /// **参数解释**: 平均执行时间（us）。 **取值范围**: 不涉及。
    /// </summary>

    std::string getAvgExecTime() const;
    bool avgExecTimeIsSet() const;
    void unsetavgExecTime();
    void setAvgExecTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 平均CPU耗时（us）。 **取值范围**: 不涉及。
    /// </summary>

    std::string getAvgCpuTime() const;
    bool avgCpuTimeIsSet() const;
    void unsetavgCpuTime();
    void setAvgCpuTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 平均IO耗时（us）。 **取值范围**: 不涉及。
    /// </summary>

    std::string getAvgIoTime() const;
    bool avgIoTimeIsSet() const;
    void unsetavgIoTime();
    void setAvgIoTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 平均返回行数（行）。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getAvgReturnedRows() const;
    bool avgReturnedRowsIsSet() const;
    void unsetavgReturnedRows();
    void setAvgReturnedRows(int32_t value);

    /// <summary>
    /// **参数解释**: 平均扫描行数（行）。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getAvgFetchedRows() const;
    bool avgFetchedRowsIsSet() const;
    void unsetavgFetchedRows();
    void setAvgFetchedRows(int32_t value);

    /// <summary>
    /// **参数解释**: buffer命中率。 **取值范围**: 不涉及。
    /// </summary>

    std::string getBufferHitRatio() const;
    bool bufferHitRatioIsSet() const;
    void unsetbufferHitRatio();
    void setBufferHitRatio(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL命中率。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlHitRatio() const;
    bool sqlHitRatioIsSet() const;
    void unsetsqlHitRatio();
    void setSqlHitRatio(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);


protected:
    std::string sql_;
    bool sqlIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string sqlText_;
    bool sqlTextIsSet_;
    std::string queryPlan_;
    bool queryPlanIsSet_;
    int32_t calls_;
    bool callsIsSet_;
    std::string avgExecTime_;
    bool avgExecTimeIsSet_;
    std::string avgCpuTime_;
    bool avgCpuTimeIsSet_;
    std::string avgIoTime_;
    bool avgIoTimeIsSet_;
    int32_t avgReturnedRows_;
    bool avgReturnedRowsIsSet_;
    int32_t avgFetchedRows_;
    bool avgFetchedRowsIsSet_;
    std::string bufferHitRatio_;
    bool bufferHitRatioIsSet_;
    std::string sqlHitRatio_;
    bool sqlHitRatioIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SlowSQLInfoResult_H_
