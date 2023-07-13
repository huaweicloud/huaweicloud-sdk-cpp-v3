
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_AssociatePublicipsRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_AssociatePublicipsRequestBody_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/AssociatePublicipsOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 绑定弹性公网IP的请求体
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  AssociatePublicipsRequestBody
    : public ModelBase
{
public:
    AssociatePublicipsRequestBody();
    virtual ~AssociatePublicipsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AssociatePublicipsRequestBody members

    /// <summary>
    /// 
    /// </summary>

    AssociatePublicipsOption getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const AssociatePublicipsOption& value);


protected:
    AssociatePublicipsOption publicip_;
    bool publicipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_AssociatePublicipsRequestBody_H_
