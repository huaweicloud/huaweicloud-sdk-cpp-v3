
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EvsVolume_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EvsVolume_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  EvsVolume
    : public ModelBase
{
public:
    EvsVolume();
    virtual ~EvsVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EvsVolume members

    /// <summary>
    /// **参数解释**：系统盘大小。表示分配给系统盘的存储空间大小。 **约束限制**：不涉及。 **取值范围**：100 - 1024 GB **默认取值**：不涉及。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// **参数解释**：系统盘类型。表示系统盘的存储类型。 **约束限制**：不涉及。 **取值范围**： - ESSD：极速型SSD云硬盘 - GPSSD：通用型SSD云硬盘 - SAS：高IO云硬盘 - SATA：普通IO云硬盘 - SSD：超高IO云硬盘 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EvsVolume_H_
