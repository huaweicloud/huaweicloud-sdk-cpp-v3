
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Nics_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Nics_H_

#include <huaweicloud/cloudtable/v2/CloudtableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 集群所在的网络信息以及安全组信息。
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  Nics
    : public ModelBase
{
public:
    Nics();
    virtual ~Nics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Nics members

    /// <summary>
    /// CloudTable集群所在网络ID。
    /// </summary>

    std::string getNetId() const;
    bool netIdIsSet() const;
    void unsetnetId();
    void setNetId(const std::string& value);

    /// <summary>
    /// CloudTable所在安全组对应的ID。
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

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Nics_H_
