
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseReplicationInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseReplicationInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ClickHouse同步信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChDatabaseReplicationInfo
    : public ModelBase
{
public:
    ChDatabaseReplicationInfo();
    virtual ~ChDatabaseReplicationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChDatabaseReplicationInfo members

    /// <summary>
    /// 源数据库。
    /// </summary>

    std::string getSourceDatabase() const;
    bool sourceDatabaseIsSet() const;
    void unsetsourceDatabase();
    void setSourceDatabase(const std::string& value);

    /// <summary>
    /// 目标数据库。
    /// </summary>

    std::string getTargetDatabase() const;
    bool targetDatabaseIsSet() const;
    void unsettargetDatabase();
    void setTargetDatabase(const std::string& value);

    /// <summary>
    /// 当前状态。 取值范围： - normal：正常 - abnormal：异常
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 同步阶段。 取值范围： - wait：等待同步 - failed：同步失败 - incremental：增量同步 - full：全量同步 - other：其他
    /// </summary>

    std::string getStage() const;
    bool stageIsSet() const;
    void unsetstage();
    void setStage(const std::string& value);

    /// <summary>
    /// 进度百分比。
    /// </summary>

    std::string getPercentage() const;
    bool percentageIsSet() const;
    void unsetpercentage();
    void setPercentage(const std::string& value);

    /// <summary>
    /// 追赶阶段。 取值范围： - wait：等待同步 - failed：同步失败 - incremental：增量同步 - full：全量同步 - other：其他
    /// </summary>

    std::string getCatchupStage() const;
    bool catchupStageIsSet() const;
    void unsetcatchupStage();
    void setCatchupStage(const std::string& value);


protected:
    std::string sourceDatabase_;
    bool sourceDatabaseIsSet_;
    std::string targetDatabase_;
    bool targetDatabaseIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string stage_;
    bool stageIsSet_;
    std::string percentage_;
    bool percentageIsSet_;
    std::string catchupStage_;
    bool catchupStageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseReplicationInfo_H_
