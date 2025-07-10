
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_volume_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_volume_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 调整实例容量任务时返回。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GetJobInfoResponseBody_job_entities_volume
    : public ModelBase
{
public:
    GetJobInfoResponseBody_job_entities_volume();
    virtual ~GetJobInfoResponseBody_job_entities_volume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetJobInfoResponseBody_job_entities_volume members

    /// <summary>
    /// 磁盘类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 实例原本的磁盘大小（单位：GB）。
    /// </summary>

    std::string getOriginalSize() const;
    bool originalSizeIsSet() const;
    void unsetoriginalSize();
    void setOriginalSize(const std::string& value);

    /// <summary>
    /// 任务的目标磁盘大小（单位：GB）。
    /// </summary>

    std::string getTargetSize() const;
    bool targetSizeIsSet() const;
    void unsettargetSize();
    void setTargetSize(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string originalSize_;
    bool originalSizeIsSet_;
    std::string targetSize_;
    bool targetSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_volume_H_
