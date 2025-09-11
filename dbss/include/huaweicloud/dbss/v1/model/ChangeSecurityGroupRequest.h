
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChangeSecurityGroupRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChangeSecurityGroupRequest_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  ChangeSecurityGroupRequest
    : public ModelBase
{
public:
    ChangeSecurityGroupRequest();
    virtual ~ChangeSecurityGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeSecurityGroupRequest members

    /// <summary>
    /// 安全组ID
    /// </summary>

    std::vector<std::string>& getSecurityGroupIds();
    bool securityGroupIdsIsSet() const;
    void unsetsecurityGroupIds();
    void setSecurityGroupIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> securityGroupIds_;
    bool securityGroupIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChangeSecurityGroupRequest_H_
