
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_EnablePolicyTypeRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_EnablePolicyTypeRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/PolicyTypeReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  EnablePolicyTypeRequest
    : public ModelBase
{
public:
    EnablePolicyTypeRequest();
    virtual ~EnablePolicyTypeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnablePolicyTypeRequest members

    /// <summary>
    /// 
    /// </summary>

    PolicyTypeReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PolicyTypeReqBody& value);


protected:
    PolicyTypeReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    EnablePolicyTypeRequest& dereference_from_shared_ptr(std::shared_ptr<EnablePolicyTypeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_EnablePolicyTypeRequest_H_
