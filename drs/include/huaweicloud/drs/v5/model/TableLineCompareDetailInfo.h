
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_TableLineCompareDetailInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_TableLineCompareDetailInfo_H_

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
/// 行数对比任务表级详情。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  TableLineCompareDetailInfo
    : public ModelBase
{
public:
    TableLineCompareDetailInfo();
    virtual ~TableLineCompareDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TableLineCompareDetailInfo members

    /// <summary>
    /// 源库表名称。
    /// </summary>

    std::string getSourceTableName() const;
    bool sourceTableNameIsSet() const;
    void unsetsourceTableName();
    void setSourceTableName(const std::string& value);

    /// <summary>
    /// 源库表行数。
    /// </summary>

    std::string getSourceRowNum() const;
    bool sourceRowNumIsSet() const;
    void unsetsourceRowNum();
    void setSourceRowNum(const std::string& value);

    /// <summary>
    /// 目标库表名称。
    /// </summary>

    std::string getTargetTableName() const;
    bool targetTableNameIsSet() const;
    void unsettargetTableName();
    void setTargetTableName(const std::string& value);

    /// <summary>
    /// 目标库表行数。
    /// </summary>

    std::string getTargetRowNum() const;
    bool targetRowNumIsSet() const;
    void unsettargetRowNum();
    void setTargetRowNum(const std::string& value);

    /// <summary>
    /// 差异值。
    /// </summary>

    std::string getDifferenceRowNum() const;
    bool differenceRowNumIsSet() const;
    void unsetdifferenceRowNum();
    void setDifferenceRowNum(const std::string& value);

    /// <summary>
    /// 对比结果。取值： - CONSISTENT：一致。 - INCONSISTENT：不一致。 - COMPARING：正在对比。 - WAITING_FOR_COMPARISON：等待对比。 - FAILED_TO_COMPARE：对比失败。 - TARGET_DB_NOT_EXIST：目标库不存在。 - CAN_NOT_COMPARE：无法对比。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string sourceTableName_;
    bool sourceTableNameIsSet_;
    std::string sourceRowNum_;
    bool sourceRowNumIsSet_;
    std::string targetTableName_;
    bool targetTableNameIsSet_;
    std::string targetRowNum_;
    bool targetRowNumIsSet_;
    std::string differenceRowNum_;
    bool differenceRowNumIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_TableLineCompareDetailInfo_H_
