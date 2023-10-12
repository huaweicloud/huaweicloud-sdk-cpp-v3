
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_JobEntities_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_JobEntities_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/SubJob.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Job的响应信息。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  JobEntities
    : public ModelBase
{
public:
    JobEntities();
    virtual ~JobEntities();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobEntities members

    /// <summary>
    /// 云硬盘的类型。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 云硬盘的容量，单位为GB。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 云硬盘的ID。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 云硬盘的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 子Job的信息。当存在子Job信息时，entities中的其他字段将不会返回。
    /// </summary>

    std::vector<SubJob>& getSubJobs();
    bool subJobsIsSet() const;
    void unsetsubJobs();
    void setSubJobs(const std::vector<SubJob>& value);


protected:
    std::string volumeType_;
    bool volumeTypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<SubJob> subJobs_;
    bool subJobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_JobEntities_H_
