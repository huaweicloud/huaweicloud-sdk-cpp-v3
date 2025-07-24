
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowEtlDataRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowEtlDataRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/EtlRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowEtlDataRequest
    : public ModelBase
{
public:
    ShowEtlDataRequest();
    virtual ~ShowEtlDataRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEtlDataRequest members

    /// <summary>
    /// 
    /// </summary>

    EtlRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const EtlRequestBody& value);


protected:
    EtlRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowEtlDataRequest& dereference_from_shared_ptr(std::shared_ptr<ShowEtlDataRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowEtlDataRequest_H_
