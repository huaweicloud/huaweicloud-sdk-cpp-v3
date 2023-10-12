
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_UpdateEnterpriseProjectResponse_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_UpdateEnterpriseProjectResponse_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/EpDetail.h>

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
class HUAWEICLOUD_EPS_V1_EXPORT  UpdateEnterpriseProjectResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateEnterpriseProjectResponse();
    virtual ~UpdateEnterpriseProjectResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateEnterpriseProjectResponse members

    /// <summary>
    /// 
    /// </summary>

    EpDetail getEnterpriseProject() const;
    bool enterpriseProjectIsSet() const;
    void unsetenterpriseProject();
    void setEnterpriseProject(const EpDetail& value);


protected:
    EpDetail enterpriseProject_;
    bool enterpriseProjectIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_UpdateEnterpriseProjectResponse_H_
