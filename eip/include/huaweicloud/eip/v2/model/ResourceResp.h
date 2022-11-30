
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ResourceResp_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ResourceResp_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/eip/v2/model/QuotaShowResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ResourceResp
    : public ModelBase
{
public:
    ResourceResp();
    virtual ~ResourceResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResourceResp members

    /// <summary>
    /// 资源配额对象
    /// </summary>

    std::vector<QuotaShowResp>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<QuotaShowResp>& value);


protected:
    std::vector<QuotaShowResp> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ResourceResp_H_
