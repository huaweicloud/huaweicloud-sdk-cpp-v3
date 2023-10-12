
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/evs/v2/model/Resource.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  ListVolumesByTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVolumesByTagsResponse();
    virtual ~ListVolumesByTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVolumesByTagsResponse members

    /// <summary>
    /// 符合查询条件的云硬盘资源个数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 符合查询条件的资源列表
    /// </summary>

    std::vector<Resource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<Resource>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<Resource> resources_;
    bool resourcesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsResponse_H_
