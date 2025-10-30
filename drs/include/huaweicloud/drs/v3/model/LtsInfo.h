
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_LtsInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_LtsInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/LtsInfo_job.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// LTS信息。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  LtsInfo
    : public ModelBase
{
public:
    LtsInfo();
    virtual ~LtsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LtsInfo members

    /// <summary>
    /// 
    /// </summary>

    LtsInfo_job getJob() const;
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const LtsInfo_job& value);


protected:
    LtsInfo_job job_;
    bool jobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_LtsInfo_H_
