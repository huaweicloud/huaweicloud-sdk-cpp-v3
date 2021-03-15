
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImagesTagsResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImagesTagsResponse_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/Tags.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ListImagesTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListImagesTagsResponse();
    virtual ~ListImagesTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListImagesTagsResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<Tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tags>& value);


protected:
    std::vector<Tags> tags_;
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

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImagesTagsResponse_H_
