
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeSchedulerHints_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeSchedulerHints_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建云硬盘的调度参数。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CreateVolumeSchedulerHints
    : public ModelBase
{
public:
    CreateVolumeSchedulerHints();
    virtual ~CreateVolumeSchedulerHints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVolumeSchedulerHints members

    /// <summary>
    /// 指定专属存储池ID，表示将云硬盘创建在该ID对应的存储池中。
    /// </summary>

    std::string getDedicatedStorageId() const;
    bool dedicatedStorageIdIsSet() const;
    void unsetdedicatedStorageId();
    void setDedicatedStorageId(const std::string& value);


protected:
    std::string dedicatedStorageId_;
    bool dedicatedStorageIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeSchedulerHints_H_
