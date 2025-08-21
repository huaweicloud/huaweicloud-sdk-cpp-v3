
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EnableMultiAccountResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EnableMultiAccountResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/EnableMultiAccountResp_data.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  EnableMultiAccountResponse
    : public ModelBase, public HttpResponse
{
public:
    EnableMultiAccountResponse();
    virtual ~EnableMultiAccountResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnableMultiAccountResponse members

    /// <summary>
    /// 
    /// </summary>

    EnableMultiAccountResp_data getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const EnableMultiAccountResp_data& value);


protected:
    EnableMultiAccountResp_data data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EnableMultiAccountResponse_H_
