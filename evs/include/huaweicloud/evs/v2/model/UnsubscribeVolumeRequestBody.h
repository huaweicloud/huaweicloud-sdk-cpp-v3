
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribeVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribeVolumeRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 退订包周期云硬盘的请求body体
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  UnsubscribeVolumeRequestBody
    : public ModelBase
{
public:
    UnsubscribeVolumeRequestBody();
    virtual ~UnsubscribeVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnsubscribeVolumeRequestBody members

    /// <summary>
    /// 退订包周期云硬盘的结果。
    /// </summary>

    std::vector<std::string>& getVolumeIds();
    bool volumeIdsIsSet() const;
    void unsetvolumeIds();
    void setVolumeIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> volumeIds_;
    bool volumeIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribeVolumeRequestBody_H_
