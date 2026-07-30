
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageCreateReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageCreateReq_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ImageCreateReq
    : public ModelBase
{
public:
    ImageCreateReq();
    virtual ~ImageCreateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageCreateReq members

    /// <summary>
    /// **参数解释**：该镜像所对应的描述信息。 **约束限制**：不涉及。 **取值范围**：长度限制512个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像名称。 **约束限制**：不涉及。 **取值范围**：长度限制为128个字符，支持小写字母、数字、中划线、下划线和点，字符串必须以小写字母或数字开头和结尾。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像所属组织，可以在SWR控制台“组织管理”创建和查看。 **约束限制**：不涉及。 **取值范围**：长度限制为64个字符，支持大小写字母、数字、中划线、下划线和点号，且必须是小写字母开头。 **默认取值**：不涉及。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像tag。 **约束限制**：不涉及。 **取值范围**：长度限制64个字符，支持大小写字母、数字、中划线、下划线和点号。 **默认取值**：不涉及。
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：企业版SWR仓库ID。 **参数约束**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getSwrInstanceId() const;
    bool swrInstanceIdIsSet() const;
    void unsetswrInstanceId();
    void setSwrInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：企业版SWR仓库域名。 **参数约束**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getSwrInstanceDomain() const;
    bool swrInstanceDomainIsSet() const;
    void unsetswrInstanceDomain();
    void setSwrInstanceDomain(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string swrInstanceId_;
    bool swrInstanceIdIsSet_;
    std::string swrInstanceDomain_;
    bool swrInstanceDomainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageCreateReq_H_
