
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageTaggingInstance_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageTaggingInstance_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/ImageTaggingBoundingBox.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  ImageTaggingInstance
    : public ModelBase
{
public:
    ImageTaggingInstance();
    virtual ~ImageTaggingInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageTaggingInstance members

    /// <summary>
    /// 
    /// </summary>

    ImageTaggingBoundingBox getBoundingBox() const;
    bool boundingBoxIsSet() const;
    void unsetboundingBox();
    void setBoundingBox(const ImageTaggingBoundingBox& value);

    /// <summary>
    /// 检测标签置信度,将Float型置信度转为String类型返回,Float取值范围（0~100）。
    /// </summary>

    std::string getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const std::string& value);


protected:
    ImageTaggingBoundingBox boundingBox_;
    bool boundingBoxIsSet_;
    std::string confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageTaggingInstance_H_