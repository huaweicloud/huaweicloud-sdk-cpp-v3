
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingResponse_result_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingResponse_result_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/ImageMediaTaggingItemBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 调用成功时为图片标签内容。  调用失败时无此字段。
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  ImageMediaTaggingResponse_result
    : public ModelBase
{
public:
    ImageMediaTaggingResponse_result();
    virtual ~ImageMediaTaggingResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageMediaTaggingResponse_result members

    /// <summary>
    /// 标签列表集合。
    /// </summary>

    std::vector<ImageMediaTaggingItemBody>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ImageMediaTaggingItemBody>& value);


protected:
    std::vector<ImageMediaTaggingItemBody> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingResponse_result_H_
