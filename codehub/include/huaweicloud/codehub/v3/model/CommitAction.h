
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CommitAction_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CommitAction_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  CommitAction
    : public ModelBase
{
public:
    CommitAction();
    virtual ~CommitAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitAction members

    /// <summary>
    /// 要执行的操作：create、delete、move、update、chmod
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 文件的完整路径。例如lib/class.rb
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 要移动的文件的原始完整路径。例如lib/class1.rb。仅在move操作时生效
    /// </summary>

    std::string getPreviousPath() const;
    bool previousPathIsSet() const;
    void unsetpreviousPath();
    void setPreviousPath(const std::string& value);

    /// <summary>
    /// 文件内容，create和update操作时必须。未指定内容的移动操作将保留现有文件内容，内容的任何其他值将覆盖文件内容。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 文件编码：text、base64。默认为text
    /// </summary>

    std::string getEncoding() const;
    bool encodingIsSet() const;
    void unsetencoding();
    void setEncoding(const std::string& value);

    /// <summary>
    /// 最后一个已知的提交ID。仅在update、move、delete操作时生效
    /// </summary>

    std::string getLastCommitId() const;
    bool lastCommitIdIsSet() const;
    void unsetlastCommitId();
    void setLastCommitId(const std::string& value);

    /// <summary>
    /// 启用或者禁用文件的执行模式。仅在chmod操作时生效
    /// </summary>

    bool isExecuteFilemode() const;
    bool executeFilemodeIsSet() const;
    void unsetexecuteFilemode();
    void setExecuteFilemode(bool value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string previousPath_;
    bool previousPathIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string encoding_;
    bool encodingIsSet_;
    std::string lastCommitId_;
    bool lastCommitIdIsSet_;
    bool executeFilemode_;
    bool executeFilemodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CommitAction_H_
