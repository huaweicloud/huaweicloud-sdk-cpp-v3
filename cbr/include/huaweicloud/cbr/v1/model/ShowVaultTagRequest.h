
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultTagRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultTagRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowVaultTagRequest
    : public ModelBase
{
public:
    ShowVaultTagRequest();
    virtual ~ShowVaultTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVaultTagRequest members

    /// <summary>
    /// 资源id
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    std::string vaultId_;
    bool vaultIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowVaultTagRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVaultTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultTagRequest_H_
