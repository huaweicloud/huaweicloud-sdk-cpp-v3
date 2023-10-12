
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DisassociatePublicipsRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DisassociatePublicipsRequestBody_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/DisassociatePublicipsOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 解绑弹性公网IP的请求体
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DisassociatePublicipsRequestBody
    : public ModelBase
{
public:
    DisassociatePublicipsRequestBody();
    virtual ~DisassociatePublicipsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociatePublicipsRequestBody members

    /// <summary>
    /// 
    /// </summary>

    DisassociatePublicipsOption getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const DisassociatePublicipsOption& value);


protected:
    DisassociatePublicipsOption publicip_;
    bool publicipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DisassociatePublicipsRequestBody_H_
