
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateComparePolicyResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateComparePolicyResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UpdateComparePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateComparePolicyResponse();
    virtual ~UpdateComparePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateComparePolicyResponse members

    /// <summary>
    /// 空响应体。
    /// </summary>

    Object getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const Object& value);


protected:
    Object body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateComparePolicyResponse_H_
