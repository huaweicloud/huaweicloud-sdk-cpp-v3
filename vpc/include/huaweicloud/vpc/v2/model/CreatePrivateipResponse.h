
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePrivateipResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePrivateipResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/Privateip.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  CreatePrivateipResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePrivateipResponse();
    virtual ~CreatePrivateipResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePrivateipResponse members

    /// <summary>
    /// 私有IP列表对象
    /// </summary>

    std::vector<Privateip>& getPrivateips();
    bool privateipsIsSet() const;
    void unsetprivateips();
    void setPrivateips(const std::vector<Privateip>& value);


protected:
    std::vector<Privateip> privateips_;
    bool privateipsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePrivateipResponse_H_
