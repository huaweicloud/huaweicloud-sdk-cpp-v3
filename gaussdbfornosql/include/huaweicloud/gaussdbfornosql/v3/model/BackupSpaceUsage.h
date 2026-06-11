
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BackupSpaceUsage_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BackupSpaceUsage_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  BackupSpaceUsage
    : public ModelBase
{
public:
    BackupSpaceUsage();
    virtual ~BackupSpaceUsage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupSpaceUsage members

    /// <summary>
    /// **参数解释：** 备份空间使用量。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getBackupUsage() const;
    bool backupUsageIsSet() const;
    void unsetbackupUsage();
    void setBackupUsage(int64_t value);


protected:
    int64_t backupUsage_;
    bool backupUsageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BackupSpaceUsage_H_
