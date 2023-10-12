
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_DisableEnterpriseProjectRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_DisableEnterpriseProjectRequest_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/DisableAction.h>
#include <string>

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
class HUAWEICLOUD_EPS_V1_EXPORT  DisableEnterpriseProjectRequest
    : public ModelBase
{
public:
    DisableEnterpriseProjectRequest();
    virtual ~DisableEnterpriseProjectRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisableEnterpriseProjectRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DisableAction getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DisableAction& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    DisableAction body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DisableEnterpriseProjectRequest& dereference_from_shared_ptr(std::shared_ptr<DisableEnterpriseProjectRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_DisableEnterpriseProjectRequest_H_
