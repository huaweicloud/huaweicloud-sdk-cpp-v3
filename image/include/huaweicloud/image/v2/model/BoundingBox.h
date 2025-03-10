
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_BoundingBox_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_BoundingBox_H_


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
class HUAWEICLOUD_IMAGE_V2_EXPORT  BoundingBox
    : public ModelBase
{
public:
    BoundingBox();
    virtual ~BoundingBox();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BoundingBox members

    /// <summary>
    /// 检测框区域宽度
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 检测框区域高度
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 检测框左上角到垂直轴距离
    /// </summary>

    int32_t getTopLeftX() const;
    bool topLeftXIsSet() const;
    void unsettopLeftX();
    void setTopLeftX(int32_t value);

    /// <summary>
    /// 检测框左上角到水平轴距离
    /// </summary>

    int32_t getTopLeftY() const;
    bool topLeftYIsSet() const;
    void unsettopLeftY();
    void setTopLeftY(int32_t value);


protected:
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t topLeftX_;
    bool topLeftXIsSet_;
    int32_t topLeftY_;
    bool topLeftYIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_BoundingBox_H_
