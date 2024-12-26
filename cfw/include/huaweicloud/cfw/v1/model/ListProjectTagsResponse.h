
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListProjectTagsResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListProjectTagsResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/TagValue.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListProjectTagsResponse
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
    /// tag列表
    /// </summary>

    std::vector<TagValue>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagValue>& value);


protected:
    std::vector<TagValue> tags_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListProjectTagsResponse_H_
