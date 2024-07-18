
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribeVolumeResponseBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribeVolumeResponseBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/UnsubscribeVolume.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 退订包周期云硬盘的响应body体
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  UnsubscribeVolumeResponseBody
    : public ModelBase
{
public:
    UnsubscribeVolumeResponseBody();
    virtual ~UnsubscribeVolumeResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnsubscribeVolumeResponseBody members

    /// <summary>
    /// 退订包周期云硬盘的结果。
    /// </summary>

    std::vector<UnsubscribeVolume>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<UnsubscribeVolume>& value);


protected:
    std::vector<UnsubscribeVolume> results_;
    bool resultsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribeVolumeResponseBody_H_
