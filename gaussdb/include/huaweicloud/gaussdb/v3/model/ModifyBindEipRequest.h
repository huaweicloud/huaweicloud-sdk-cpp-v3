
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyBindEipRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyBindEipRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyBindEipRequest
    : public ModelBase
{
public:
    ModifyBindEipRequest();
    virtual ~ModifyBindEipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyBindEipRequest members

    /// <summary>
    /// 待绑定的弹性公网IP地址。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// 弹性公网IP地址对应的ID。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);


protected:
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string publicIpId_;
    bool publicIpIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyBindEipRequest_H_
