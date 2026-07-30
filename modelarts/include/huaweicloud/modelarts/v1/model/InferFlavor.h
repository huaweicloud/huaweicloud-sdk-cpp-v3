
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InferFlavor_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InferFlavor_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/BillingResource.h>
#include <huaweicloud/modelarts/v1/model/GPUResource.h>
#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/AscendResource.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  InferFlavor
    : public ModelBase
{
public:
    InferFlavor();
    virtual ~InferFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InferFlavor members

    /// <summary>
    /// **参数解释：** 架构类型。 **取值范围：** - X86_64 - arm64
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AscendResource getAscend() const;
    bool ascendIsSet() const;
    void unsetascend();
    void setAscend(const AscendResource& value);

    /// <summary>
    /// 
    /// </summary>

    BillingResource getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const BillingResource& value);

    /// <summary>
    /// **参数解释：** 规格处理器类型。 **取值范围：** - CPU - GPU - [ASCEND](tag:hws,hws_hk,hk,fcs_super)
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释：** 规格描述信息。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 规格类别。 **取值范围：** - DEFAULT：CodeLab规格。 - NOTEBOOK：Notebook规格。
    /// </summary>

    std::string getFeature() const;
    bool featureIsSet() const;
    void unsetfeature();
    void setFeature(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为免费规格。 **取值范围：** - true: 免费规格。 - false: 付费规格。
    /// </summary>

    bool isFree() const;
    bool freeIsSet() const;
    void unsetfree();
    void setFree(bool value);

    /// <summary>
    /// 
    /// </summary>

    GPUResource getGpu() const;
    bool gpuIsSet() const;
    void unsetgpu();
    void setGpu(const GPUResource& value);

    /// <summary>
    /// **参数解释：** 规格ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 内存大小。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(int64_t value);

    /// <summary>
    /// **参数解释：** 规格名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源是否充足。 **取值范围：** - true 资源不足。 - false 资源充足。
    /// </summary>

    bool isSoldOut() const;
    bool soldOutIsSet() const;
    void unsetsoldOut();
    void setSoldOut(bool value);

    /// <summary>
    /// **参数解释：** 规格支持的存储类型。
    /// </summary>

    std::vector<std::string>& getStorages();
    bool storagesIsSet() const;
    void unsetstorages();
    void setStorages(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** CPU核数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(int32_t value);

    /// <summary>
    /// **参数解释：** EVS磁盘最大容量。 **取值范围：** 不涉及。
    /// </summary>

    std::string getEvsMaxSize() const;
    bool evsMaxSizeIsSet() const;
    void unsetevsMaxSize();
    void setEvsMaxSize(const std::string& value);


protected:
    std::string arch_;
    bool archIsSet_;
    AscendResource ascend_;
    bool ascendIsSet_;
    BillingResource billing_;
    bool billingIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string feature_;
    bool featureIsSet_;
    bool free_;
    bool freeIsSet_;
    GPUResource gpu_;
    bool gpuIsSet_;
    std::string id_;
    bool idIsSet_;
    int64_t memory_;
    bool memoryIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool soldOut_;
    bool soldOutIsSet_;
    std::vector<std::string> storages_;
    bool storagesIsSet_;
    int32_t vcpus_;
    bool vcpusIsSet_;
    std::string evsMaxSize_;
    bool evsMaxSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InferFlavor_H_
