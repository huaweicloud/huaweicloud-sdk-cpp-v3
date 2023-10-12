
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AddVaultResourceResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AddVaultResourceResponse_H_


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
class HUAWEICLOUD_CBR_V1_EXPORT  AddVaultResourceResponse
    : public ModelBase, public HttpResponse
{
public:
    AddVaultResourceResponse();
    virtual ~AddVaultResourceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddVaultResourceResponse members

    /// <summary>
    /// 已添加的资源ID列表
    /// </summary>

    std::vector<std::string>& getAddResourceIds();
    bool addResourceIdsIsSet() const;
    void unsetaddResourceIds();
    void setAddResourceIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> addResourceIds_;
    bool addResourceIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AddVaultResourceResponse_H_
