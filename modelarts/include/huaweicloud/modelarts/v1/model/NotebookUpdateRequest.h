
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookUpdateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookUpdateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/EndpointsReq.h>
#include <huaweicloud/modelarts/v1/model/CustomHooks.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/VolumeMountRequest.h>
#include <huaweicloud/modelarts/v1/model/AffinityType.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/NotebookCustomSpec.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NotebookUpdateRequest
    : public ModelBase
{
public:
    NotebookUpdateRequest();
    virtual ~NotebookUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NotebookUpdateRequest members

    /// <summary>
    /// **参数解释**：支持更新实例描述信息。 **约束限制**：不涉及。 **取值范围**：长度限制为512字符，且不能包含字符&amp;&lt;&gt;\&quot;&#39;/。 **默认取值**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：仅在本地IDE（如PyCharm、VS Code）或SSH客户端接入Notebook。 **约束限制**：仅在本地IDE（如PyCharm、VS Code）或SSH客户端，通过SSH远程接入Notebook实例时需要的相关配置。
    /// </summary>

    std::vector<EndpointsReq>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<EndpointsReq>& value);

    /// <summary>
    /// **参数解释**：支持变更实例的机器规格。支持变更的规格可以通过本章节的[查询支持可切换规格列表](ShowSwitchableFlavors.xml)的API获取。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NotebookCustomSpec getCustomSpec() const;
    bool customSpecIsSet() const;
    void unsetcustomSpec();
    void setCustomSpec(const NotebookCustomSpec& value);

    /// <summary>
    /// **参数解释**：支持更新镜像ID，镜像ID参考[查询支持的镜像列表](ListImage.xml)获取。 **约束限制**：不涉及。 **取值范围**：调用[查询支持的镜像列表](ListImage.xml)接口获取的合法镜像ID列表。 **默认取值**：不涉及。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释**：支持更新实例名称。 **约束限制**：不涉及。 **取值范围**：长度限制为128个字符，支持大小写字母、数字、中划线和下划线，名称可重复。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：EVS实例支持动态扩充的容量，单位GB。只允许扩容，不允许缩容。 **约束限制**：不涉及。 **取值范围**：最大允许扩容至4096。 **默认取值**：不涉及。
    /// </summary>

    int32_t getStorageNewSize() const;
    bool storageNewSizeIsSet() const;
    void unsetstorageNewSize();
    void setStorageNewSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CustomHooks getHooks() const;
    bool hooksIsSet() const;
    void unsethooks();
    void setHooks(const CustomHooks& value);

    /// <summary>
    /// 
    /// </summary>

    AffinityType getAffinity() const;
    bool affinityIsSet() const;
    void unsetaffinity();
    void setAffinity(const AffinityType& value);

    /// <summary>
    /// **参数解释**：DEW存储的用户AKSK凭据名称。 **参数约束**：当category为OBS时必填，仅支持大小写字母、数字、中划线、下划线，长度 1-64 字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDewSecretName() const;
    bool dewSecretNameIsSet() const;
    void unsetdewSecretName();
    void setDewSecretName(const std::string& value);

    /// <summary>
    /// **参数解释**：扩展存储信息。 **约束限制**：不涉及。
    /// </summary>

    std::vector<VolumeMountRequest>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<VolumeMountRequest>& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::vector<EndpointsReq> endpoints_;
    bool endpointsIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    NotebookCustomSpec customSpec_;
    bool customSpecIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t storageNewSize_;
    bool storageNewSizeIsSet_;
    CustomHooks hooks_;
    bool hooksIsSet_;
    AffinityType affinity_;
    bool affinityIsSet_;
    std::string dewSecretName_;
    bool dewSecretNameIsSet_;
    std::vector<VolumeMountRequest> dataVolumes_;
    bool dataVolumesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookUpdateRequest_H_
