
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CreateJobResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CreateJobResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/CreateJobResp.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  CreateJobResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateJobResponse();
    virtual ~CreateJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateJobResponse members

    /// <summary>
    /// 
    /// </summary>

    CreateJobResp getJob() const;
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const CreateJobResp& value);


protected:
    CreateJobResp job_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CreateJobResponse_H_
