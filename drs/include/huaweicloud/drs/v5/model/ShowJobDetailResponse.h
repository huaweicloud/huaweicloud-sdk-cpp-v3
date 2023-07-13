
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowJobDetailResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowJobDetailResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/JobDetailResp.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  ShowJobDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowJobDetailResponse();
    virtual ~ShowJobDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowJobDetailResponse members

    /// <summary>
    /// 
    /// </summary>

    JobDetailResp getJob() const;
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const JobDetailResp& value);


protected:
    JobDetailResp job_;
    bool jobIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowJobDetailResponse_H_
