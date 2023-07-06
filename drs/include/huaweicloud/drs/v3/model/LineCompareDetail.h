
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_LineCompareDetail_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_LineCompareDetail_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_DRS_V3_EXPORT  LineCompareDetail
    : public ModelBase
{
public:
    LineCompareDetail();
    virtual ~LineCompareDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// LineCompareDetail members

    /// <summary>
    /// 源库的表名称。
    /// </summary>

    std::string getSourceTableName() const;
    bool sourceTableNameIsSet() const;
    void unsetsourceTableName();
    void setSourceTableName(const std::string& value);

    /// <summary>
    /// 目标库的表名称。
    /// </summary>

    std::string getTargetTableName() const;
    bool targetTableNameIsSet() const;
    void unsettargetTableName();
    void setTargetTableName(const std::string& value);

    /// <summary>
    /// 源库的表行数。
    /// </summary>

    int32_t getSourceRowNum() const;
    bool sourceRowNumIsSet() const;
    void unsetsourceRowNum();
    void setSourceRowNum(int32_t value);

    /// <summary>
    /// 目标库的表行数。
    /// </summary>

    int32_t getTargetRowNum() const;
    bool targetRowNumIsSet() const;
    void unsettargetRowNum();
    void setTargetRowNum(int32_t value);

    /// <summary>
    /// 源库的表和目标库的表的差异值。
    /// </summary>

    int32_t getDiffRowNum() const;
    bool diffRowNumIsSet() const;
    void unsetdiffRowNum();
    void setDiffRowNum(int32_t value);

    /// <summary>
    /// 对比结果。 - CONSISTENT-一致 - INCONSISTENT-不一致 - COMPARING-正在对比 - WAITING_FOR_COMPARISON-等待对比 - FAILED_TO_COMPARE-对比失败 - TARGET_DB_NOT_EXIT-目标库不存在 - CAN_NOT_COMPARE-无法对比
    /// </summary>

    std::string getLineCompareResult() const;
    bool lineCompareResultIsSet() const;
    void unsetlineCompareResult();
    void setLineCompareResult(const std::string& value);

    /// <summary>
    /// 附加信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string sourceTableName_;
    bool sourceTableNameIsSet_;
    std::string targetTableName_;
    bool targetTableNameIsSet_;
    int32_t sourceRowNum_;
    bool sourceRowNumIsSet_;
    int32_t targetRowNum_;
    bool targetRowNumIsSet_;
    int32_t diffRowNum_;
    bool diffRowNumIsSet_;
    std::string lineCompareResult_;
    bool lineCompareResultIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_LineCompareDetail_H_
