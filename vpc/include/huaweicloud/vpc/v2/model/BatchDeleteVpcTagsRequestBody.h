
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchDeleteVpcTagsRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchDeleteVpcTagsRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/vpc/v2/model/ResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  BatchDeleteVpcTagsRequestBody
    : public ModelBase
{
public:
    BatchDeleteVpcTagsRequestBody();
    virtual ~BatchDeleteVpcTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteVpcTagsRequestBody members

    /// <summary>
    /// 操作标识
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchDeleteVpcTagsRequestBody_H_
