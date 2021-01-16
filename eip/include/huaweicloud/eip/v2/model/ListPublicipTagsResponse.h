
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipTagsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipTagsResponse_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/TagResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ListPublicipTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPublicipTagsResponse();
    virtual ~ListPublicipTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPublicipTagsResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<TagResp>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagResp>& value);


protected:
    std::vector<TagResp> tags_;
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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipTagsResponse_H_
