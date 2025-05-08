
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ImageSpriteTaskOutPut_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ImageSpriteTaskOutPut_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ImageSpriteTaskOutPut
    : public ModelBase
{
public:
    ImageSpriteTaskOutPut();
    virtual ~ImageSpriteTaskOutPut();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageSpriteTaskOutPut members

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getObsInfo() const;
    bool obsInfoIsSet() const;
    void unsetobsInfo();
    void setObsInfo(const ObsInfo& value);

    /// <summary>
    /// 雪碧图的高度
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 雪碧图的宽度
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 雪碧图对象列表
    /// </summary>

    std::vector<std::string>& getSpriteImageList();
    bool spriteImageListIsSet() const;
    void unsetspriteImageList();
    void setSpriteImageList(const std::vector<std::string>& value);


protected:
    ObsInfo obsInfo_;
    bool obsInfoIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t width_;
    bool widthIsSet_;
    std::vector<std::string> spriteImageList_;
    bool spriteImageListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ImageSpriteTaskOutPut_H_
