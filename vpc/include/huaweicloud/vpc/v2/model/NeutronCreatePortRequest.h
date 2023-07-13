
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreatePortRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreatePortRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreatePortRequestBody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreatePortRequest
    : public ModelBase
{
public:
    NeutronCreatePortRequest();
    virtual ~NeutronCreatePortRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreatePortRequest members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreatePortRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronCreatePortRequestBody& value);


protected:
    NeutronCreatePortRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronCreatePortRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronCreatePortRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreatePortRequest_H_
