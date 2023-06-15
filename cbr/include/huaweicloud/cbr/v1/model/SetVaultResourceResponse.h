
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_SetVaultResourceResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_SetVaultResourceResponse_H_

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
class HUAWEICLOUD_CBR_V1_EXPORT  SetVaultResourceResponse
    : public ModelBase, public HttpResponse
{
public:
    SetVaultResourceResponse();
    virtual ~SetVaultResourceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SetVaultResourceResponse members

    /// <summary>
    /// 本次设置的资源id列表。
    /// </summary>

    std::vector<std::string>& getSetResourceIds();
    bool setResourceIdsIsSet() const;
    void unsetsetResourceIds();
    void setSetResourceIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> setResourceIds_;
    bool setResourceIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_SetVaultResourceResponse_H_
