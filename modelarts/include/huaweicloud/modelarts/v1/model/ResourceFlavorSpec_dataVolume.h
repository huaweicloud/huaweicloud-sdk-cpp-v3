
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorSpec_dataVolume_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorSpec_dataVolume_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceFlavorSpec_dataVolume
    : public ModelBase
{
public:
    ResourceFlavorSpec_dataVolume();
    virtual ~ResourceFlavorSpec_dataVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceFlavorSpec_dataVolume members

    /// <summary>
    /// **参数解释**：磁盘类型[，具体内容可参考[磁盘类型及性能介绍](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)](tag:hc)。 **取值范围**：可选值如下： - SSD：超高IO硬盘 - GPSSD：通用型SSD - SAS：高IO硬盘
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// **参数解释**：磁盘大小，单位为Gi。 **取值范围**：不涉及。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);


protected:
    std::string volumeType_;
    bool volumeTypeIsSet_;
    std::string size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorSpec_dataVolume_H_
