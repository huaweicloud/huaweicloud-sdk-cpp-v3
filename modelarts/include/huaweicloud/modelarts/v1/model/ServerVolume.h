
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerVolume_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerVolume_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerVolume
    : public ModelBase
{
public:
    ServerVolume();
    virtual ~ServerVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerVolume members

    /// <summary>
    /// **参数解释**：EVS盘大小。表示分配给系统盘的存储空间大小。 **约束限制**：不涉及。 **取值范围**：100 - 1024 GB **默认取值**：不涉及。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// **参数解释**：存储类型。表示系统盘或数据盘。 **约束限制**：不涉及。 **取值范围**： - ROOT：系统盘 - DATA：数据盘  **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：EVS盘类型。表示EVS盘的存储类型。 **约束限制**：不涉及。 **取值范围**： - ESSD：极速型SSD云硬盘 - GPSSD：通用型SSD云硬盘 - SAS：高IO云硬盘 - SATA：普通IO云硬盘 - SSD：超高IO云硬盘  **默认取值**：不涉及。
    /// </summary>

    std::string getEvsType() const;
    bool evsTypeIsSet() const;
    void unsetevsType();
    void setEvsType(const std::string& value);

    /// <summary>
    /// **参数解释**：EVS盘的ID。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getEvsId() const;
    bool evsIdIsSet() const;
    void unsetevsId();
    void setEvsId(const std::string& value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string evsType_;
    bool evsTypeIsSet_;
    std::string evsId_;
    bool evsIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerVolume_H_
