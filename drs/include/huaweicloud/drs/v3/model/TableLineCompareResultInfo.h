
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_TableLineCompareResultInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_TableLineCompareResultInfo_H_


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
/// 表级别对比结果信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  TableLineCompareResultInfo
    : public ModelBase
{
public:
    TableLineCompareResultInfo();
    virtual ~TableLineCompareResultInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TableLineCompareResultInfo members

    /// <summary>
    /// 源库表名称
    /// </summary>

    std::string getSourceTableName() const;
    bool sourceTableNameIsSet() const;
    void unsetsourceTableName();
    void setSourceTableName(const std::string& value);

    /// <summary>
    /// 源库表行数
    /// </summary>

    int64_t getSourceRowNum() const;
    bool sourceRowNumIsSet() const;
    void unsetsourceRowNum();
    void setSourceRowNum(int64_t value);

    /// <summary>
    /// 目标库表名称
    /// </summary>

    std::string getTargetTableName() const;
    bool targetTableNameIsSet() const;
    void unsettargetTableName();
    void setTargetTableName(const std::string& value);

    /// <summary>
    /// 目标库表行数
    /// </summary>

    int64_t getTargetRowNum() const;
    bool targetRowNumIsSet() const;
    void unsettargetRowNum();
    void setTargetRowNum(int64_t value);

    /// <summary>
    /// 行数差异值
    /// </summary>

    int64_t getDifferenceRowNum() const;
    bool differenceRowNumIsSet() const;
    void unsetdifferenceRowNum();
    void setDifferenceRowNum(int64_t value);

    /// <summary>
    /// 对比状态。 - 0：对比不一致 - 2：对比一致 - 3：目标库表不存在 - 4：对比失败 - 5：正在对比中 - 6：等待对比中 - 7：任务已取消 - 8：源库为空 - 9：目标库为空 - 10：源库和目标库都为空 - 11：源表不存在 - 12：目标表不存在 - 13：原表和目标表都不存在 - 14：源数据库连接失败 - 15：目标库数据库连接失败 - 16：源数据库执行SQL超时 - 17：目标数据库执行SQL超时 - 18：源数据库执行SQL错误 - 19：目标数据库执行SQL错误 - 20：源库和目标库都不存在 - 21：源库不存在 - 22：目标库不存在 - 23：行数为亿行，未进行对比 - 27：超时
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 行过滤配置条件
    /// </summary>

    std::string getCompareLineConfigFilter() const;
    bool compareLineConfigFilterIsSet() const;
    void unsetcompareLineConfigFilter();
    void setCompareLineConfigFilter(const std::string& value);


protected:
    std::string sourceTableName_;
    bool sourceTableNameIsSet_;
    int64_t sourceRowNum_;
    bool sourceRowNumIsSet_;
    std::string targetTableName_;
    bool targetTableNameIsSet_;
    int64_t targetRowNum_;
    bool targetRowNumIsSet_;
    int64_t differenceRowNum_;
    bool differenceRowNumIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string compareLineConfigFilter_;
    bool compareLineConfigFilterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_TableLineCompareResultInfo_H_
