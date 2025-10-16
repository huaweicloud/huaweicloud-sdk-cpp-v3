
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusServiceResponseBody_server_list_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusServiceResponseBody_server_list_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ShowStatusAppItem.h>
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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatusServiceResponseBody_server_list
    : public ModelBase
{
public:
    ShowStatusServiceResponseBody_server_list();
    virtual ~ShowStatusServiceResponseBody_server_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatusServiceResponseBody_server_list members

    /// <summary>
    /// 服务类型
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);

    /// <summary>
    /// 应用列表
    /// </summary>

    std::vector<ShowStatusAppItem>& getAppList();
    bool appListIsSet() const;
    void unsetappList();
    void setAppList(const std::vector<ShowStatusAppItem>& value);


protected:
    std::string serverType_;
    bool serverTypeIsSet_;
    std::vector<ShowStatusAppItem> appList_;
    bool appListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusServiceResponseBody_server_list_H_
