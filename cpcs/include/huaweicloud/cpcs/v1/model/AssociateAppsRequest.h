
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AssociateAppsRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AssociateAppsRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/AssociateAppsRequestBody.h>

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
class HUAWEICLOUD_CPCS_V1_EXPORT  AssociateAppsRequest
    : public ModelBase
{
public:
    AssociateAppsRequest();
    virtual ~AssociateAppsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateAppsRequest members

    /// <summary>
    /// 
    /// </summary>

    AssociateAppsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AssociateAppsRequestBody& value);


protected:
    AssociateAppsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateAppsRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateAppsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AssociateAppsRequest_H_
