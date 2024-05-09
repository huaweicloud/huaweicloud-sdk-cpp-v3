
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ContentCompareOverviewInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ContentCompareOverviewInfo_H_


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
/// 内容对比概览信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ContentCompareOverviewInfo
    : public ModelBase
{
public:
    ContentCompareOverviewInfo();
    virtual ~ContentCompareOverviewInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ContentCompareOverviewInfo members

    /// <summary>
    /// 源库库名。
    /// </summary>

    std::string getSourceDb() const;
    bool sourceDbIsSet() const;
    void unsetsourceDb();
    void setSourceDb(const std::string& value);

    /// <summary>
    /// 目标库库名。
    /// </summary>

    std::string getTargetDb() const;
    bool targetDbIsSet() const;
    void unsettargetDb();
    void setTargetDb(const std::string& value);

    /// <summary>
    /// 对比结果。取值： - CONSISTENT：一致。 - INCONSISTENT：不一致。 - COMPARING：正在对比。 - WAITING_FOR_COMPARISON：等待对比。 - FAILED_TO_COMPARE：对比失败。 - TARGET_DB_NOT_EXIST：目标库不存在。 - CAN_NOT_COMPARE：无法对比。 - WAIT_FOR_COMPARE：命令已下发，等待对比结果 - CANCELED：已取消
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 对比结果。
    /// </summary>

    bool isCompareResult() const;
    bool compareResultIsSet() const;
    void unsetcompareResult();
    void setCompareResult(bool value);


protected:
    std::string sourceDb_;
    bool sourceDbIsSet_;
    std::string targetDb_;
    bool targetDbIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool compareResult_;
    bool compareResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ContentCompareOverviewInfo_H_
