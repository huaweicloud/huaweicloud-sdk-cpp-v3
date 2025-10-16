
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusServiceResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusServiceResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cpcs/v1/model/ShowStatusServiceResponseBody_server_list.h>
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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatusServiceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStatusServiceResponse();
    virtual ~ShowStatusServiceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatusServiceResponse members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 服务列表
    /// </summary>

    std::vector<ShowStatusServiceResponseBody_server_list>& getServerList();
    bool serverListIsSet() const;
    void unsetserverList();
    void setServerList(const std::vector<ShowStatusServiceResponseBody_server_list>& value);


protected:
    std::string metricName_;
    bool metricNameIsSet_;
    std::vector<ShowStatusServiceResponseBody_server_list> serverList_;
    bool serverListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusServiceResponse_H_
