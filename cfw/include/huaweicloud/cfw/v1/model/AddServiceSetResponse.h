
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddServiceSetResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddServiceSetResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ServiceSetId.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  AddServiceSetResponse
    : public ModelBase, public HttpResponse
{
public:
    AddServiceSetResponse();
    virtual ~AddServiceSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddServiceSetResponse members

    /// <summary>
    /// 
    /// </summary>

    ServiceSetId getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const ServiceSetId& value);


protected:
    ServiceSetId data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddServiceSetResponse_H_
