
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateVaultResourceResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateVaultResourceResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  MigrateVaultResourceResponse
    : public ModelBase, public HttpResponse
{
public:
    MigrateVaultResourceResponse();
    virtual ~MigrateVaultResourceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateVaultResourceResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getMigratedResources();
    bool migratedResourcesIsSet() const;
    void unsetmigratedResources();
    void setMigratedResources(const std::vector<std::string>& value);


protected:
    std::vector<std::string> migratedResources_;
    bool migratedResourcesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateVaultResourceResponse_H_
