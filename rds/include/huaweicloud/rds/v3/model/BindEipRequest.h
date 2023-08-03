
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BindEipRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BindEipRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_RDS_V3_EXPORT  BindEipRequest
    : public ModelBase
{
public:
    BindEipRequest();
    virtual ~BindEipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BindEipRequest members

    /// <summary>
    /// 待绑定的弹性公网IP地址，仅允许使用标准的IP地址格式。is_bind为true时必选
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// 弹性公网IP对应的ID，仅允许使用标准的UUID格式。is_bind为true时必选
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);

    /// <summary>
    /// - true，绑定弹性公网IP。 - false，解绑弹性公网IP。
    /// </summary>

    bool isIsBind() const;
    bool isBindIsSet() const;
    void unsetisBind();
    void setIsBind(bool value);


protected:
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string publicIpId_;
    bool publicIpIdIsSet_;
    bool isBind_;
    bool isBindIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BindEipRequest_H_
