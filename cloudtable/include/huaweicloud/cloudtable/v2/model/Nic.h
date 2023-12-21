
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Nic_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Nic_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  Nic
    : public ModelBase
{
public:
    Nic();
    virtual ~Nic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Nic members

    /// <summary>
    /// 子网ID
    /// </summary>

    std::string getNetId() const;
    bool netIdIsSet() const;
    void unsetnetId();
    void setNetId(const std::string& value);

    /// <summary>
    /// 安全组ID
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);


protected:
    std::string netId_;
    bool netIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Nic_H_
