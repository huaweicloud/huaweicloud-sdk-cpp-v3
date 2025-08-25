
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_DisassociateAppsResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_DisassociateAppsResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  DisassociateAppsResponse
    : public ModelBase, public HttpResponse
{
public:
    DisassociateAppsResponse();
    virtual ~DisassociateAppsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateAppsResponse members

    /// <summary>
    /// 集群id
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 应用id列表
    /// </summary>

    std::vector<std::string>& getAppId();
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::vector<std::string>& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::vector<std::string> appId_;
    bool appIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_DisassociateAppsResponse_H_
