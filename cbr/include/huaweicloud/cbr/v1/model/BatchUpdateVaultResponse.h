
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchUpdateVaultResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchUpdateVaultResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  BatchUpdateVaultResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchUpdateVaultResponse();
    virtual ~BatchUpdateVaultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchUpdateVaultResponse members

    /// <summary>
    /// 已批量修改id列表
    /// </summary>

    std::vector<std::string>& getUpdatedVaultsId();
    bool updatedVaultsIdIsSet() const;
    void unsetupdatedVaultsId();
    void setUpdatedVaultsId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> updatedVaultsId_;
    bool updatedVaultsIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchUpdateVaultResponse_H_
