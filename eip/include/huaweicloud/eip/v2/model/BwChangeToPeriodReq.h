
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BwChangeToPeriodReq_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BwChangeToPeriodReq_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/CreatePrePaidPublicipExtendParamOption.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务按需转包请求体
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BwChangeToPeriodReq
    : public ModelBase
{
public:
    BwChangeToPeriodReq();
    virtual ~BwChangeToPeriodReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BwChangeToPeriodReq members

    /// <summary>
    /// 待按需转包带宽列表 
    /// </summary>

    std::vector<std::string>& getBandwidthIds();
    bool bandwidthIdsIsSet() const;
    void unsetbandwidthIds();
    void setBandwidthIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    CreatePrePaidPublicipExtendParamOption getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const CreatePrePaidPublicipExtendParamOption& value);


protected:
    std::vector<std::string> bandwidthIds_;
    bool bandwidthIdsIsSet_;
    CreatePrePaidPublicipExtendParamOption extendParam_;
    bool extendParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BwChangeToPeriodReq_H_
