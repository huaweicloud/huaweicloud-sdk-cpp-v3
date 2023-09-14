
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateApplicationEndpointRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateApplicationEndpointRequest_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/UpdateApplicationEndpointRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateApplicationEndpointRequest
    : public ModelBase
{
public:
    UpdateApplicationEndpointRequest();
    virtual ~UpdateApplicationEndpointRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateApplicationEndpointRequest members

    /// <summary>
    /// Endpoint的唯一资源标识，可通过[查询Application的Endpoint列表](smn_api_58004.xml)获取该标识。
    /// </summary>

    std::string getEndpointUrn() const;
    bool endpointUrnIsSet() const;
    void unsetendpointUrn();
    void setEndpointUrn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateApplicationEndpointRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateApplicationEndpointRequestBody& value);


protected:
    std::string endpointUrn_;
    bool endpointUrnIsSet_;
    UpdateApplicationEndpointRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateApplicationEndpointRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateApplicationEndpointRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateApplicationEndpointRequest_H_
