
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveVaultResourceResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveVaultResourceResponse_H_


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
class HUAWEICLOUD_CBR_V1_EXPORT  RemoveVaultResourceResponse
    : public ModelBase, public HttpResponse
{
public:
    RemoveVaultResourceResponse();
    virtual ~RemoveVaultResourceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveVaultResourceResponse members

    /// <summary>
    /// 移除的资源ID
    /// </summary>

    std::vector<std::string>& getRemoveResourceIds();
    bool removeResourceIdsIsSet() const;
    void unsetremoveResourceIds();
    void setRemoveResourceIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> removeResourceIds_;
    bool removeResourceIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveVaultResourceResponse_H_
