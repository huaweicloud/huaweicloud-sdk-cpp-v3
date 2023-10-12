
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlBackupStrategy_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlBackupStrategy_H_


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
/// 自动备份策略
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlBackupStrategy
    : public ModelBase
{
public:
    MysqlBackupStrategy();
    virtual ~MysqlBackupStrategy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlBackupStrategy members

    /// <summary>
    /// 自动备份开始时间段。自动备份将在该时间一个小时内触发。  取值范围：非空，格式必须为hh:mm-HH:MM且有效，当前时间指UTC时间。  1. HH取值必须比hh大1。 2. mm和MM取值必须相同，且取值必须为00。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 自动备份保留天数，取值范围：1-732
    /// </summary>

    std::string getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string keepDays_;
    bool keepDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlBackupStrategy_H_
