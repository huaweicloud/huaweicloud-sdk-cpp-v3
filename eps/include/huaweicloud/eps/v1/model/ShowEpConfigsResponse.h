
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEpConfigsResponse_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEpConfigsResponse_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/EnterpriseProjectConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ShowEpConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowEpConfigsResponse();
    virtual ~ShowEpConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEpConfigsResponse members

    /// <summary>
    /// 
    /// </summary>

    EnterpriseProjectConfig getSupportItem() const;
    bool supportItemIsSet() const;
    void unsetsupportItem();
    void setSupportItem(const EnterpriseProjectConfig& value);


protected:
    EnterpriseProjectConfig supportItem_;
    bool supportItemIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEpConfigsResponse_H_
