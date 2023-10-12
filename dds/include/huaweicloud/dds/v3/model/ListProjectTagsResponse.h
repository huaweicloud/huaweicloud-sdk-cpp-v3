
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListProjectTagsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListProjectTagsResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/QueryProjectTagItem.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  ListProjectTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectTagsResponse();
    virtual ~ListProjectTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectTagsResponse members

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<QueryProjectTagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<QueryProjectTagItem>& value);


protected:
    std::vector<QueryProjectTagItem> tags_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListProjectTagsResponse_H_
