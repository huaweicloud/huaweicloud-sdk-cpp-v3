
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowServerVersionRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowServerVersionRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowServerVersionRequest
    : public ModelBase
{
public:
    ShowServerVersionRequest();
    virtual ~ShowServerVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerVersionRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowServerVersionRequest& dereference_from_shared_ptr(std::shared_ptr<ShowServerVersionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowServerVersionRequest_H_
