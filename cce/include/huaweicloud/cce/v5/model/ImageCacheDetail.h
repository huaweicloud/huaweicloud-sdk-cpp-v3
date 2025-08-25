
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_ImageCacheDetail_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_ImageCacheDetail_H_


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
/// 镜像缓存信息。
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  ImageCacheDetail
    : public ModelBase
{
public:
    ImageCacheDetail();
    virtual ~ImageCacheDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageCacheDetail members

    /// <summary>
    /// 镜像缓存名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像缓存ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 镜像缓存创建时间戳。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 镜像缓存中的容器镜像列表。
    /// </summary>

    std::vector<std::string>& getImages();
    bool imagesIsSet() const;
    void unsetimages();
    void setImages(const std::vector<std::string>& value);

    /// <summary>
    /// 镜像缓存后端对应的存储盘大小，单位GiB。
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

    /// <summary>
    /// **参数解释：** 镜像缓存的状态。 **约束限制：** 不涉及 **取值范围：** - Available： 可用状态，表示当前镜像缓存正常可用。 - Unavailable：不可用，表示镜像缓存状态异常或过期，不可使用。 - Creating：创建中，表示镜像缓存正在创建中。 - Deleting：删除中，表示镜像缓存正在删除中。 - Failed：创建失败，表示镜像缓存创建失败。 **默认取值：** 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 镜像缓存创建失败或异常的错误信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::vector<std::string> images_;
    bool imagesIsSet_;
    int32_t imageCacheSize_;
    bool imageCacheSizeIsSet_;
    int32_t retentionDays_;
    bool retentionDaysIsSet_;
    ImageCacheBuildingConfig buildingConfig_;
    bool buildingConfigIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_ImageCacheDetail_H_
