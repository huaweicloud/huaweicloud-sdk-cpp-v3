
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateTakeOverTaskReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateTakeOverTaskReq_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CreateTakeOverTaskReq
    : public ModelBase
{
public:
    CreateTakeOverTaskReq();
    virtual ~CreateTakeOverTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateTakeOverTaskReq members

    /// <summary>
    /// 源桶名。
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 源目录名或源文件名。
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);

    /// <summary>
    /// 批量托管时的文件后缀名列表。不传或传空值时，表示托管所有音视频文件，不进行后缀名过滤。
    /// </summary>

    std::vector<std::string>& getSuffix();
    bool suffixIsSet() const;
    void unsetsuffix();
    void setSuffix(const std::vector<std::string>& value);

    /// <summary>
    /// 转码模板组名称。  若不为空，则使用指定的转码模板对上传的音视频进行转码，您可以在视频点播控制台配置转码模板，具体请参见转码设置。  &gt; 若同时设置了“**template_group_name**”和“**workflow_name**”字段，则“**template_group_name**”字段生效。
    /// </summary>

    std::string getTemplateGroupName() const;
    bool templateGroupNameIsSet() const;
    void unsettemplateGroupName();
    void setTemplateGroupName(const std::string& value);

    /// <summary>
    /// 工作流名称。  若不为空，则使用指定的工作流对上传的音视频进行处理，您可以在视频点播控制台配置工作流，具体请参见[工作流设置](https://support.huaweicloud.com/usermanual-vod/vod010041.html)。
    /// </summary>

    std::string getWorkflowName() const;
    bool workflowNameIsSet() const;
    void unsetworkflowName();
    void setWorkflowName(const std::string& value);

    /// <summary>
    /// 表示音视频处理后生成的媒资文件所存储的位置类型。  取值如下所示： - 0：表示存储到点播桶。 - 1：表示存储在租户桶。 - 2：表示存储到租户桶，并且存储路径与源文件一致。
    /// </summary>

    int32_t getHostType() const;
    bool hostTypeIsSet() const;
    void unsethostType();
    void setHostType(int32_t value);

    /// <summary>
    /// 输出桶名，host_type为1时必选
    /// </summary>

    std::string getOutputBucket() const;
    bool outputBucketIsSet() const;
    void unsetoutputBucket();
    void setOutputBucket(const std::string& value);

    /// <summary>
    /// 输出路径名，host_type为1时必选
    /// </summary>

    std::string getOutputPath() const;
    bool outputPathIsSet() const;
    void unsetoutputPath();
    void setOutputPath(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string object_;
    bool objectIsSet_;
    std::vector<std::string> suffix_;
    bool suffixIsSet_;
    std::string templateGroupName_;
    bool templateGroupNameIsSet_;
    std::string workflowName_;
    bool workflowNameIsSet_;
    int32_t hostType_;
    bool hostTypeIsSet_;
    std::string outputBucket_;
    bool outputBucketIsSet_;
    std::string outputPath_;
    bool outputPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateTakeOverTaskReq_H_
