
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PodIdentityAssociation_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PodIdentityAssociation_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/ResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// pod-identity关联创建请求参数
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PodIdentityAssociation
    : public ModelBase
{
public:
    PodIdentityAssociation();
    virtual ~PodIdentityAssociation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PodIdentityAssociation members

    /// <summary>
    /// **参数解释：** pod-identity关联所要绑定的serviceaccount所属的命名空间。 **约束限制：** 该值不可修改 **取值范围：** 不涉及 **默认取值：** 无
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** pod-identity关联所要绑定的serviceaccount名称。 **约束限制：** 同一个serviceaccount最多创建一条pod-identity关联记录，不支持创建多个 **取值范围：** 不涉及 **默认取值：** 无
    /// </summary>

    std::string getServiceAccount() const;
    bool serviceAccountIsSet() const;
    void unsetserviceAccount();
    void setServiceAccount(const std::string& value);

    /// <summary>
    /// **参数解释：** pod-identity关联所要绑定的委托名称，委托可以是一般委托或信任委托。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 无
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// **参数解释：** pod-identity关联的资源标签列表。 **约束限制：** 不涉及 
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::string namespace_;
    bool namespaceIsSet_;
    std::string serviceAccount_;
    bool serviceAccountIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PodIdentityAssociation_H_
