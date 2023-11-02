
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListProjectResourceTagsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListProjectResourceTagsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ProjectResourceTagResponse_tags.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListProjectResourceTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectResourceTagsResponse();
    virtual ~ListProjectResourceTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectResourceTagsResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<ProjectResourceTagResponse_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ProjectResourceTagResponse_tags>& value);


protected:
    std::vector<ProjectResourceTagResponse_tags> tags_;
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

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListProjectResourceTagsResponse_H_
