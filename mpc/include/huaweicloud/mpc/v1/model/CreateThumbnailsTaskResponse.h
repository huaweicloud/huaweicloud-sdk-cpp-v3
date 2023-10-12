
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateThumbnailsTaskResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateThumbnailsTaskResponse_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  CreateThumbnailsTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateThumbnailsTaskResponse();
    virtual ~CreateThumbnailsTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateThumbnailsTaskResponse members

    /// <summary>
    /// 任务ID。
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
    /// 任务创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 截图文件名称
    /// </summary>

    std::string getOutputFileName() const;
    bool outputFileNameIsSet() const;
    void unsetoutputFileName();
    void setOutputFileName(const std::string& value);

    /// <summary>
    /// 指定的截图时间点
    /// </summary>

    std::string getThumbnailTime() const;
    bool thumbnailTimeIsSet() const;
    void unsetthumbnailTime();
    void setThumbnailTime(const std::string& value);

    /// <summary>
    /// 截图任务描述，当截图出现异常时，此字段为异常的原因
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string outputFileName_;
    bool outputFileNameIsSet_;
    std::string thumbnailTime_;
    bool thumbnailTimeIsSet_;
    std::string description_;
    bool descriptionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateThumbnailsTaskResponse_H_
