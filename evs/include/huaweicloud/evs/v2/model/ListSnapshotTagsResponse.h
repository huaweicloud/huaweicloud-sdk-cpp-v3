
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotTagsResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotTagsResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/ListResourceTagsResponseBody_tags.h>
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
class HUAWEICLOUD_EVS_V2_EXPORT  ListSnapshotTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSnapshotTagsResponse();
    virtual ~ListSnapshotTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSnapshotTagsResponse members

    /// <summary>
    /// **参数解释** 资源的所有标签信息。 **取值范围** 不涉及。
    /// </summary>

    std::vector<ListResourceTagsResponseBody_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ListResourceTagsResponseBody_tags>& value);


protected:
    std::vector<ListResourceTagsResponseBody_tags> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotTagsResponse_H_
