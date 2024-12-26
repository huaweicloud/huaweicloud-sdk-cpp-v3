
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowDomainSetDetailResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowDomainSetDetailResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/DomainSetVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowDomainSetDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainSetDetailResponse();
    virtual ~ShowDomainSetDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainSetDetailResponse members

    /// <summary>
    /// 
    /// </summary>

    DomainSetVo getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const DomainSetVo& value);


protected:
    DomainSetVo data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowDomainSetDetailResponse_H_
