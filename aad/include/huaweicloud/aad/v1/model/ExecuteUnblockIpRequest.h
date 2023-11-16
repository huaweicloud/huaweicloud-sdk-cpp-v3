
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ExecuteUnblockIpRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ExecuteUnblockIpRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/ExecuteUnblockIpRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ExecuteUnblockIpRequest
    : public ModelBase
{
public:
    ExecuteUnblockIpRequest();
    virtual ~ExecuteUnblockIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteUnblockIpRequest members

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExecuteUnblockIpRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ExecuteUnblockIpRequestBody& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    ExecuteUnblockIpRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExecuteUnblockIpRequest& dereference_from_shared_ptr(std::shared_ptr<ExecuteUnblockIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ExecuteUnblockIpRequest_H_
