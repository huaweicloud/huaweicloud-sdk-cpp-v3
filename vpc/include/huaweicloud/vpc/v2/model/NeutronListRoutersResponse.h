
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListRoutersResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListRoutersResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronRouter.h>
#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListRoutersResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListRoutersResponse();
    virtual ~NeutronListRoutersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListRoutersResponse members

    /// <summary>
    /// router对象列表
    /// </summary>

    std::vector<NeutronRouter>& getRouters();
    bool routersIsSet() const;
    void unsetrouters();
    void setRouters(const std::vector<NeutronRouter>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getRoutersLinks();
    bool routersLinksIsSet() const;
    void unsetroutersLinks();
    void setRoutersLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronRouter> routers_;
    bool routersIsSet_;
    std::vector<NeutronPageLink> routersLinks_;
    bool routersLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListRoutersResponse_H_
