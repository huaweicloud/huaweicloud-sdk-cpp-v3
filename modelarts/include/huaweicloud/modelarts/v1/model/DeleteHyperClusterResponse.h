
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteHyperClusterResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteHyperClusterResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteHyperClusterResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteHyperClusterResponse();
    virtual ~DeleteHyperClusterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteHyperClusterResponse members

    /// <summary>
    /// 
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteHyperClusterResponse_H_
