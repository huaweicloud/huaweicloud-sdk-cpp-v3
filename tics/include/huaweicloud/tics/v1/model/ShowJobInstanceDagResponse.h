
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobInstanceDagResponse_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobInstanceDagResponse_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/tics/v1/model/DeployVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ShowJobInstanceDagResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowJobInstanceDagResponse();
    virtual ~ShowJobInstanceDagResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobInstanceDagResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<DeployVo>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<DeployVo>& value);


protected:
    std::vector<DeployVo> body_;
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

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobInstanceDagResponse_H_
