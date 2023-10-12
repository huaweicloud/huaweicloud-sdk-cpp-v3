
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_CreateEnterpriseProjectRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_CreateEnterpriseProjectRequest_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/EnterpriseProject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  CreateEnterpriseProjectRequest
    : public ModelBase
{
public:
    CreateEnterpriseProjectRequest();
    virtual ~CreateEnterpriseProjectRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEnterpriseProjectRequest members

    /// <summary>
    /// 
    /// </summary>

    EnterpriseProject getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const EnterpriseProject& value);


protected:
    EnterpriseProject body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateEnterpriseProjectRequest& dereference_from_shared_ptr(std::shared_ptr<CreateEnterpriseProjectRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_CreateEnterpriseProjectRequest_H_
