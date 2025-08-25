
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_DisAssociateAppsRequestBody_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_DisAssociateAppsRequestBody_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  DisAssociateAppsRequestBody
    : public ModelBase
{
public:
    DisAssociateAppsRequestBody();
    virtual ~DisAssociateAppsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisAssociateAppsRequestBody members

    /// <summary>
    /// 所需要绑定的集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 所需要解绑的应用ID列表
    /// </summary>

    std::vector<std::string>& getAppIds();
    bool appIdsIsSet() const;
    void unsetappIds();
    void setAppIds(const std::vector<std::string>& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::vector<std::string> appIds_;
    bool appIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_DisAssociateAppsRequestBody_H_
