
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_EmptyJsonResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_EmptyJsonResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  EmptyJsonResponse
    : public ModelBase
{
public:
    EmptyJsonResponse();
    virtual ~EmptyJsonResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EmptyJsonResponse members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_EmptyJsonResponse_H_
