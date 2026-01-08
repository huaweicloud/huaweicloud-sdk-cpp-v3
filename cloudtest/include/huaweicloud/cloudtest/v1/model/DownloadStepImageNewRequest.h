
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DownloadStepImageNewRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DownloadStepImageNewRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DownloadStepImageNewRequest
    : public ModelBase
{
public:
    DownloadStepImageNewRequest();
    virtual ~DownloadStepImageNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadStepImageNewRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 父级目录名称
    /// </summary>

    std::string getParent() const;
    bool parentIsSet() const;
    void unsetparent();
    void setParent(const std::string& value);

    /// <summary>
    /// 子级目录名称
    /// </summary>

    std::string getSub() const;
    bool subIsSet() const;
    void unsetsub();
    void setSub(const std::string& value);

    /// <summary>
    /// 文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文件类型
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string parent_;
    bool parentIsSet_;
    std::string sub_;
    bool subIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadStepImageNewRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadStepImageNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DownloadStepImageNewRequest_H_
