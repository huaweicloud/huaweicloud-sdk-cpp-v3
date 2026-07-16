
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PodIdentityAssociationUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PodIdentityAssociationUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// pod-identity关联更新请求参数
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PodIdentityAssociationUpdate
    : public ModelBase
{
public:
    PodIdentityAssociationUpdate();
    virtual ~PodIdentityAssociationUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PodIdentityAssociationUpdate members

    /// <summary>
    /// **参数解释：** pod-identity关联所要绑定的委托名称，委托可以是一般委托或信任委托。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 无
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);


protected:
    std::string agencyName_;
    bool agencyNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PodIdentityAssociationUpdate_H_
