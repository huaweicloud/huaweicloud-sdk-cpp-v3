
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_CreateImageCacheRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_CreateImageCacheRequestBody_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v5/model/ImageCacheBuildingConfig.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建镜像缓存-respuest结构体。
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  CreateImageCacheRequestBody
    : public ModelBase
{
public:
    CreateImageCacheRequestBody();
    virtual ~CreateImageCacheRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateImageCacheRequestBody members

    /// <summary>
    /// **参数解释：** 镜像缓存名称。 **约束限制：** 不涉及 **取值范围：** 以小写字母开头，由小写字母、数字、中划线(-)组成，长度范围1-128位，且不能以中划线(-)结尾。镜像缓存名称不可重复。 **默认取值：** 不涉及 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像缓存中的容器镜像列表。
    /// </summary>

    std::vector<std::string>& getImages();
    bool imagesIsSet() const;
    void unsetimages();
    void setImages(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 镜像缓存后端对应的存储盘大小，单位GiB。缓存对象为解压后的镜像文件，建议镜像缓存大小不低于该缓存中所有容器镜像大小总和的3倍。 **约束限制：** 不涉及 **取值范围：** [20-400] **默认取值：** 20 
    /// </summary>

    int32_t getImageCacheSize() const;
    bool imageCacheSizeIsSet() const;
    void unsetimageCacheSize();
    void setImageCacheSize(int32_t value);

    /// <summary>
    /// **参数解释：** 镜像缓存有效的天数,不设置或值为0表示永久有效。镜像缓存到达有效期后自动过期并删除。 **约束限制：** 不涉及 **取值范围：** [0-10000] **默认取值：** 0 
    /// </summary>

    int32_t getRetentionDays() const;
    bool retentionDaysIsSet() const;
    void unsetretentionDays();
    void setRetentionDays(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ImageCacheBuildingConfig getBuildingConfig() const;
    bool buildingConfigIsSet() const;
    void unsetbuildingConfig();
    void setBuildingConfig(const ImageCacheBuildingConfig& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> images_;
    bool imagesIsSet_;
    int32_t imageCacheSize_;
    bool imageCacheSizeIsSet_;
    int32_t retentionDays_;
    bool retentionDaysIsSet_;
    ImageCacheBuildingConfig buildingConfig_;
    bool buildingConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_CreateImageCacheRequestBody_H_
