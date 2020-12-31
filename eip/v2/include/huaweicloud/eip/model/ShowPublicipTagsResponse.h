
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicipTagsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicipTagsResponse_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <vector>
#include "huaweicloud/eip/model/ResourceTagResp.h"

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
class HUAWEICLOUD_EIP_EXPORT  ShowPublicipTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPublicipTagsResponse();
    virtual ~ShowPublicipTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowPublicipTagsResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<ResourceTagResp>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTagResp>& value);


protected:
    std::vector<ResourceTagResp> tags_;
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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicipTagsResponse_H_
