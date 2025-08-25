
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_DisassociateAppsRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_DisassociateAppsRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/DisAssociateAppsRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  DisassociateAppsRequest
    : public ModelBase
{
public:
    DisassociateAppsRequest();
    virtual ~DisassociateAppsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateAppsRequest members

    /// <summary>
    /// 
    /// </summary>

    DisAssociateAppsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DisAssociateAppsRequestBody& value);


protected:
    DisAssociateAppsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DisassociateAppsRequest& dereference_from_shared_ptr(std::shared_ptr<DisassociateAppsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_DisassociateAppsRequest_H_
