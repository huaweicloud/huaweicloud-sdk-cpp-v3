
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowJobDetailResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowJobDetailResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/JobDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowJobDetailResponse
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

    JobDetail getJob() const;
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const JobDetail& value);


protected:
    JobDetail job_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowJobDetailResponse_H_
