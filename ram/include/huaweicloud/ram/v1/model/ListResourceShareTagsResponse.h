
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ListResourceShareTagsResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ListResourceShareTagsResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/TagDTO.h>
#include <huaweicloud/ram/v1/model/PageInfoMarkerByKey.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ListResourceShareTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListResourceShareTagsResponse();
    virtual ~ListResourceShareTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourceShareTagsResponse members

    /// <summary>
    /// 一个或多个标签键值对的列表。标签键必须存在，而不是空字符串。标签值必须存在，但可以是空字符串。
    /// </summary>

    std::vector<TagDTO>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagDTO>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoMarkerByKey getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoMarkerByKey& value);


protected:
    std::vector<TagDTO> tags_;
    bool tagsIsSet_;
    PageInfoMarkerByKey pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ListResourceShareTagsResponse_H_
