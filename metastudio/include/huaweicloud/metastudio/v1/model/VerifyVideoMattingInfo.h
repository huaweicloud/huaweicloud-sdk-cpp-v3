
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VerifyVideoMattingInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VerifyVideoMattingInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自动扣绿时，不抠图的区域。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VerifyVideoMattingInfo
    : public ModelBase
{
public:
    VerifyVideoMattingInfo();
    virtual ~VerifyVideoMattingInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerifyVideoMattingInfo members

    /// <summary>
    /// 区域左上角像素点的X轴位置值。
    /// </summary>

    int32_t getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(int32_t value);

    /// <summary>
    /// 区域左上角像素点的Y轴位置值。
    /// </summary>

    int32_t getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(int32_t value);

    /// <summary>
    /// 区域宽度像素值。
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 区域高度像素值。
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 资源操作类型。 * RESERVED: 视频不需要抠绿的区域。 * DELETE：视频需要抠绿的区域。 * NO_DEGREEN：视频不需要去绿的区域。
    /// </summary>

    std::string getMethod() const;
    bool methodIsSet() const;
    void unsetmethod();
    void setMethod(const std::string& value);


protected:
    int32_t dx_;
    bool dxIsSet_;
    int32_t dy_;
    bool dyIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    std::string method_;
    bool methodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VerifyVideoMattingInfo_H_
