
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOffSiteRestoreTimesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOffSiteRestoreTimesResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/GetRestoreTimeResponse_restore_time.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListOffSiteRestoreTimesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOffSiteRestoreTimesResponse();
    virtual ~ListOffSiteRestoreTimesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListOffSiteRestoreTimesResponse members

    /// <summary>
    /// 可恢复时间段列表。
    /// </summary>

    std::vector<GetRestoreTimeResponse_restore_time>& getRestoreTime();
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(const std::vector<GetRestoreTimeResponse_restore_time>& value);


protected:
    std::vector<GetRestoreTimeResponse_restore_time> restoreTime_;
    bool restoreTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOffSiteRestoreTimesResponse_H_
