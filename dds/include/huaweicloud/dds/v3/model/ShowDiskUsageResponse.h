
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowDiskUsageResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowDiskUsageResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/DiskVolumes.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  ShowDiskUsageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDiskUsageResponse();
    virtual ~ShowDiskUsageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDiskUsageResponse members

    /// <summary>
    /// 磁盘信息列表
    /// </summary>

    std::vector<DiskVolumes>& getVolumes();
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const std::vector<DiskVolumes>& value);


protected:
    std::vector<DiskVolumes> volumes_;
    bool volumesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowDiskUsageResponse_H_
