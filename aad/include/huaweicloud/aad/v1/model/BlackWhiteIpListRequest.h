
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_BlackWhiteIpListRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_BlackWhiteIpListRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  BlackWhiteIpListRequest
    : public ModelBase
{
public:
    BlackWhiteIpListRequest();
    virtual ~BlackWhiteIpListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BlackWhiteIpListRequest members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 规则类型。black - 黑名单， white - 白名单
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// ip列表
    /// </summary>

    std::vector<std::string>& getIps();
    bool ipsIsSet() const;
    void unsetips();
    void setIps(const std::vector<std::string>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> ips_;
    bool ipsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_BlackWhiteIpListRequest_H_
