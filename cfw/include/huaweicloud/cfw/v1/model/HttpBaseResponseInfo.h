
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpBaseResponseInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpBaseResponseInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  HttpBaseResponseInfo
    : public ModelBase
{
public:
    HttpBaseResponseInfo();
    virtual ~HttpBaseResponseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpBaseResponseInfo members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpBaseResponseInfo_H_
