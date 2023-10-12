
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_BatchDeleteResourceTagsResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_BatchDeleteResourceTagsResponse_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  BatchDeleteResourceTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteResourceTagsResponse();
    virtual ~BatchDeleteResourceTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteResourceTagsResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_BatchDeleteResourceTagsResponse_H_
