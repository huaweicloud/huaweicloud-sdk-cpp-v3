
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_EnablePolicyTypeResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_EnablePolicyTypeResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/RootDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  EnablePolicyTypeResponse
    : public ModelBase, public HttpResponse
{
public:
    EnablePolicyTypeResponse();
    virtual ~EnablePolicyTypeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnablePolicyTypeResponse members

    /// <summary>
    /// 
    /// </summary>

    RootDto getRoot() const;
    bool rootIsSet() const;
    void unsetroot();
    void setRoot(const RootDto& value);


protected:
    RootDto root_;
    bool rootIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_EnablePolicyTypeResponse_H_
