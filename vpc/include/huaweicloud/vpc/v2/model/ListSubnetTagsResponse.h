
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSubnetTagsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSubnetTagsResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/ListTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ListSubnetTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSubnetTagsResponse();
    virtual ~ListSubnetTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSubnetTagsResponse members

    /// <summary>
    /// tag对象列表
    /// </summary>

    std::vector<ListTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ListTag>& value);


protected:
    std::vector<ListTag> tags_;
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

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSubnetTagsResponse_H_
