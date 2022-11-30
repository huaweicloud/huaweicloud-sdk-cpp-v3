
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_JobProgressEntities_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_JobProgressEntities_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  JobProgressEntities
    : public ModelBase
{
public:
    JobProgressEntities();
    virtual ~JobProgressEntities();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// JobProgressEntities members

    /// <summary>
    /// 镜像ID
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 当前任务名称
    /// </summary>

    std::string getCurrentTask() const;
    bool currentTaskIsSet() const;
    void unsetcurrentTask();
    void setCurrentTask(const std::string& value);

    /// <summary>
    /// 镜像名称
    /// </summary>

    std::string getImageName() const;
    bool imageNameIsSet() const;
    void unsetimageName();
    void setImageName(const std::string& value);

    /// <summary>
    /// 任务执行进度
    /// </summary>

    double getProcessPercent() const;
    bool processPercentIsSet() const;
    void unsetprocessPercent();
    void setProcessPercent(double value);

    /// <summary>
    /// 子任务ID
    /// </summary>

    std::string getSubJobId() const;
    bool subJobIdIsSet() const;
    void unsetsubJobId();
    void setSubJobId(const std::string& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string currentTask_;
    bool currentTaskIsSet_;
    std::string imageName_;
    bool imageNameIsSet_;
    double processPercent_;
    bool processPercentIsSet_;
    std::string subJobId_;
    bool subJobIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_JobProgressEntities_H_
