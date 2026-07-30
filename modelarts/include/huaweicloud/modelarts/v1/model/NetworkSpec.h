
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/NetworkConnection.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对外网络的描述。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkSpec
    : public ModelBase
{
public:
    NetworkSpec();
    virtual ~NetworkSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkSpec members

    /// <summary>
    /// **参数解释**：网络的cidr值。 **取值范围**： - 172.16.0.0/12~24 - 192.168.0.0/16~24
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkConnection getConnection() const;
    bool connectionIsSet() const;
    void unsetconnection();
    void setConnection(const NetworkConnection& value);


protected:
    std::string cidr_;
    bool cidrIsSet_;
    NetworkConnection connection_;
    bool connectionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkSpec_H_
