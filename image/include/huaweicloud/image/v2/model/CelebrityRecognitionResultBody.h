
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_CelebrityRecognitionResultBody_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_CelebrityRecognitionResultBody_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_IMAGE_V2_EXPORT  CelebrityRecognitionResultBody
    : public ModelBase
{
public:
    CelebrityRecognitionResultBody();
    virtual ~CelebrityRecognitionResultBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CelebrityRecognitionResultBody members

    /// <summary>
    /// 置信度，取值范围 0-1。
    /// </summary>

    float getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(float value);

    /// <summary>
    /// 名人的面部信息，包括4个值：  h：人脸区域高度  w：人脸区域宽度  x：人脸区域左上角到y轴距离  y：人脸区域左上角到x轴距离 
    /// </summary>

    Object getFaceDetail() const;
    bool faceDetailIsSet() const;
    void unsetfaceDetail();
    void setFaceDetail(const Object& value);

    /// <summary>
    /// label为对应的名人信息。
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);


protected:
    float confidence_;
    bool confidenceIsSet_;
    Object faceDetail_;
    bool faceDetailIsSet_;
    std::string label_;
    bool labelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_CelebrityRecognitionResultBody_H_
