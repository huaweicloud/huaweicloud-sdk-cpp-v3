
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_NodeContentCompareDetailResult_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_NodeContentCompareDetailResult_H_


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
/// 内容对比详情
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  NodeContentCompareDetailResult
    : public ModelBase
{
public:
    NodeContentCompareDetailResult();
    virtual ~NodeContentCompareDetailResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeContentCompareDetailResult members

    /// <summary>
    /// 源库名称。
    /// </summary>

    std::string getSourceDb() const;
    bool sourceDbIsSet() const;
    void unsetsourceDb();
    void setSourceDb(const std::string& value);

    /// <summary>
    /// 目标库名称。
    /// </summary>

    std::string getTargetDb() const;
    bool targetDbIsSet() const;
    void unsettargetDb();
    void setTargetDb(const std::string& value);

    /// <summary>
    /// 源库的表名称。
    /// </summary>

    std::string getSourceTableName() const;
    bool sourceTableNameIsSet() const;
    void unsetsourceTableName();
    void setSourceTableName(const std::string& value);

    /// <summary>
    /// 目标库名称。
    /// </summary>

    std::string getTargetTableName() const;
    bool targetTableNameIsSet() const;
    void unsettargetTableName();
    void setTargetTableName(const std::string& value);

    /// <summary>
    /// 源库表行数。
    /// </summary>

    int64_t getSourceRowNum() const;
    bool sourceRowNumIsSet() const;
    void unsetsourceRowNum();
    void setSourceRowNum(int64_t value);

    /// <summary>
    /// 目标库表行数。
    /// </summary>

    int64_t getTargetRowNum() const;
    bool targetRowNumIsSet() const;
    void unsettargetRowNum();
    void setTargetRowNum(int64_t value);

    /// <summary>
    /// 源库的表和目标库的表的差异值。
    /// </summary>

    int64_t getDifferenceRowNum() const;
    bool differenceRowNumIsSet() const;
    void unsetdifferenceRowNum();
    void setDifferenceRowNum(int64_t value);

    /// <summary>
    /// 行对比结果。 - true：一致 - false：不一致
    /// </summary>

    bool isLineCompareResult() const;
    bool lineCompareResultIsSet() const;
    void unsetlineCompareResult();
    void setLineCompareResult(bool value);

    /// <summary>
    /// 内容对比结果。 - true：一致 - false：不一致
    /// </summary>

    bool isContentCompareResult() const;
    bool contentCompareResultIsSet() const;
    void unsetcontentCompareResult();
    void setContentCompareResult(bool value);

    /// <summary>
    /// 附加信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 行过滤配置条件
    /// </summary>

    std::string getCompareLineConfigFilter() const;
    bool compareLineConfigFilterIsSet() const;
    void unsetcompareLineConfigFilter();
    void setCompareLineConfigFilter(const std::string& value);

    /// <summary>
    /// 全量比对状态。 -1：对比中 -2：已完成 -3：待对比 -4：已取消
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 已对比分片数。
    /// </summary>

    int32_t getCompleteShardCount() const;
    bool completeShardCountIsSet() const;
    void unsetcompleteShardCount();
    void setCompleteShardCount(int32_t value);

    /// <summary>
    /// 总分片数。
    /// </summary>

    int32_t getTotalShardCount() const;
    bool totalShardCountIsSet() const;
    void unsettotalShardCount();
    void setTotalShardCount(int32_t value);

    /// <summary>
    /// 比对进度。
    /// </summary>

    double getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(double value);


protected:
    std::string sourceDb_;
    bool sourceDbIsSet_;
    std::string targetDb_;
    bool targetDbIsSet_;
    std::string sourceTableName_;
    bool sourceTableNameIsSet_;
    std::string targetTableName_;
    bool targetTableNameIsSet_;
    int64_t sourceRowNum_;
    bool sourceRowNumIsSet_;
    int64_t targetRowNum_;
    bool targetRowNumIsSet_;
    int64_t differenceRowNum_;
    bool differenceRowNumIsSet_;
    bool lineCompareResult_;
    bool lineCompareResultIsSet_;
    bool contentCompareResult_;
    bool contentCompareResultIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string compareLineConfigFilter_;
    bool compareLineConfigFilterIsSet_;
    int32_t status_;
    bool statusIsSet_;
    int32_t completeShardCount_;
    bool completeShardCountIsSet_;
    int32_t totalShardCount_;
    bool totalShardCountIsSet_;
    double progress_;
    bool progressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_NodeContentCompareDetailResult_H_
