
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AssociateAppsRequestBody_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AssociateAppsRequestBody_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CPCS_V1_EXPORT  AssociateAppsRequestBody
    : public ModelBase
{
public:
    AssociateAppsRequestBody();
    virtual ~AssociateAppsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateAppsRequestBody members

    /// <summary>
    /// 所需要绑定的应用ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 所需要绑定的集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AssociateAppsRequestBody_H_
