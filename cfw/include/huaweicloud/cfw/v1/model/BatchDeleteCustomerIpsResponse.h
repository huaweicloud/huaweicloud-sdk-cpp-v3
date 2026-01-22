
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteCustomerIpsResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteCustomerIpsResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/BatchCustomerIpsResp_data.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  BatchDeleteCustomerIpsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteCustomerIpsResponse();
    virtual ~BatchDeleteCustomerIpsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteCustomerIpsResponse members

    /// <summary>
    /// 
    /// </summary>

    BatchCustomerIpsResp_data getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const BatchCustomerIpsResp_data& value);


protected:
    BatchCustomerIpsResp_data data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteCustomerIpsResponse_H_
