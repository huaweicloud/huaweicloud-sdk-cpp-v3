
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SecurityGroupRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SecurityGroupRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SecurityGroupRequest
    : public ModelBase
{
public:
    SecurityGroupRequest();
    virtual ~SecurityGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecurityGroupRequest members

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 安全组ID列表(目前只支持传一个ID)
    /// </summary>

    std::vector<std::string>& getSecuritygroupIds();
    bool securitygroupIdsIsSet() const;
    void unsetsecuritygroupIds();
    void setSecuritygroupIds(const std::vector<std::string>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::vector<std::string> securitygroupIds_;
    bool securitygroupIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SecurityGroupRequest_H_
