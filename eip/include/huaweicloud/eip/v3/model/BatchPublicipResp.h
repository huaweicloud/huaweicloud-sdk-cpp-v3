
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_BatchPublicipResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_BatchPublicipResp_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/PublicipResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  BatchPublicipResp
    : public ModelBase
{
public:
    BatchPublicipResp();
    virtual ~BatchPublicipResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchPublicipResp members

    /// <summary>
    /// 响应码
    /// </summary>

    int32_t getStatusCode() const;
    bool statusCodeIsSet() const;
    void unsetstatusCode();
    void setStatusCode(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PublicipResp getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const PublicipResp& value);


protected:
    int32_t statusCode_;
    bool statusCodeIsSet_;
    PublicipResp publicip_;
    bool publicipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_BatchPublicipResp_H_
