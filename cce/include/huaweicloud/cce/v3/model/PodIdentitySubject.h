
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PodIdentitySubject_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PodIdentitySubject_H_


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
/// 委托凭据所属的ServiceAccount归属信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PodIdentitySubject
    : public ModelBase
{
public:
    PodIdentitySubject();
    virtual ~PodIdentitySubject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PodIdentitySubject members

    /// <summary>
    /// **参数解释**： ServiceAccount所属的命名空间 **约束限制**： 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** ServiceAccount名称 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getServiceAccount() const;
    bool serviceAccountIsSet() const;
    void unsetserviceAccount();
    void setServiceAccount(const std::string& value);


protected:
    std::string namespace_;
    bool namespaceIsSet_;
    std::string serviceAccount_;
    bool serviceAccountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PodIdentitySubject_H_
