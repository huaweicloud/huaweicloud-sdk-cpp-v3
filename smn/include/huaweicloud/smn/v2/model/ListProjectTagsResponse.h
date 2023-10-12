
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListProjectTagsResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListProjectTagsResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/smn/v2/model/ResourceTags.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListProjectTagsResponse
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
    /// 资源标签列表。
    /// </summary>

    std::vector<ResourceTags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTags>& value);


protected:
    std::vector<ResourceTags> tags_;
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

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListProjectTagsResponse_H_
