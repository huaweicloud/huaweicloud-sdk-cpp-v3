
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowPrivateipRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowPrivateipRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ShowPrivateipRequest
    : public ModelBase
{
public:
    ShowPrivateipRequest();
    virtual ~ShowPrivateipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowPrivateipRequest members

    /// <summary>
    /// 私有IP ID
    /// </summary>

    std::string getPrivateipId() const;
    bool privateipIdIsSet() const;
    void unsetprivateipId();
    void setPrivateipId(const std::string& value);


protected:
    std::string privateipId_;
    bool privateipIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPrivateipRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPrivateipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowPrivateipRequest_H_
