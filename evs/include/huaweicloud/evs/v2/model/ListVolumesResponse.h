
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesResponse_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/Link.h>
#include <huaweicloud/evs/v2/model/VolumeDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ListVolumesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVolumesResponse();
    virtual ~ListVolumesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVolumesResponse members

    /// <summary>
    /// 查询到的云硬盘总数量，不受分页影响。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 云硬盘列表查询位置标记。如果本次查询只返回部分列表信息时，会返回查询到的当前磁盘mark标记的url，可以继续使用这个url查询剩余列表信息。
    /// </summary>

    std::vector<Link>& getVolumesLinks();
    bool volumesLinksIsSet() const;
    void unsetvolumesLinks();
    void setVolumesLinks(const std::vector<Link>& value);

    /// <summary>
    /// 查询请求返回的云硬盘列表。
    /// </summary>

    std::vector<VolumeDetail>& getVolumes();
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const std::vector<VolumeDetail>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<Link> volumesLinks_;
    bool volumesLinksIsSet_;
    std::vector<VolumeDetail> volumes_;
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

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesResponse_H_
