
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_LogsTree_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_LogsTree_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v3/model/Commit.h>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  LogsTree
    : public ModelBase
{
public:
    LogsTree();
    virtual ~LogsTree();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogsTree members

    /// <summary>
    /// 存储块id
    /// </summary>

    std::string getBlobId() const;
    bool blobIdIsSet() const;
    void unsetblobId();
    void setBlobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Commit getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const Commit& value);

    /// <summary>
    /// 文件名称
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// MD5
    /// </summary>

    std::string getMd5() const;
    bool md5IsSet() const;
    void unsetmd5();
    void setMd5(const std::string& value);

    /// <summary>
    /// 存储类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string blobId_;
    bool blobIdIsSet_;
    Commit commit_;
    bool commitIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string md5_;
    bool md5IsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_LogsTree_H_
