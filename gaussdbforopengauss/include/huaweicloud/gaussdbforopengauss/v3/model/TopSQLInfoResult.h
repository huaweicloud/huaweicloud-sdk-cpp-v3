
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_TopSQLInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_TopSQLInfoResult_H_


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
/// Top SQL信息
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  TopSQLInfoResult
    : public ModelBase
{
public:
    TopSQLInfoResult();
    virtual ~TopSQLInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopSQLInfoResult members

    /// <summary>
    /// **参数解释**: Top SQL的归一化SQL ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的用户名。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的SQL文本。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlText() const;
    bool sqlTextIsSet() const;
    void unsetsqlText();
    void setSqlText(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的调用频率占比（%）。 **取值范围**: 0-100。
    /// </summary>

    std::string getCallsPercent() const;
    bool callsPercentIsSet() const;
    void unsetcallsPercent();
    void setCallsPercent(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的调用频率占比。 **取值范围**: 0-100。
    /// </summary>

    std::string getCpuPercent() const;
    bool cpuPercentIsSet() const;
    void unsetcpuPercent();
    void setCpuPercent(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的IO开销占比。 **取值范围**: 0-100。
    /// </summary>

    std::string getIoPercent() const;
    bool ioPercentIsSet() const;
    void unsetioPercent();
    void setIoPercent(const std::string& value);

    /// <summary>
    /// **参数解释** Top SQL的调用次数。 **取值范围** 大于等于0。
    /// </summary>

    std::string getCalls() const;
    bool callsIsSet() const;
    void unsetcalls();
    void setCalls(const std::string& value);

    /// <summary>
    /// **参数解释** Top SQL的返回元组数。 **取值范围** 大于等于0。
    /// </summary>

    std::string getReturnedRows() const;
    bool returnedRowsIsSet() const;
    void unsetreturnedRows();
    void setReturnedRows(const std::string& value);

    /// <summary>
    /// **参数解释** Top SQL的读取元组数。 **取值范围** 大于等于0。
    /// </summary>

    std::string getTupleRead() const;
    bool tupleReadIsSet() const;
    void unsettupleRead();
    void setTupleRead(const std::string& value);

    /// <summary>
    /// **参数解释** Top SQL的平均时间开销。单位ms。 **取值范围** 大于等于0。
    /// </summary>

    std::string getAvgElapseTime() const;
    bool avgElapseTimeIsSet() const;
    void unsetavgElapseTime();
    void setAvgElapseTime(const std::string& value);

    /// <summary>
    /// **参数解释** Top SQL的总时间开销。单位ms。 **取值范围** 大于等于0。
    /// </summary>

    std::string getTotalElapseTime() const;
    bool totalElapseTimeIsSet() const;
    void unsettotalElapseTime();
    void setTotalElapseTime(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的CPU开销。单位ms。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCpuTime() const;
    bool cpuTimeIsSet() const;
    void unsetcpuTime();
    void setCpuTime(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的IO开销。单位ms。 **取值范围**: 不涉及。
    /// </summary>

    std::string getIoTime() const;
    bool ioTimeIsSet() const;
    void unsetioTime();
    void setIoTime(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的最小执行时间。单位ms。 **取值范围**: 不涉及。
    /// </summary>

    std::string getMinElapseTime() const;
    bool minElapseTimeIsSet() const;
    void unsetminElapseTime();
    void setMinElapseTime(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL最大执行时间。单位ms。 **取值范围**: 不涉及。
    /// </summary>

    std::string getMaxElapseTime() const;
    bool maxElapseTimeIsSet() const;
    void unsetmaxElapseTime();
    void setMaxElapseTime(const std::string& value);

    /// <summary>
    /// **参数解释** Top SQL的SQL命中率。 **取值范围** 大于等于0。
    /// </summary>

    std::string getSqlHitRatio() const;
    bool sqlHitRatioIsSet() const;
    void unsetsqlHitRatio();
    void setSqlHitRatio(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的节点ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的数据库名（引擎版本8.200及以上支持）。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的节点名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);


protected:
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string sqlText_;
    bool sqlTextIsSet_;
    std::string callsPercent_;
    bool callsPercentIsSet_;
    std::string cpuPercent_;
    bool cpuPercentIsSet_;
    std::string ioPercent_;
    bool ioPercentIsSet_;
    std::string calls_;
    bool callsIsSet_;
    std::string returnedRows_;
    bool returnedRowsIsSet_;
    std::string tupleRead_;
    bool tupleReadIsSet_;
    std::string avgElapseTime_;
    bool avgElapseTimeIsSet_;
    std::string totalElapseTime_;
    bool totalElapseTimeIsSet_;
    std::string cpuTime_;
    bool cpuTimeIsSet_;
    std::string ioTime_;
    bool ioTimeIsSet_;
    std::string minElapseTime_;
    bool minElapseTimeIsSet_;
    std::string maxElapseTime_;
    bool maxElapseTimeIsSet_;
    std::string sqlHitRatio_;
    bool sqlHitRatioIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_TopSQLInfoResult_H_
