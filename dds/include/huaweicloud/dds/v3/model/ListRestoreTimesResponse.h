
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListRestoreTimesResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListRestoreTimesResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ListRestoreTimesResponseBody_restore_time.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListRestoreTimesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRestoreTimesResponse();
    virtual ~ListRestoreTimesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListRestoreTimesResponse members

    /// <summary>
    /// 可恢复时间段列表。
    /// </summary>

    std::vector<ListRestoreTimesResponseBody_restore_time>& getRestoreTime();
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(const std::vector<ListRestoreTimesResponseBody_restore_time>& value);


protected:
    std::vector<ListRestoreTimesResponseBody_restore_time> restoreTime_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListRestoreTimesResponse_H_
