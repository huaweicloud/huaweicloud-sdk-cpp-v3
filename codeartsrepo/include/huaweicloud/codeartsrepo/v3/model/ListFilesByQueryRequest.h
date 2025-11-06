
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListFilesByQueryRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListFilesByQueryRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ListFilesByQueryRequest
    : public ModelBase
{
public:
    ListFilesByQueryRequest();
    virtual ~ListFilesByQueryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFilesByQueryRequest members

    /// <summary>
    /// 仓库短id
    /// </summary>

    int32_t getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(int32_t value);

    /// <summary>
    /// 文件的完整路径。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// commit id，仓库的branch名或tag名
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);


protected:
    int32_t repoId_;
    bool repoIdIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string ref_;
    bool refIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFilesByQueryRequest& dereference_from_shared_ptr(std::shared_ptr<ListFilesByQueryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListFilesByQueryRequest_H_
