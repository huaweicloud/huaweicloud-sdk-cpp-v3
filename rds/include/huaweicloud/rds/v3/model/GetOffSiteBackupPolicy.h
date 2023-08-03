
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetOffSiteBackupPolicy_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetOffSiteBackupPolicy_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份策略对象，包括备份类型、备份保留天数、目标区域ID和目标project ID。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GetOffSiteBackupPolicy
    : public ModelBase
{
public:
    GetOffSiteBackupPolicy();
    virtual ~GetOffSiteBackupPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetOffSiteBackupPolicy members

    /// <summary>
    /// 指定备份的类型。取值如下：  - auto：自动全量备份。 - incremental：自动增量备份。 - manual：手动备份，仅SQL Server返回该备份类型 。
    /// </summary>

    std::string getBackupType() const;
    bool backupTypeIsSet() const;
    void unsetbackupType();
    void setBackupType(const std::string& value);

    /// <summary>
    /// 备份文件可以保存的天数。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// 设置跨区域备份策略的目标区域ID。
    /// </summary>

    std::string getDestinationRegion() const;
    bool destinationRegionIsSet() const;
    void unsetdestinationRegion();
    void setDestinationRegion(const std::string& value);

    /// <summary>
    /// 设置跨区域备份策略的目标project ID。
    /// </summary>

    std::string getDestinationProjectId() const;
    bool destinationProjectIdIsSet() const;
    void unsetdestinationProjectId();
    void setDestinationProjectId(const std::string& value);


protected:
    std::string backupType_;
    bool backupTypeIsSet_;
    int32_t keepDays_;
    bool keepDaysIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    std::string destinationProjectId_;
    bool destinationProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetOffSiteBackupPolicy_H_
