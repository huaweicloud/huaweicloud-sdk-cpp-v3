
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePublicipsRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePublicipsRequestBody_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/UpdatePublicipOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 更新弹性公网IP的请求体
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  UpdatePublicipsRequestBody
    : public ModelBase
{
public:
    UpdatePublicipsRequestBody();
    virtual ~UpdatePublicipsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdatePublicipsRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdatePublicipOption getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const UpdatePublicipOption& value);


protected:
    UpdatePublicipOption publicip_;
    bool publicipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdatePublicipsRequestBody_H_
