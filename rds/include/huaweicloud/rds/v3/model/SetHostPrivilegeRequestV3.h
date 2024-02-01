
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetHostPrivilegeRequestV3_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetHostPrivilegeRequestV3_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetHostPrivilegeRequestV3
    : public ModelBase
{
public:
    SetHostPrivilegeRequestV3();
    virtual ~SetHostPrivilegeRequestV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetHostPrivilegeRequestV3 members

    /// <summary>
    /// 数据库用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// host信息
    /// </summary>

    std::vector<std::string>& getHosts();
    bool hostsIsSet() const;
    void unsethosts();
    void setHosts(const std::vector<std::string>& value);


protected:
    std::string userName_;
    bool userNameIsSet_;
    std::vector<std::string> hosts_;
    bool hostsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetHostPrivilegeRequestV3_H_
