
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultAddResourceReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultAddResourceReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/ResourceCreate.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultAddResourceReq
    : public ModelBase
{
public:
    VaultAddResourceReq();
    virtual ~VaultAddResourceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VaultAddResourceReq members

    /// <summary>
    /// 资源列表
    /// </summary>

    std::vector<ResourceCreate>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourceCreate>& value);


protected:
    std::vector<ResourceCreate> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultAddResourceReq_H_
