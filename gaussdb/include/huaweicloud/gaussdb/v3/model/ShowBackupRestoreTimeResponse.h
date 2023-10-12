
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupRestoreTimeResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupRestoreTimeResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/RestoreTimeInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowBackupRestoreTimeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBackupRestoreTimeResponse();
    virtual ~ShowBackupRestoreTimeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupRestoreTimeResponse members

    /// <summary>
    /// 可恢复时间段列表。
    /// </summary>

    std::vector<RestoreTimeInfo>& getRestoreTimes();
    bool restoreTimesIsSet() const;
    void unsetrestoreTimes();
    void setRestoreTimes(const std::vector<RestoreTimeInfo>& value);


protected:
    std::vector<RestoreTimeInfo> restoreTimes_;
    bool restoreTimesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupRestoreTimeResponse_H_
