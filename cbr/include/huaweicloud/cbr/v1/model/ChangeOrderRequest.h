
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeOrderRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeOrderRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CbcOrderChange.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ChangeOrderRequest
    : public ModelBase
{
public:
    ChangeOrderRequest();
    virtual ~ChangeOrderRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeOrderRequest members

    /// <summary>
    /// 
    /// </summary>

    CbcOrderChange getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CbcOrderChange& value);


protected:
    CbcOrderChange body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeOrderRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeOrderRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeOrderRequest_H_
