
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryMigrationObjectProgressInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryMigrationObjectProgressInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>
#include <huaweicloud/drs/v5/model/MigrationObjectOverviewInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 迁移中对象进度信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryMigrationObjectProgressInfo
    : public ModelBase
{
public:
    QueryMigrationObjectProgressInfo();
    virtual ~QueryMigrationObjectProgressInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryMigrationObjectProgressInfo members

    /// <summary>
    /// 概览详情。
    /// </summary>

    std::vector<MigrationObjectOverviewInfo>& getMigrationObjectOverview();
    bool migrationObjectOverviewIsSet() const;
    void unsetmigrationObjectOverview();
    void setMigrationObjectOverview(const std::vector<MigrationObjectOverviewInfo>& value);

    /// <summary>
    /// 数据生成时间。
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 全量开始时间。
    /// </summary>

    utility::datetime getFullStartTime() const;
    bool fullStartTimeIsSet() const;
    void unsetfullStartTime();
    void setFullStartTime(const utility::datetime& value);

    /// <summary>
    /// 全量完成时间。
    /// </summary>

    utility::datetime getFullCompleteTime() const;
    bool fullCompleteTimeIsSet() const;
    void unsetfullCompleteTime();
    void setFullCompleteTime(const utility::datetime& value);

    /// <summary>
    /// 增量开始时间。
    /// </summary>

    utility::datetime getIncrStartTime() const;
    bool incrStartTimeIsSet() const;
    void unsetincrStartTime();
    void setIncrStartTime(const utility::datetime& value);

    /// <summary>
    /// 结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::vector<MigrationObjectOverviewInfo> migrationObjectOverview_;
    bool migrationObjectOverviewIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    utility::datetime fullStartTime_;
    bool fullStartTimeIsSet_;
    utility::datetime fullCompleteTime_;
    bool fullCompleteTimeIsSet_;
    utility::datetime incrStartTime_;
    bool incrStartTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryMigrationObjectProgressInfo_H_
