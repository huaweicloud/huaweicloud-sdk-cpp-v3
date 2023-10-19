
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteScheduleTasKResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteScheduleTasKResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteScheduleTasKResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteScheduleTasKResponse();
    virtual ~DeleteScheduleTasKResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteScheduleTasKResponse members

    /// <summary>
    /// 结果。
    /// </summary>

    bool isResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(bool value);


protected:
    bool result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteScheduleTasKResponse_H_
