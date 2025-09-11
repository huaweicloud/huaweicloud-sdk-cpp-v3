
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowProjectTagsListResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowProjectTagsListResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/TagItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowProjectTagsListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProjectTagsListResponse();
    virtual ~ShowProjectTagsListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectTagsListResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<TagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagItem>& value);

    /// <summary>
    /// 系统标签列表
    /// </summary>

    std::vector<TagItem>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<TagItem>& value);


protected:
    std::vector<TagItem> tags_;
    bool tagsIsSet_;
    std::vector<TagItem> sysTags_;
    bool sysTagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowProjectTagsListResponse_H_
