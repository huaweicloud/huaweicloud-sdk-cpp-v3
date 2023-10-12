
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateApplicationEndpointRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateApplicationEndpointRequest_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/CreateApplicationEndpointRequestBody.h>

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
class HUAWEICLOUD_SMN_V2_EXPORT  CreateApplicationEndpointRequest
    : public ModelBase
{
public:
    CreateApplicationEndpointRequest();
    virtual ~CreateApplicationEndpointRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateApplicationEndpointRequest members

    /// <summary>
    /// Application的唯一资源标识，可通过[查询Application](smn_api_57004.xml)获取该标识。
    /// </summary>

    std::string getApplicationUrn() const;
    bool applicationUrnIsSet() const;
    void unsetapplicationUrn();
    void setApplicationUrn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateApplicationEndpointRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateApplicationEndpointRequestBody& value);


protected:
    std::string applicationUrn_;
    bool applicationUrnIsSet_;
    CreateApplicationEndpointRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateApplicationEndpointRequest& dereference_from_shared_ptr(std::shared_ptr<CreateApplicationEndpointRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateApplicationEndpointRequest_H_
