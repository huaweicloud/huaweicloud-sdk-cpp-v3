
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_UntagResourceReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_UntagResourceReqBody_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/Untag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The request body of the UntagResource operation.
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  UntagResourceReqBody
    : public ModelBase
{
public:
    UntagResourceReqBody();
    virtual ~UntagResourceReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UntagResourceReqBody members

    /// <summary>
    /// 一个或多个标签键值对的列表。标签键必须存在，而不是空字符串。标签值必须存在，但可以是空字符串。
    /// </summary>

    std::vector<Untag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Untag>& value);


protected:
    std::vector<Untag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_UntagResourceReqBody_H_
