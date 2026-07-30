
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Flavor_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Flavor_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AscendInfo.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/BillingInfo.h>
#include <huaweicloud/modelarts/v1/model/GPUsInfo.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Flavor
    : public ModelBase
{
public:
    Flavor();
    virtual ~Flavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Flavor members

    /// <summary>
    /// **参数解释**：硬件架构类型。 **取值范围**：枚举类型，取值如下： - x86_64：X86架构。 - aarch64：ARM架构。
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BillingInfo getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const BillingInfo& value);

    /// <summary>
    /// **参数解释**：处理器类型。 **取值范围**：枚举类型，取值如下： - CPU - GPU - ASCEND
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：规格描述信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：规格包含EVS时，EVS存储创建的最大上限(单位：GB)。 **取值范围**：不涉及。
    /// </summary>

    std::string getEvsMaxSize() const;
    bool evsMaxSizeIsSet() const;
    void unsetevsMaxSize();
    void setEvsMaxSize(const std::string& value);

    /// <summary>
    /// **参数解释**：规格包含EVS时，EVS存储的sku编码。 **取值范围**：不涉及。
    /// </summary>

    std::string getEvsSkuCode() const;
    bool evsSkuCodeIsSet() const;
    void unsetevsSkuCode();
    void setEvsSkuCode(const std::string& value);

    /// <summary>
    /// **参数解释**：规格类别。 **取值范围**：枚举类型，取值如下： - DEFAULT：CodeLab规格。 - NOTEBOOK：Notebook规格。
    /// </summary>

    std::string getFeature() const;
    bool featureIsSet() const;
    void unsetfeature();
    void setFeature(const std::string& value);

    /// <summary>
    /// **参数解释**：是否为免费规格。 **取值范围**：布尔类型： - true：免费规格。 - false：非免费规格。
    /// </summary>

    bool isFree() const;
    bool freeIsSet() const;
    void unsetfree();
    void setFree(bool value);

    /// <summary>
    /// **参数解释**：支持站点类型。 **取值范围**：枚举类型，取值如下： - COMMON：国内与国际站都支持。 - NATIONAL：仅在国内站支持。 - INTERNATIONAL：仅在国际站支持。 - NONE：国内与国际站都不支持。
    /// </summary>

    std::string getGrowSupportType() const;
    bool growSupportTypeIsSet() const;
    void unsetgrowSupportType();
    void setGrowSupportType(const std::string& value);

    /// <summary>
    /// **参数解释**：规格ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：内存大小。 **取值范围**：不涉及。
    /// </summary>

    std::string getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(const std::string& value);

    /// <summary>
    /// **参数解释**：规格名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：是否告罄。 **取值范围**：布尔类型： - true：告罄。 - false：未告罄。
    /// </summary>

    bool isSoldOut() const;
    bool soldOutIsSet() const;
    void unsetsoldOut();
    void setSoldOut(bool value);

    /// <summary>
    /// **参数解释**：规格支持的存储类型。 **取值范围**：枚举类型，取值如下： - EVS：云硬盘。 - OBS：对象存储服务。 - OBSFS：并行文件系统。 - EFS：弹性文件服务（SFS Turbo）
    /// </summary>

    std::vector<std::string>& getStorages();
    bool storagesIsSet() const;
    void unsetstorages();
    void setStorages(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：CPU核数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    GPUsInfo getGpu() const;
    bool gpuIsSet() const;
    void unsetgpu();
    void setGpu(const GPUsInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AscendInfo getAscend() const;
    bool ascendIsSet() const;
    void unsetascend();
    void setAscend(const AscendInfo& value);


protected:
    std::string arch_;
    bool archIsSet_;
    BillingInfo billing_;
    bool billingIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string evsMaxSize_;
    bool evsMaxSizeIsSet_;
    std::string evsSkuCode_;
    bool evsSkuCodeIsSet_;
    std::string feature_;
    bool featureIsSet_;
    bool free_;
    bool freeIsSet_;
    std::string growSupportType_;
    bool growSupportTypeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string memory_;
    bool memoryIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool soldOut_;
    bool soldOutIsSet_;
    std::vector<std::string> storages_;
    bool storagesIsSet_;
    int32_t vcpus_;
    bool vcpusIsSet_;
    GPUsInfo gpu_;
    bool gpuIsSet_;
    AscendInfo ascend_;
    bool ascendIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Flavor_H_
