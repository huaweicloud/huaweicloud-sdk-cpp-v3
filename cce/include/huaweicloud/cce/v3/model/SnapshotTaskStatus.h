
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotTaskStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotTaskStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  SnapshotTaskStatus
    : public ModelBase
{
public:
    SnapshotTaskStatus();
    virtual ~SnapshotTaskStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotTaskStatus members

    /// <summary>
    /// 最近一次备份的时间
    /// </summary>

    std::string getLatestBackupTime() const;
    bool latestBackupTimeIsSet() const;
    void unsetlatestBackupTime();
    void setLatestBackupTime(const std::string& value);


protected:
    std::string latestBackupTime_;
    bool latestBackupTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotTaskStatus_H_
