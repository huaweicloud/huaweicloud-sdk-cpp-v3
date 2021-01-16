
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePrivateipRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePrivateipRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/CreatePrivateipOption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  CreatePrivateipRequestBody
    : public ModelBase
{
public:
    CreatePrivateipRequestBody();
    virtual ~CreatePrivateipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePrivateipRequestBody members

    /// <summary>
    /// 私有IP列表对象
    /// </summary>

    std::vector<CreatePrivateipOption>& getPrivateips();
    bool privateipsIsSet() const;
    void unsetprivateips();
    void setPrivateips(const std::vector<CreatePrivateipOption>& value);


protected:
    std::vector<CreatePrivateipOption> privateips_;
    bool privateipsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePrivateipRequestBody_H_
