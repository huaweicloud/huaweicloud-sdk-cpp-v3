
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CountPublicIpResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CountPublicIpResponse_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  CountPublicIpResponse
    : public ModelBase, public HttpResponse
{
public:
    CountPublicIpResponse();
    virtual ~CountPublicIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CountPublicIpResponse members

    /// <summary>
    /// 弹性公网数量
    /// </summary>

    int32_t getElasticipSize() const;
    bool elasticipSizeIsSet() const;
    void unsetelasticipSize();
    void setElasticipSize(int32_t value);


protected:
    int32_t elasticipSize_;
    bool elasticipSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CountPublicIpResponse_H_
