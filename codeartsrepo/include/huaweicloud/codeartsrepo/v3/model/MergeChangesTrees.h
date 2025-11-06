
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_MergeChangesTrees_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_MergeChangesTrees_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  MergeChangesTrees
    : public ModelBase
{
public:
    MergeChangesTrees();
    virtual ~MergeChangesTrees();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeChangesTrees members

    /// <summary>
    /// 分段路径
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 路径级别
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// 当前级别全路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 文件类型
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);


protected:
    std::string title_;
    bool titleIsSet_;
    int32_t level_;
    bool levelIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_MergeChangesTrees_H_
