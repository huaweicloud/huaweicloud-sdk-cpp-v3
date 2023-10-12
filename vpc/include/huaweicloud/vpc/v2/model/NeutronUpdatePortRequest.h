
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdatePortRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdatePortRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vpc/v2/model/NeutronUpdatePortRequestBody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdatePortRequest
    : public ModelBase
{
public:
    NeutronUpdatePortRequest();
    virtual ~NeutronUpdatePortRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdatePortRequest members

    /// <summary>
    /// 端口ID
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdatePortRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronUpdatePortRequestBody& value);


protected:
    std::string portId_;
    bool portIdIsSet_;
    NeutronUpdatePortRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronUpdatePortRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronUpdatePortRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdatePortRequest_H_
