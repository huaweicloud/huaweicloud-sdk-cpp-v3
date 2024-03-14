
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PublicIpConfig_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PublicIpConfig_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 租户公网IP信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PublicIpConfig
    : public ModelBase
{
public:
    PublicIpConfig();
    virtual ~PublicIpConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicIpConfig members

    /// <summary>
    /// 指定公网IP的ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 指定公网IP
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// 指定公网IP绑定任务的类型： - 主备任务：主是master，备是slave - 其他固定传master
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PublicIpConfig_H_
