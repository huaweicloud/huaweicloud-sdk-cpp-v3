
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageTaggingBoundingBox_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageTaggingBoundingBox_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 目标检测框位置信息
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  ImageTaggingBoundingBox
    : public ModelBase
{
public:
    ImageTaggingBoundingBox();
    virtual ~ImageTaggingBoundingBox();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageTaggingBoundingBox members

    /// <summary>
    /// 检测框区域宽度
    /// </summary>

    double getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(double value);

    /// <summary>
    /// 检测框区域高度
    /// </summary>

    double getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(double value);

    /// <summary>
    /// 检测框左上角到垂直轴距离
    /// </summary>

    double getTopLeftX() const;
    bool topLeftXIsSet() const;
    void unsettopLeftX();
    void setTopLeftX(double value);

    /// <summary>
    /// 检测框左上角到水平轴距离
    /// </summary>

    double getTopLeftY() const;
    bool topLeftYIsSet() const;
    void unsettopLeftY();
    void setTopLeftY(double value);


protected:
    double width_;
    bool widthIsSet_;
    double height_;
    bool heightIsSet_;
    double topLeftX_;
    bool topLeftXIsSet_;
    double topLeftY_;
    bool topLeftYIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageTaggingBoundingBox_H_
