
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateDryRunConfigResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateDryRunConfigResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/DryRunConfigDto.h>

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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  UpdateDryRunConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDryRunConfigResponse();
    virtual ~UpdateDryRunConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDryRunConfigResponse members

    /// <summary>
    /// 
    /// </summary>

    DryRunConfigDto getRoot() const;
    bool rootIsSet() const;
    void unsetroot();
    void setRoot(const DryRunConfigDto& value);


protected:
    DryRunConfigDto root_;
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

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateDryRunConfigResponse_H_
