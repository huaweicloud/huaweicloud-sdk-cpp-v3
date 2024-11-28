
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMainObjectDetectionInstance_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMainObjectDetectionInstance_H_


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
class HUAWEICLOUD_IMAGE_V2_EXPORT  ImageMainObjectDetectionInstance
    : public ModelBase
{
public:
    ImageMainObjectDetectionInstance();
    virtual ~ImageMainObjectDetectionInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageMainObjectDetectionInstance members

    /// <summary>
    /// 主体的类别，现阶段分为：bounding_box和main_object_box
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);

    /// <summary>
    ///  目标检测框位置信息，包括4个值：  width：检测框区域宽度  height：检测框区域高度  top_left_x：检测框左上角到垂直轴距离  top_left_y：检测框左上角到水平轴距离 properties: width: type: string description: 检测框区域高度 example: 139.58 height: type: string description: 检测框区域高度 example: 261.32 top_left_x: type: string description: 检测框左上角到垂直轴距离 example: 256.13 top_left_y: type: string description: 检测框左上角到水平轴距离 example: 85.2 
    /// </summary>

    Object getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const Object& value);

    /// <summary>
    /// 主体框的置信度,将Float型置信度转为String类型返回,Float取值范围（0~100）。
    /// </summary>

    std::string getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const std::string& value);


protected:
    std::string label_;
    bool labelIsSet_;
    Object location_;
    bool locationIsSet_;
    std::string confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMainObjectDetectionInstance_H_
