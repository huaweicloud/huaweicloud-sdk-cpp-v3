
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ModifyDomainWebSwitchRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ModifyDomainWebSwitchRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/CadDomainSwitchRequest.h>

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
class HUAWEICLOUD_AAD_V1_EXPORT  ModifyDomainWebSwitchRequest
    : public ModelBase
{
public:
    ModifyDomainWebSwitchRequest();
    virtual ~ModifyDomainWebSwitchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyDomainWebSwitchRequest members

    /// <summary>
    /// 
    /// </summary>

    CadDomainSwitchRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CadDomainSwitchRequest& value);


protected:
    CadDomainSwitchRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyDomainWebSwitchRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyDomainWebSwitchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ModifyDomainWebSwitchRequest_H_
