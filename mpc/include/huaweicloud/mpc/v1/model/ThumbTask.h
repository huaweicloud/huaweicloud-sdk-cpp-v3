
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ThumbTask_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ThumbTask_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/PicInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ThumbTask
    : public ModelBase
{
public:
    ThumbTask();
    virtual ~ThumbTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThumbTask members

    /// <summary>
    /// 任务ID。  截图服务接受任务后产生的任务ID。一次最多10个。 
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 起始时间。  格式为yyyymmddhhmmss。必须是与时区无关的UTC时间，指定task_id时该参数无效。 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 结束时间。  格式为yyyymmddhhmmss。必须是与时区无关的UTC时间，指定task_id时该参数无效。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 输出文件名。
    /// </summary>

    std::string getOutputFileName() const;
    bool outputFileNameIsSet() const;
    void unsetoutputFileName();
    void setOutputFileName(const std::string& value);

    /// <summary>
    /// 用户数据。 
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 任务描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 截图文件信息。 
    /// </summary>

    std::vector<PicInfo>& getThumbnailInfo();
    bool thumbnailInfoIsSet() const;
    void unsetthumbnailInfo();
    void setThumbnailInfo(const std::vector<PicInfo>& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string outputFileName_;
    bool outputFileNameIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<PicInfo> thumbnailInfo_;
    bool thumbnailInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ThumbTask_H_
