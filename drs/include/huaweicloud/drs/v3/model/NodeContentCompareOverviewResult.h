
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_NodeContentCompareOverviewResult_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_NodeContentCompareOverviewResult_H_


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
class HUAWEICLOUD_DRS_V3_EXPORT  NodeContentCompareOverviewResult
    : public ModelBase
{
public:
    NodeContentCompareOverviewResult();
    virtual ~NodeContentCompareOverviewResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeContentCompareOverviewResult members

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
    /// 对比状态。 - 0：对比不一致 - 2：对比一致 - 3：目标库表不存在 - 4：对比失败 - 5：正在对比中 - 6：等待对比中 - 7：任务已取消 - 8：源库为空 - 9：目标库为空 - 10：源库和目标库都为空 - 11：源表不存在 - 12：目标表不存在 - 13：原表和目标表都不存在 - 14：源数据库连接失败 - 15：目标库数据库连接失败 - 16：源数据库执行SQL超时 - 17：目标数据库执行SQL超时 - 18：源数据库执行SQL错误 - 19：目标数据库执行SQL错误 - 20：源库和目标库都不存在 - 21：源库不存在 - 22：目标库不存在 - 23：行数为亿行，未进行对比 - 27：超时
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 总表数。
    /// </summary>

    int32_t getCompareNum() const;
    bool compareNumIsSet() const;
    void unsetcompareNum();
    void setCompareNum(int32_t value);

    /// <summary>
    /// 已完成表数。
    /// </summary>

    int32_t getCompareEndNum() const;
    bool compareEndNumIsSet() const;
    void unsetcompareEndNum();
    void setCompareEndNum(int32_t value);

    /// <summary>
    /// 不一致表数。
    /// </summary>

    int32_t getDataInconsistentNum() const;
    bool dataInconsistentNumIsSet() const;
    void unsetdataInconsistentNum();
    void setDataInconsistentNum(int32_t value);

    /// <summary>
    /// 无法对比表数。
    /// </summary>

    int32_t getUncomparableNum() const;
    bool uncomparableNumIsSet() const;
    void unsetuncomparableNum();
    void setUncomparableNum(int32_t value);


protected:
    std::string sourceDb_;
    bool sourceDbIsSet_;
    std::string targetDb_;
    bool targetDbIsSet_;
    int32_t status_;
    bool statusIsSet_;
    int32_t compareNum_;
    bool compareNumIsSet_;
    int32_t compareEndNum_;
    bool compareEndNumIsSet_;
    int32_t dataInconsistentNum_;
    bool dataInconsistentNumIsSet_;
    int32_t uncomparableNum_;
    bool uncomparableNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_NodeContentCompareOverviewResult_H_
