
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListInstanceTagsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListInstanceTagsResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/QueryResourceTagItem.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  ListInstanceTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceTagsResponse();
    virtual ~ListInstanceTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceTagsResponse members

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<QueryResourceTagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<QueryResourceTagItem>& value);


protected:
    std::vector<QueryResourceTagItem> tags_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListInstanceTagsResponse_H_
