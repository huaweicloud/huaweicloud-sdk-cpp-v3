
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultRemoveResourceReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultRemoveResourceReq_H_

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
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultRemoveResourceReq
    : public ModelBase
{
public:
    VaultRemoveResourceReq();
    virtual ~VaultRemoveResourceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VaultRemoveResourceReq members

    /// <summary>
    /// 要移除的资源ID列表 最小长度：1 最大长度：256
    /// </summary>

    std::vector<std::string>& getResourceIds();
    bool resourceIdsIsSet() const;
    void unsetresourceIds();
    void setResourceIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> resourceIds_;
    bool resourceIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultRemoveResourceReq_H_
